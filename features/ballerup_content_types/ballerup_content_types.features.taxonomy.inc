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
    'billeder_og_filer' => array(
      'name' => 'Billeder og filer',
      'machine_name' => 'billeder_og_filer',
      'description' => 'Bruges til at kategorisere medier og filer ved upload mm.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '1',
    ),
    'bydel' => array(
      'name' => 'Bydel',
      'machine_name' => 'bydel',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-7',
    ),
    'grupper_og_udvalg' => array(
      'name' => 'Grupper og udvalg',
      'machine_name' => 'grupper_og_udvalg',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-2',
    ),
    'nyhedstype' => array(
      'name' => 'Nyhedstype',
      'machine_name' => 'nyhedstype',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'politiske_partier' => array(
      'name' => 'Politiske partier',
      'machine_name' => 'politiske_partier',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '3',
    ),
    'r_d_og_n_vn' => array(
      'name' => 'Indholdssider',
      'machine_name' => 'r_d_og_n_vn',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'roller_i_kfu' => array(
      'name' => 'Roller i KFU',
      'machine_name' => 'roller_i_kfu',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '5',
    ),
    'roller_i_kommunalbestyrelsen' => array(
      'name' => 'Roller i Kommunalbestyrelsen',
      'machine_name' => 'roller_i_kommunalbestyrelsen',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '4',
    ),
    'roller_i_ku' => array(
      'name' => 'Roller i ØKU',
      'machine_name' => 'roller_i_ku',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '10',
    ),
    'roller_i_sfu' => array(
      'name' => 'Roller i SFU',
      'machine_name' => 'roller_i_sfu',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '6',
    ),
    'roller_i_su' => array(
      'name' => 'Roller i SU',
      'machine_name' => 'roller_i_su',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '7',
    ),
    'roller_i_suu' => array(
      'name' => 'Roller i SUU',
      'machine_name' => 'roller_i_suu',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '8',
    ),
    'roller_i_tmu' => array(
      'name' => 'Roller i TMU',
      'machine_name' => 'roller_i_tmu',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '9',
    ),
  );
}
