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
    'local_plan' => array(
      'name' => t('Lokalplan'),
      'base' => 'node_content',
      'description' => t('Lokalplaner vedtaget i kommunen.'),
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
      'title_label' => t('Titel'),
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
  );
  return $items;
}
