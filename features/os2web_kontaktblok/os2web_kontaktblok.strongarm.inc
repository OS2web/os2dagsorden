<?php
/**
 * @file
 * os2web_kontaktblok.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_kontaktblok_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_kontaktblok';
  $strongarm->value = '0';
  $export['language_content_type_kontaktblok'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_kontaktblok';
  $strongarm->value = array();
  $export['menu_options_kontaktblok'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_kontaktblok';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_kontaktblok'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_kontaktblok';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_kontaktblok'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_kontaktblok';
  $strongarm->value = '1';
  $export['node_preview_kontaktblok'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_kontaktblok';
  $strongarm->value = 0;
  $export['node_submitted_kontaktblok'] = $strongarm;

  return $export;
}
