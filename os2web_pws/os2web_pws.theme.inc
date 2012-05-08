<?php

// $Id$
/*
 * 
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

function theme_esdh_case($vars) {
  $id = $vars['id'];

  $pws = _os2web_pws_get_instance();
  $case = $pws->fetchCase($id);
  if (FALSE === $case) {
    return FALSE;
  }
  $access_grant = array(
      'accesscode' => 'KK',
//        'publication' => '3',
  );
  $access = array(
      'accesscode' => $case->AccessCode,
//        'publication' => $doc->Record->PublicationIndicator,
  );
  $valid = _os2web_pws_array_compare($access, $access_grant);
  if (!$valid) {
    $html .= '<p id="casenotpublic">This case is not publicly available.</p>';
    return $html;
  }
  $docs = $pws->getCaseDocs($id);
  $header = array(t('Id'), t('Title'), t('Contents'), t('Date'));
  $rows = array();
  $rows[] = array($case->CaseFileNumberIdentifier, $case->CaseFileTitleText, $case->CustomFields->df1, format_date(strtotime($case->CreationDate), 'custom', 'd-m-Y'));
  $html = theme('table', array('header' => $header, 'rows' => $rows));
  $docids = array();
  foreach ($docs as $doc) {
    $docids[] = (int) $doc->Document->DocumentIdentifier;
  }
  $html .= theme('esdh_document', array('id' => $docids));
  return $html;
}

function theme_esdh_document($vars) {
  $id = $vars['id'];

  $pws = _os2web_pws_get_instance();
  if (!is_array($id)) {
    $id = array($id);
  }
  $html = '';
  $rows = array();
  $header = array(
      t('Title'),
//      t('Description'),
      t('Date')
  );

  foreach ($id as $docid) {
    $doc = $pws->getDocument($docid);
    $access_grant = array(
        'accesscode' => 'KK',
        'publication' => '3',
        'lockstatus' => true,
    );
    $access = array(
        'accesscode' => $doc->Record->AccessCode,
        'publication' => $doc->Record->PublicationIndicator,
        'lockstatus' => $pws->getDocLock($docid),
    );
    $public_valid = _os2web_pws_array_compare($access, $access_grant);
    if ($public_valid) { // Only show public documents
      //FIXME: Check publication status
      if (isset($doc->Document)) {
        $rows[] = array(
            l($doc->Document->DocumentTitleText, $pws->getDocData($doc->Document->DocumentIdentifier)),
//            $doc->Record->DescriptionText,
            $doc->Record->DocumentDate,
        );
      }
    }
  }
  if (count($rows) == 0) {
    $html .= '<p>' . t('This case contains no public documents.') . '</p>';
    return $html;
  }
  $html .= '<p>' . t('This case contains @docs public documents', array('@docs' => count($rows))) . '</p>';
  $html .= theme('table', array('header' => $header, 'rows' => $rows));
  return $html;
}

function _os2web_pws_array_compare(array $a1, array $a2) {
  $result = true;
  foreach ($a1 as $key => $value) {
    if (isset($a2[$key]) && $a2[$key] === $value) {
      $result = $result && true;
    } else {
      $result = $result && false;
    }
  }
  return $result;
}