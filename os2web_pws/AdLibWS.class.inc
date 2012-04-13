<?php

/*
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

/**
 * Description of AdLibWS
 *
 * @author jm
 */
class AdLibWS {

  private static $client;

  public function __construct() {
    if (!isset(self::$client)) {
      $options = array(
          'soapversion' => SOAP_1_2,
          'trace' => TRUE,
      );
      if (variable_get('os2web_pws_proxy', FALSE)) {
        $options['proxy_host'] = variable_get('os2web_pws_proxy_host');
        $options['proxy_port'] = variable_get('os2web_pws_proxy_port');
      }
      self::$client = new SoapClient('http://10.1.1.127/ExponentWSA/ExponentWSA.asmx?wsdl', $options);
    }
  }

  public function addJobFolder($postfix = '') {
    $folder_info = simplexml_load_string(self::$client->addJobFolder()->AddJobFolderResult);
    $result = 'exponentJobs/' . ((string) $folder_info['FolderID']) . '/' . $postfix;
    return $result;
  }

  public function uploadData($filename, $data) {
    $payload = '<JobFiles><JobFile FileName="' . $filename . '" Data="' . base64_encode($data) . '" Length="' . strlen($data) . '" /></JobFiles>';
    return self::$client->AddJobFilesAsStream(array(
            'JobFolder' => $this->addJobFolder('Input'),
            'XmlStream' => $this->cdataPack($payload),
        ))->AddJobFilesAsStreamResult;
  }

  private function cdataPack($data) {
    return '<![CDATA[' . $data . ']]>';
  }

  public function getTrace() {
    return array(
        'request' => self::$client->__getLastRequest(),
        'response' => self::$client->__getLastResponse(),
    );
  }

}

