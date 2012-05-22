<?php
/**
 * @file
 * os2web_spotbokse.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_spotbokse_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_spotbox';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_spotbox'] = $strongarm;

  return $export;
}
