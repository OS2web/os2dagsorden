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
          'soapversion' => SOAP_1_1,
          'trace' => TRUE,
      );
      if (variable_get('os2web_pws_proxy', FALSE)) {
        $options['proxy_host'] = variable_get('os2web_pws_proxy_host');
        $options['proxy_port'] = variable_get('os2web_pws_proxy_port');
      }
      self::$client = new SoapClient('http://10.1.1.127/ExponentWSA/ExponentWSA.asmx?wsdl', $options);
    }
  }

  /**
   * Starts a job on the adlib server
   *
   * @param array $fileInfo - fileinfo structure
   * @return type
   */
  public function addJob($fileInfo) {
    $filename = pathinfo($fileInfo['filename'], PATHINFO_FILENAME);
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
              <JOB:DOCINPUT FILENAME="' . $fileInfo['filename'] . '" FOLDER="c:\\Inetpub\\wwwroot\\' . $fileInfo['in_folder'] . '" />
            </JOB:DOCINPUTS>
            <JOB:DOCOUTPUTS>
              <JOB:DOCOUTPUT FILENAME="' . $filename . '.pdf' . '" FOLDER="c:\\Inetpub\\wwwroot\\' . $fileInfo['out_folder'] . '" DOCTYPE="PDF" />
            </JOB:DOCOUTPUTS>
            <JOB:SETTINGS>
              <JOB:HEADER ENABLED="Yes" TEXTRIGHT="&amp;[Page] of &amp;[Pages]" LAYER="Foreground" />
              <JOB:WATERMARK ENABLED="Yes" FONTCOLOR="6447714" FONTNAME="Helvetica" FONTSIZE="48" LAYER="Foreground" TEXT="TESTING!"/>
            </JOB:SETTINGS>
          </JOB>
        </JOBS>';
    return simplexml_load_string(self::$client->addJob(array('jobInfo' => $jobInfo, 'jobTicket' => $jobTicket))->AddJobResult);

  }

  public function getJobStatus($id) {
    if (isset($id->JobSettings['JobID'])) {
      $id = $id->JobSettings['JobID'];
    }
    return simplexml_load_string(self::$client->getJobStatus(array('jobID' => $id, 'isUserJobID' => false))->GetJobStatusResult);
  }

  public function addJobFolder() {
    $folder_info = simplexml_load_string(self::$client->addJobFolder()->AddJobFolderResult);
    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $folder_info = ' . print_r($folder_info, 1));
    $result = 'ExponentJobs\\' . ((string) $folder_info['FolderID']);
    return $result;
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
    if (!isset($folder)) {
      $folder = $this->addJobFolder();
    }
    $payload = '
      <JobFiles>
        <JobFile FileName="' . $filename . '" Data="' . base64_encode($data) . '" Length="' . strlen($data) . '" />
      </JobFiles>';
    $status = self::$client->AddJobFilesAsStream(array(
            'JobFolder' => $folder . '\\Input',
            'XmlStream' => $payload,
        ))->AddJobFilesAsStreamResult;
    $status = (string) simplexml_load_string($status)->System['Status'];
    if (strcmp($status, 'Success') == 0) {
      return array(
          'basefolder' => $folder,
          'in_folder' => $folder . '\\Input',
          'out_folder' => $folder . '\\Output',
          'filename' => $filename
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
        'request' => self::$client->__getLastRequest(),
        'response' => self::$client->__getLastResponse(),
    );
  }

}

