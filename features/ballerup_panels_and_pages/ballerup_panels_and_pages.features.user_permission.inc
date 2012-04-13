<?php
/**
 * @file
 * ballerup_panels_and_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ballerup_panels_and_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'page_manager',
  );

  return $permissions;
}
