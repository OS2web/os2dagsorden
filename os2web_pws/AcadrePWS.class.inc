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
        drupal_set_message(t('Error, no endpoint url set for v4soap.'));
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
        drupal_set_message(t('Error, no endpoint url set for v6.'));
      } else {
        $options['cache_swdl'] = WSDL_CACHE_DISK;
        $this->client6 = new SoapClient($url . '?WSDL', $options);
      }
    }
  }

  function test_v4() {
    $result = false;
    $request = <<< XML
<?xml version="1.0" encoding="utf-8"?>
<soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">
  <soap:Body>
    <CaseFileIdentifier xmlns="http://www.traen.com/2007/09/06/schema">[CaseID]</CaseFileIdentifier>
  </soap:Body>
</soap:Envelope>
XML;
    try {
//      $result = $this->client->__soapCall(null, array(new SoapParam(340222, 'CaseFileIdentifier')), array('soapaction' => $this->client->uri . 'GetAllDocuments'));
      $result = $this->client->__doRequest(t($request, array('[CaseID]' => 340222)), $this->client->location, $this->client->uri . 'GetAllDocuments', SOAP_1_1);
    } catch (SoapFault $sf) {
//      error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $sf = ' . print_r($sf, 1));
    }
    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $this->client->getLastRequestHeaders() = ' . print_r($this->client->__getLastRequestHeaders(), 1));
    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $this->client->getLastRequest() = ' . print_r($this->client->__getLastRequest(), 1));
    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $this->client->getLastResponseHeaders() = ' . print_r($this->client->__getLastResponseHeaders(), 1));
    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $this->client->getLastResponse() = ' . print_r($this->client->__getLastResponse(), 1));
    return $result;
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

  public function fetchCase($id) {
    if ($this->client) {

      try {
        return $this->client->getCase($id);
      } catch (Exception $exc) {

      }
    }
    return false;
  }

  public function getCaseDocs($id) {
    $result = false;
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