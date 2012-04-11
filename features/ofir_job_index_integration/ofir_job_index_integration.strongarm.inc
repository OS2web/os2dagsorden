<?php
/**
 * @file
 * ofir_job_index_integration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ofir_job_index_integration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ofir_job';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_ofir_date';
  $strongarm->value = 'Ymd';
  $export['date_format_ofir_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ofir_job';
  $strongarm->value = '0';
  $export['language_content_type_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ofir_job';
  $strongarm->value = array();
  $export['menu_options_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ofir_job';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ofir_job';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ofir_job';
  $strongarm->value = '0';
  $export['node_preview_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ofir_job';
  $strongarm->value = 1;
  $export['node_submitted_ofir_job'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_ofir_job';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_ofir_job'] = $strongarm;

  return $export;
}
