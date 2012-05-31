<?php
/**
 * @file
 * os2web_design.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_design_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'delta_ui',
  );

  return $permissions;
}
