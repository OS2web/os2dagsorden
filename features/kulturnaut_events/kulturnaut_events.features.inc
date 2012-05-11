<?php
/**
 * @file
 * kulturnaut_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kulturnaut_events_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function kulturnaut_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kulturnaut_events_node_info() {
  $items = array(
    'knactivity' => array(
      'name' => t('Kultunaut begivenhed'),
      'base' => 'node_content',
      'description' => t('Præsentere importeret kulturnaut begivenheder fra Kulturnaut.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
