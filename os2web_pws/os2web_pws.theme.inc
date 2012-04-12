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
  $docs = $pws->getCaseDocs($id);
  $header = array(t('Id'), t('Title'), t('Contents'), t('Date'));
  $rows = array();
  $rows[] = array($case->CaseFileNumberIdentifier,$case->CaseFileTitleText, $case->CustomFields->df1, format_date(strtotime($case->CreationDate), 'custom', 'd-m-Y'));
  $html = theme('table', array('header' => $header, 'rows' => $rows));
  $docids = array();
  foreach ($docs as $doc) {
    $docids[] = (int) $doc->Document->DocumentIdentifier;
  }
  $html .= '<p>' . t('This case contains @docs documents', array('@docs' => count($rows))) . '</p>';
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
  $header = array(t('Title'), t('Description'), t('Date'));

  foreach ($id as $docid) {
    $doc = $pws->getDocument($docid);
//    error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $doc = ' . print_r($doc, 1));
//    if (FALSE != $doc && $doc->Record->PublicationIndicator == AVAILABLE_PUBLIC) { // Only show public documents
    if (FALSE != $doc) { // Only show public documents
      //FIXME: Check publication status
      $rows[] = array(
          l($doc->Document->DocumentTitleText, $pws->getDocData($doc->Document->DocumentIdentifier)),
          $doc->Record->DescriptionText,
          $doc->Record->DocumentDate,
      );
    }
  }
  if (count($rows) == 0) {
    return false;
  }
  $html .= theme('table', array('header' => $header, 'rows' => $rows));
  return $html;
}