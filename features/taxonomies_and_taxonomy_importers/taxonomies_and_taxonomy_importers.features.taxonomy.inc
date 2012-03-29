<?php
/**
 * @file
 * taxonomies_and_taxonomy_importers.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomies_and_taxonomy_importers_taxonomy_default_vocabularies() {
  return array(
    'acadremmcomittee' => array(
      'name' => 'AcadreMMComittee',
      'machine_name' => 'acadremmcomittee',
      'description' => 'Taxonomi indeholdende diverse udvalg med system-id fra Acadre MM. Bruges til mapning af dagsordensvisning på web.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'egennavne_stednavne' => array(
      'name' => 'Egennavne/stednavne',
      'machine_name' => 'egennavne_stednavne',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'kle' => array(
      'name' => 'KLE',
      'machine_name' => 'kle',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'organisation' => array(
      'name' => 'Organisation',
      'machine_name' => 'organisation',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'politik' => array(
      'name' => 'Politik',
      'machine_name' => 'politik',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'portalkategori' => array(
      'name' => 'Portalkategori',
      'machine_name' => 'portalkategori',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'redaktoertags' => array(
      'name' => 'Redaktørtags',
      'machine_name' => 'redaktoertags',
      'description' => 'Taksonomi til at opsamle redaktørers egne tags',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
