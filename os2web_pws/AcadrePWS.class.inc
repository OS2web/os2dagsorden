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
    $options['soap_version'] = SOAP_1_2;
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
        $options['location'] = 'http://10.1.1.115/Acadre/Acadre.CM.PublicServices/AcadreServiceV4.asmx';
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
    return $this->client->__soapCall('GetAllDocuments', array('CaseFileIdentifier'=>'340222'));
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
    if ($this->client) {
      return $this->client->getMainDocument($id);
    } else {
      return false;
    }
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