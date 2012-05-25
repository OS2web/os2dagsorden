<?php
/**
 * @file
 * os2web_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: access print
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'print',
  );

  return $permissions;
}
