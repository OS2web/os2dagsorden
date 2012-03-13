<?php
/**
 * @file
 * ballerup_kultunaut.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ballerup_kultunaut_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ballerup_kultunaut_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function ballerup_kultunaut_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Aktivitet'),
      'base' => 'node_content',
      'description' => t('Aktiviteter som vises i kalendere mm.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
