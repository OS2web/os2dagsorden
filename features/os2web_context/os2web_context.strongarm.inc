<?php
/**
 * @file
 * os2web_context.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_context_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_esdh_dokument';
  $strongarm->value = '0';
  $export['language_content_type_esdh_dokument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_esdh_sag';
  $strongarm->value = '0';
  $export['language_content_type_esdh_sag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_esdh_dokument';
  $strongarm->value = array(
    0 => 'menu-indholdsmenu',
  );
  $export['menu_options_esdh_dokument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_esdh_sag';
  $strongarm->value = array(
    0 => 'menu-indholdsmenu',
  );
  $export['menu_options_esdh_sag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_esdh_dokument';
  $strongarm->value = 'menu-indholdsmenu:0';
  $export['menu_parent_esdh_dokument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_esdh_sag';
  $strongarm->value = 'menu-indholdsmenu:0';
  $export['menu_parent_esdh_sag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_esdh_dokument';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_esdh_dokument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_esdh_sag';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_esdh_sag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_esdh_dokument';
  $strongarm->value = '0';
  $export['node_preview_esdh_dokument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_esdh_sag';
  $strongarm->value = '0';
  $export['node_preview_esdh_sag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_esdh_dokument';
  $strongarm->value = 0;
  $export['node_submitted_esdh_dokument'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_esdh_sag';
  $strongarm->value = 0;
  $export['node_submitted_esdh_sag'] = $strongarm;

  return $export;
}
