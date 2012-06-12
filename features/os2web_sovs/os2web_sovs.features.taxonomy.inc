<?php
/**
 * @file
 * os2web_sovs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_sovs_taxonomy_default_vocabularies() {
  return array(
    'sidevisning' => array(
      'name' => 'Sidevisning',
      'machine_name' => 'sidevisning',
      'description' => 'Bruges til at definere om siden skal vises med eller uden højre blokke.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
