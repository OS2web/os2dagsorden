<?php

// $Id$
/*
 * 
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */
module_load_include('inc', 'os2web_pws', 'CaseService.class');

class AcadrePWS extends CaseService {

  private $client;
  private $client6;

  /**
   * Initial service setup.
   */
  function __construct() {
    // Using a static allows singleton use of the connector class 
    $this->client = &drupal_static('os2web_acadre_pws_client');
    $user = variable_get('os2web_pws_user');
    $password = variable_get('os2web_pws_password');

    $proxy = variable_get('os2web_pws_proxy', FALSE);
    $proxy_host = variable_get('os2web_pws_proxy_host');
    $proxy_port = variable_get('os2web_pws_proxy_port');
    $options['trace'] = TRUE; // For debugging purposes. Remove on prod.
    $options['login'] = $user;
    $options['password'] = $password;
    $options['soap_version'] = SOAP_1_1;
    if (variable_get('os2web_pws_proxy', false)) {
      $options['proxy_host'] = variable_get('os2web_pws_proxy_host');
      $options['proxy_port'] = variable_get('os2web_pws_proxy_port');
    }

    if (!$this->client) {
      $url = variable_get('os2web_pws_url');
      $url = trim($url);
      if ($url == '') {
        drupal_set_message(t('Error, no endpoint url set for v4soap.'), 'error');
      } else {
        //FIXME: Use a wellformed WSDL for V4 services.
        $options['location'] = $url;
        $options['uri'] = 'http://www.traen.com/2007/09/06/';
//        $this->client = new SoapClient('/home/jm/workspace/sites/os2web'.base_path().drupal_get_path('module','os2web_pws').'/wsdl/AcadreServiceV4.wsdl', $options);
        $this->client = new SoapClient(null, $options);
      }
    }
    if (!$this->client6) {
      $url = variable_get('os2web_pws_url_v6');
      $url = trim($url);
      if ($url == '') {
        drupal_set_message(t('Error, no endpoint url set for v6.'), 'error');
      } else {
        $options['cache_wsdl'] = WSDL_CACHE_DISK;
        $options['soap_version'] = SOAP_1_2;
        unset($options['location']);
        unset($options['uri']);
        $this->client6 = new SoapClient($url . '?WSDL', $options);
      }
    }
  }

  /**
   * Looks up a journaling entry and returns the id of a case.
   * FIXME: Make this a true call to webservice.
   *
   * @param string $query A case journaling number, ie. 11/14293
   */
  public function lookupCase($query) {
    return false;
  }

  /**
   * Looks up a journaling entry and returns the id of a document.
   * FIXME: Make this a true call to webservice.
   *
   * @param string $query A case journaling number, ie. 14293/11
   */
  public function lookupDoc($query) {
    return false;
  }

  public function fetchCase($id) {
    $result = &drupal_static(__FUNCTION__ . $id, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client6) {

      $result = $this->client6->getCase($id);
      try {
        
      } catch (Exception $exc) {

      }
    }
    return $result;
  }

  public function getCaseDocs($id) {
    $result = &drupal_static(__FUNCTION__ . $id, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client) {
      $request = <<< XML
<?xml version="1.0" encoding="utf-8"?>
<soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">
  <soap:Body>
    <CaseFileIdentifier xmlns="http://www.traen.com/2007/09/06/schema">[CaseID]</CaseFileIdentifier>
  </soap:Body>
</soap:Envelope>
XML;
      try {
        $result = $this->client->__doRequest(t($request, array('[CaseID]' => $id)), $this->client->location, $this->client->uri . 'GetAllDocuments', SOAP_1_1);
        $result = simplexml_load_string($result)->xpath('/soap:Envelope/soap:Body[1]/*/*');
      } catch (SoapFault $sf) {

      }
    }
    return $result;
  }

  public function getDocument($id) {
    $result = &drupal_static(__FUNCTION__ . $id, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client6) {
      try {
        $result = $this->client6->getMainDocument($id);
      } catch (SoapFault $sf) {
        $result = FALSE;
      }
    }

    return $result;
  }

  public function getDocFileName($ref, $ver) {
    $result = false;
    if ($this->client) {
      $request = <<< XML
<?xml version="1.0" encoding="utf-8"?>
<soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">
  <soap:Body>
    <FileVersionReference1 xmlns="http://www.traen.com/2007/09/06/schema">
      <FileReference>@FileRef</FileReference>
      <Version>@Version</Version>
    </FileVersionReference1>
  </soap:Body>
</soap:Envelope>
XML;
      try {
        $result = $this->client->__doRequest(t($request, array('@FileRef' => $ref, '@Version' => $ver)), $this->client->location, $this->client->uri . 'GetFileName', SOAP_1_1);
        $result = array_shift(simplexml_load_string($result)->xpath('/soap:Envelope/soap:Body'))->FileName1;
      } catch (SoapFault $sf) {

      }
    }
    return $result;
  }

  public function getDocData($ref, $ver) {
    $result = false;
    if ($this->client) {
      $request = <<< XML
<?xml version="1.0" encoding="utf-8"?>
<soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">
  <soap:Body>
    <FileVersionReference xmlns="http://www.traen.com/2007/09/06/schema">
      <FileReference>@FileRef</FileReference>
      <Version>@Version</Version>
    </FileVersionReference>
  </soap:Body>
</soap:Envelope>
XML;
      try {
        $result = $this->client->__doRequest(t($request, array('@FileRef' => $ref, '@Version' => $ver)), $this->client->location, $this->client->uri . 'GetPhysicalDocument', SOAP_1_1);
//        $result = simplexml_load_string($result)->xpath('/soap:Envelope/soap:Body[1]/*/*');
      } catch (SoapFault $sf) {

      }
    }
    return $result;
  }

  public function fetchDoc($id) {
    if ($this->client) {
      return $this->client->getCase($id);
    } else {
      return false;
    }
  }

  public function searchCases($query) {
    $search = array(
//        'CaseFileTitleText' => 'test',
//        'CaseFileTitleText' => '*',
//        'CaseFileTypeCode' => 'EMSAG',
//        'CaseFileNumberIdentifier' => '11/14293',
//        'AdvancedSearchCaseCriterion' => array(
        'ClassificationCriterion' => array(
            'PrincipleLiteral' => 'Facetter',
            'ClassificationLiteral' => 'P19',
        )
//        )
    );
    $result = false;
//    try {
    $result = $this->client->searchCases($search);
//    } catch (Exception $exc) {}
//    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $this->client = ' . $this->client->__getLastRequest());
    return $result;
  }

}