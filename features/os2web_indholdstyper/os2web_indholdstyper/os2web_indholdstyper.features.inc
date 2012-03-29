<?php
/**
 * @file
 * os2web_indholdstyper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_indholdstyper_ctools_plugin_api() {
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
function os2web_indholdstyper_node_info() {
  $items = array(
    'contentpage' => array(
      'name' => t('Indholdsside'),
      'base' => 'node_content',
      'description' => t('Almindelig webside til generel brug på sitet.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Nyhed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
