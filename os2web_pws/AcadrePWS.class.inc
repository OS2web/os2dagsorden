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
  private $client_search;

  /**
   * Initial service setup.
   */
  function __construct() {
    // Using a static allows singleton use of the connector class 
    $this->client = &drupal_static('os2web_acadre_pws_client');
    $this->client6 = &drupal_static('os2web_acadre_pws_client6');
    $this->client_search = &drupal_static('os2web_acadre_pws_client_search');

    $user = variable_get('os2web_pws_user');
    $password = variable_get('os2web_pws_password');

    $proxy = variable_get('os2web_pws_proxy', FALSE);
    $proxy_host = variable_get('os2web_pws_proxy_host');
    $proxy_port = variable_get('os2web_pws_proxy_port');
    $options['trace'] = TRUE; // For debugging purposes. Remove on prod.
    $options['exceptions'] = TRUE;
    $options['login'] = $user;
    $options['cache_wsdl'] = WSDL_CACHE_DISK;
    $options['password'] = $password;
    $options['soap_version'] = SOAP_1_1;
    if ($proxy) {
      $options['proxy_host'] = $proxy_host;
      $options['proxy_port'] = $proxy_port;
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
//        $options['cache_wsdl'] = WSDL_CACHE_DISK;
        $options['soap_version'] = SOAP_1_2;
        unset($options['location']);
        unset($options['uri']);
        try {
          $this->client6 = new SoapClient($url . '?WSDL', $options);
        } catch (Exception $sf) {
          drupal_set_message('Error connecting to PWSv6 endpoint', 'error');
        }
      }
    }
    if (!$this->client_search) {
      $url = variable_get('os2web_pws_url_search');
      $url = trim($url);
      if ($url == '') {
        drupal_set_message(t('Error, no endpoint url set for document search searvice.'), 'error');
      } else {
//        $options['cache_wsdl'] = WSDL_CACHE_DISK;
        $options['soap_version'] = SOAP_1_2;
        unset($options['location']);
        unset($options['uri']);
        try {
          $this->client_search = new SoapClient($url . '?WSDL', $options);
        } catch (SoapFault $sf) {
          drupal_set_message('Error connecting to PWS document search service endpoint', 'error');
        }
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
    $result = &drupal_static(__FUNCTION__ . $query, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client_search) {
      $query = str_replace('-','/',$query);
      $query = explode('/', $query);
      if (is_numeric($query[0]) && is_numeric($query[1])) {
        try {
          $result = (int) $this->client_search->getCaseSystemIdByYearAndSerial(array('year' => $query[0], 'serial' => $query[1]))->GetCaseSystemIdByYearAndSerialResult;
//          $result = $result!=-1?$result:false;
        } catch (SoapFault $sf) {
          $trace = $this->client_search->__getLastRequest();
          error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $trace = ' . print_r($trace, 1));
          $result = $sf;
        }
      }
    }
    return $result;
  }

  /**
   * Looks up a journaling entry and returns the id of a document.
   *
   * @param string $query A case journaling number, ie. 14293/11
   */
  public function lookupDoc($query) {
    $result = &drupal_static(__FUNCTION__ . $query, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client_search) {
      $query = str_replace('-','/',$query);
      $query = explode('/', $query);
      if (is_numeric($query[0]) && is_numeric($query[1])) {
        try {
          $result = (int) $this->client_search->getDocumentSystemIdByYearAndSerial(array('year' => $query[1], 'serial' => $query[0]))->GetDocumentSystemIdByYearAndSerialResult;
          $result = $result != -1 ? $result : false;
        } catch (SoapFault $sf) {
          $trace = $this->client_search->__getLastRequest();
          error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $trace = ' . print_r($trace, 1));
          $result = $sf;
        }
      }
    }
    return $result;
  }

  public function fetchCase($id) {
    $result = &drupal_static(__FUNCTION__ . $id, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client6) {

      try {
        $result = $this->client6->getCase($id);
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
        $result = simplexml_load_string($result)->xpath('//soap:Body[1]/*/*');
      } catch (SoapFault $sf) {

      }
    }
    return $result;
  }

  public function getDocLock($id) {
    $result = &drupal_static(__FUNCTION__ . $id, FALSE);
    if ($result != FALSE) {
      return $result;
    }
    if ($this->client) {
      $request = <<< XML
<?xml version="1.0" encoding="utf-8"?>
<soap:Envelope xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/">
  <soap:Body>
    <GetLockStatusDocumentId xmlns="http://www.traen.com/2007/09/06/schema">[DocID]</GetLockStatusDocumentId>
  </soap:Body>
</soap:Envelope>
XML;
      try {
        $result = $this->client->__doRequest(t($request, array('[DocID]' => $id)), $this->client->location, $this->client->uri . 'GetLockStatus', SOAP_1_1);
        $result = simplexml_load_string($result);
        if ('' !== (string)array_pop($result->xpath('//soap:Fault/faultcode'))) { // This will indicate fault
          $result = false;

        } else {
        $result = $result->xpath('//soap:Body');
        $result = ('true' === (string)$result[0]->DocumentLockStatus)?true:false;
//        $result = (string)array_pop($result->xpath('//soap:Fault/faultcode')); // This will indicate fault
        }
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

  public function getDocRef($id) {
    $doc = $this->getDocument($id);
    if (isset($doc->DocumentVersion->DocumentFileReference) && isset($doc->DocumentVersion->VersionNumber)) {
      return array(
          'ref' => $doc->DocumentVersion->DocumentFileReference,
          'ver' => $doc->DocumentVersion->VersionNumber,
      );
    } else {
      return false;
    }
  }

  public function getDocFileName($ref, $ver = FALSE) {
    $result = false;
    if (!is_numeric($ver)) {
      $info = $this->getDocRef($ref);
      $ref = $info['ref'];
      $ver = $info['ver'];
    }
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
        $result = (string) array_shift(simplexml_load_string($result)->xpath('//soap:Body'))->FileName1;
      } catch (SoapFault $sf) {

      }
    }
    return $result;
  }

  public function getDocData($ref, $ver = FALSE) {
    $dest = DEFAULT_DOC_CACHE_PATH;
    $result = false;
    if (!is_numeric($ver)) {
      $info = $this->getDocRef($ref);
      $ref = $info['ref'];
      $ver = $info['ver'];
    }
    $query = db_select('os2web_adlib_api_doc_files', 'df')->fields('df', array('fid'))->condition('did', $ref);
    $fid = $query->execute()->fetchField();
    if ($fid > 0) {
//      error_log(basename(__FILE__) . ':' . __LINE__ . " jm@bellcom.dk: File cached.");
      $result = file_load($fid);
      $result = file_create_url($result->uri);
    } else {
//      error_log(basename(__FILE__) . ':' . __LINE__ . " jm@bellcom.dk: Fetching file from WS.");
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
//        $result = simplexml_load_string($result)->xpath('/soap:Envelope/soap:Body/*');
          $result = (string) array_shift(simplexml_load_string($result)->xpath('//soap:Body'))->XMLBinary;
          if (file_prepare_directory($dest, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS)) {
            $result = file_save_data(base64_decode($result), $dest . (string) $ref . '-' . (string) $ver . '-' . $this->getDocFileName($ref, $ver), FILE_EXISTS_REPLACE);
            if (FALSE != $result) {
//              $rec = array('fid' => $result->fid, 'did' => $ref);
//              drupal_write_record('os2web_pws_doc_files', $rec);
              drupal_load('module','os2web_adlib_api');
              os2web_adlib_api_convert_to_pdf($result->fid,$ref);
              $result = file_create_url($result->uri);
            }
          } else {
            drupal_set_message('There was an error creating the file', 'error');
          }
//        $result = $result[0];
        } catch (SoapFault $sf) {

        }
      }
    }
    return $result;
  }

  public function getDocDataRaw($ref, $ver = FALSE) {
    $result = false;
    if (!is_numeric($ver)) {
      $info = $this->getDocRef($ref);
      $ref = $info['ref'];
      $ver = $info['ver'];
    }
    error_log(basename(__FILE__) . ':' . __LINE__ . " jm@bellcom.dk: Fetching file from WS.");
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
        $result = (string) array_shift(simplexml_load_string($result)->xpath('//soap:Body'))->XMLBinary;
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

  public function getTrace() {
    return array(
        'request' => $this->client6->__getLastRequest(),
        'response' => $this->client6->__getLastResponse(),
    );
  }

}
