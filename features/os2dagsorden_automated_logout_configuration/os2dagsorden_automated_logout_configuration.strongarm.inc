<?php
/**
 * @file
 * os2dagsorden_automated_logout_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2dagsorden_automated_logout_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout';
  $strongarm->value = array(
    'enabled' => 1,
    'timeout' => '1200',
    'use_watchdog' => 1,
    'authenticated user' => '0',
    'administrator' => '0',
    'logout_message' => 'Du har nu logget af OS2dagsorden. Vi anbefaler, at du lukker alle browservinduer.',
    'redirect_url' => '',
    'refresh_delta' => '0',
  );
  $export['autologout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autologout_one_session';
  $strongarm->value = array(
    'authenticated user' => '0',
    'administrator' => '0',
  );
  $export['autologout_one_session'] = $strongarm;

  return $export;
}
