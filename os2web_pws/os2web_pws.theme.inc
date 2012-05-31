<?php
define('ACADRE_CM_ACCESS_OPEN_DOCUMENT', '3');
define('ACADRE_CM_ACCESS_OPEN_CASE', '1');
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
  $valid = _os2web_pws_case_access($id);
  if (!$valid) {
    $html .= '<p id="casenotpublic">This case is not publicly available.</p>';
    return $html;
  }
  $docs = $pws->getCaseDocs($id);
  $docids = array();
  foreach ($docs as $doc) {
    $docids[] = (int) $doc->Document->DocumentIdentifier;
  }
  $html = theme('esdh_document', array('id' => $docids, 'iscase' => true));
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
  foreach ($id as $docid) {
    $doc = $pws->getDocument($docid);
    if (_os2web_pws_doc_access($docid)) { // Only show public documents
      if (isset($doc->Document) && _os2web_pws_case_access($doc->Record->CaseFileReference)) {
        $rows[] = array(
            l($doc->Document->DocumentTitleText, $pws->getDocData($doc->Document->DocumentIdentifier)) . '<span class="documentdate">' . format_date(strtotime($doc->Record->RecordLatestUpdateDate), 'custom', 'd/m/Y') . '</span>',
        );
      }
    }
  }
  if (count($rows) == 0) {
    if ($vars['iscase']) {
      $html .= '<p>' . t('This case contains no public documents.') . '</p>';
    }
    return $html;
  }
  /* Hack and slash
    if (isset($vars['iscase'])&&$vars['iscase']) {
    $html .= '<p>' . t('This case contains @docs public documents', array('@docs' => count($rows))) . '</p>';
    }
    $html .= theme('table', array('header' => $header, 'rows' => $rows)); */
  $html .= theme('table', array('rows' => $rows));
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

function _os2web_pws_case_access($caseid) {
  $pws = _os2web_pws_get_instance();
  $case = $pws->fetchCase($caseid);
  if (FALSE === $case) {
    return FALSE;
  }
  $access_grant = array(
      'accesscode' => 'KK',
      'restricted' => ACADRE_CM_ACCESS_OPEN_CASE,
  );
  $access = array(
      'accesscode' => $case->AccessCode,
      'restricted' => $case->RestrictedFromPublicText,
  );
  return _os2web_pws_array_compare($access, $access_grant);
}

function _os2web_pws_doc_access($docid) {
  $pws = _os2web_pws_get_instance();
  $doc = $pws->getDocument($docid);
  $access_grant = array(
      'accesscode' => 'KK',
      'publication' => ACADRE_CM_ACCESS_OPEN_DOCUMENT,
      'lockstatus' => true,
  );
  $access = array(
      'accesscode' => $doc->Record->AccessCode,
      'publication' => $doc->Record->PublicationIndicator,
      'lockstatus' => $pws->getDocLock($docid),
  );
  return _os2web_pws_array_compare($access, $access_grant);
}
