<?php
/**
 * @file
 * os2web_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_context_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function os2web_context_node_info() {
  $items = array(
    'esdh_dokument' => array(
      'name' => t('ESDH Dokument'),
      'base' => 'node_content',
      'description' => t('En side der præsentere en eller flere filer fra ESDH systemet.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'esdh_sag' => array(
      'name' => t('ESDH Sag'),
      'base' => 'node_content',
      'description' => t('Viser en sag fra ESDH systemet.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
