<?php
/**
 * @file
 * ballerup_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ballerup_content_types_taxonomy_default_vocabularies() {
  return array(
    's_egeord_sofd' => array(
      'name' => 'Søegeord SOFD',
      'machine_name' => 's_egeord_sofd',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
