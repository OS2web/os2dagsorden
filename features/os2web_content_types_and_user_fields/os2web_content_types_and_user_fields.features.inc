<?php
/**
 * @file
 * os2web_content_types_and_user_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_content_types_and_user_fields_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function os2web_content_types_and_user_fields_node_info() {
  $items = array(
    'bullet_point' => array(
      'name' => t('Bullet Point'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bullet_point_attachment' => array(
      'name' => t('Bullet Point Attachment'),
      'base' => 'node_content',
      'description' => t('is an attachment to bullet point'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'meeting' => array(
      'name' => t('Meeting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speaker_paper' => array(
      'name' => t('Speaker paper'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
