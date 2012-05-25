<?php
/**
 * @file
 * os2web_content_types_and_user_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_content_types_and_user_fields_taxonomy_default_vocabularies() {
  return array(
    'committee' => array(
      'name' => 'Committee',
      'machine_name' => 'committee',
      'description' => 'Udvalg',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'lokation' => array(
      'name' => 'Lokation',
      'machine_name' => 'lokation',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'meetin_status' => array(
      'name' => 'Meeting status',
      'machine_name' => 'meetin_status',
      'description' => 'represents the current of the meeting',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
