<?php
/**
 * @file
 * ballerup_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ballerup_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ballerup_content_types_node_info() {
  $items = array(
    'files' => array(
      'name' => t('Dokumenter og filer'),
      'base' => 'node_content',
      'description' => t('Filer, pdf\'er, docs og andre filtyper.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'iframe_selvbetjeningsl_sning_mm' => array(
      'name' => t('iFrame, Selvbetjeningsløsning mm.'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Kommunal institution, bibliotek, svømmehal etc.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'local_plan' => array(
      'name' => t('Lokalplan'),
      'base' => 'node_content',
      'description' => t('Lokalplaner vedtaget i kommunen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'media' => array(
      'name' => t('Medier'),
      'base' => 'node_content',
      'description' => t('Video og audio.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Medarbejder, kontaktperson mm.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
    'politician' => array(
      'name' => t('Politiker'),
      'base' => 'node_content',
      'description' => t('Medlemmer af byrådet og andre politikere.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
    'referat' => array(
      'name' => t('Referat'),
      'base' => 'node_content',
      'description' => t('Mødereferater og anden dokumentation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'right_column' => array(
      'name' => t('Højrespalte-afsnit'),
      'base' => 'node_content',
      'description' => t('Information som bruges flere steder i højre spalte knyttet til sider, artikler, nyheder eller andet.'),
      'has_title' => '1',
      'title_label' => t('Kort overskrift'),
      'help' => '',
    ),
    'tema' => array(
      'name' => t('Tema banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
