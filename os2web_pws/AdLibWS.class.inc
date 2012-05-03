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

  private $client;
  private static $base_path = 'c:\\Inetpub\\wwwroot\\';
  private static $base_url = 'http://10.1.1.127/';

  public function __construct() {
    if (!isset($this->client)) {
      $options = array(
          'soapversion' => SOAP_1_2,
          'trace' => TRUE,
      );
      if (variable_get('os2web_pws_proxy', FALSE)) {
        $options['proxy_host'] = variable_get('os2web_pws_proxy_host');
        $options['proxy_port'] = variable_get('os2web_pws_proxy_port');
      }
      $url = variable_get('os2web_adlib_url', 'http://706CAR01/ExponentWSA/ExponentWSA.asmx?wsdl');
      $url = preg_replace('/([fhtps]{3,5}):\/\/(.+?)\//', self::$base_url, $url);
      preg_match('%http://.+?/%', $url, $matches);
      self::$base_url = array_shift($matches);
      try {
//        $this->client = new SoapClient($url, $options);
      } catch (Exception $exc) {
        error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $exc = ' . print_r($exc, 1));
      }
    }
  }

  /**
   * Starts a job on the adlib server
   *
   * @param array $fileInfo - fileinfo structure
   * @return type
   */
  public function addJob($fileInfo) {
    if (!isset($this->client)) {
      return false;
    }
    $jobInfo = '<JobInfo>
        <JobSettings JobID="" UserJobID="" JobPriority="3" AdlibServer="" AdlibServerGroup=""/>
        <JobFileMsg Count=""/>
        <JobFileList>
          <JobFile Filename="" Folder=""/>
        </JobFileList>
      </JobInfo>';
    $jobTicket = '<?xml version="1.0" encoding="ISO-8859-1"?>
        <?AdlibExpress applanguage="USA" appversion="2.5" dtdversion="1.0" ?>
        <!DOCTYPE JOBS SYSTEM "C:\Adlib Express\DTD\AdlibExpress.dtd">
        <JOBS xmlns:JOBS="http://www.Adlibsoftware.com" xmlns:JOB="http://www.Adlibsoftware.com">
          <JOB>
            <JOB:DOCINPUTS>
              <JOB:DOCINPUT FILENAME="' . $fileInfo['filename'] . '" FOLDER="' . self::$base_path . $fileInfo['in_folder'] . '" />
            </JOB:DOCINPUTS>
            <JOB:DOCOUTPUTS>
              <JOB:DOCOUTPUT FILENAME="' . $fileInfo['out_filename'] . '" FOLDER="' . self::$base_path . $fileInfo['out_folder'] . '" DOCTYPE="PDF" />
            </JOB:DOCOUTPUTS>
            <JOB:SETTINGS>
              <JOB:HEADER ENABLED="Yes" TEXTRIGHT="&amp;[Page] of &amp;[Pages]" LAYER="Foreground" />
              <JOB:WATERMARK ENABLED="Yes" FONTCOLOR="6447714" FONTNAME="Helvetica" FONTSIZE="48" LAYER="Foreground" TEXT="TESTING!"/>
            </JOB:SETTINGS>
          </JOB>
        </JOBS>';
    return simplexml_load_string($this->client->addJob(array('jobInfo' => $jobInfo, 'jobTicket' => $jobTicket))->AddJobResult);
  }

  public function getJobStatus($id) {
    if (isset($id->JobSettings['JobID'])) {
      $id = $id->JobSettings['JobID'];
    }
    if (isset($this->client)) {
      $result = $this->client->getJobStatus(array('jobID' => $id, 'isUserJobID' => false))->GetJobStatusResult;
      $return = (object) array();
      if (strncmp('<', $result, 1) === 0) {
        $return->status = (string) simplexml_load_string($result)->CurrentJobStatus['Status'];
        $return->result = simplexml_load_string($result);
      } else {
        $return->status = 'Not found';
        $return->result = $result;
      }
    } else {
      $result->status = 'Not found';
    }
    return $result;
  }

  public function addJobFolder() {
    if ($this->client) {
      $folder_info = simplexml_load_string($this->client->addJobFolder()->AddJobFolderResult);
      $result = 'ExponentJobs\\' . ((string) $folder_info['FolderID']);
      return $result;
    }
  }

  /**
   * This method uploads a file to AdLib server
   *
   * @param string $filename - Filename
   * @param mixed $data - Binary contents of data
   * @param string $folder - Optional
   * @return mixed - False if call failed, otherwise a fileinfo structure
   */
  public function uploadData($filename, $data, $folder = NULL) {
    if (!isset($this->client)) {
      return false;
    }
    if (!isset($folder)) {
      $folder = $this->addJobFolder();
    }
    $payload = '
      <JobFiles>
        <JobFile FileName="' . $filename . '" Data="' . base64_encode($data) . '" Length="' . strlen($data) . '" />
      </JobFiles>';
    $status = $this->client->AddJobFilesAsStream(array(
            'JobFolder' => $folder . '\\Input',
            'XmlStream' => $payload,
        ))->AddJobFilesAsStreamResult;
    $status = (string) simplexml_load_string($status)->System['Status'];
    if (strcmp($status, 'Success') == 0) {
      return array(
          'basefolder' => $folder,
          'in_folder' => $folder . '\\Input',
          'out_folder' => $folder . '\\Output',
          'out_url' => self::$base_url . str_replace('\\', '/', $folder . '/Output/'),
          'filename' => $filename,
          'out_filename' => pathinfo($filename, PATHINFO_FILENAME) . '.pdf',
      );
    } else {
      return false;
    }
  }

  /**
   * Wraps xml in CDATA tag
   *
   * @param string $data
   * @return string
   */
  private function cdataPack($data) {
    return '<![CDATA[' . $data . ']]>';
  }

  public function getTrace() {
    return array(
        'request' => $this->client->__getLastRequest(),
        'response' => $this->client->__getLastResponse(),
    );
  }

}

