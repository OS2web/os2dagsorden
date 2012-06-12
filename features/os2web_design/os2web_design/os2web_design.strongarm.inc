<?php
/**
 * @file
 * os2web_design.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_design_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'typekit_api_token';
  $strongarm->value = '42f286fdd829f36627e2002272e6f5df8a57e8f2';
  $export['typekit_api_token'] = $strongarm;

  return $export;
}
