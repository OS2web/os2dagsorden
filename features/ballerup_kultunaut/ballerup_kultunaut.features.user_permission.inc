<?php
/**
 * @file
 * ballerup_kultunaut.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ballerup_kultunaut_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear Kulturnaut feeds
  $permissions['clear Kulturnaut feeds'] = array(
    'name' => 'clear Kulturnaut feeds',
    'roles' => array(),
  );

  // Exported permission: create activity content
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      0 => 'Kommunikation',
      1 => 'administrator',
      2 => 'editor',
      3 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any activity content
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(
      0 => 'administrator',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own activity content
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(
      0 => 'Kommunikation',
      1 => 'administrator',
      2 => 'editor',
      3 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any activity content
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      0 => 'Kommunikation',
      1 => 'administrator',
      2 => 'editor',
      3 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own activity content
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      0 => 'Kommunikation',
      1 => 'administrator',
      2 => 'editor',
      3 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: import Kulturnaut feeds
  $permissions['import Kulturnaut feeds'] = array(
    'name' => 'import Kulturnaut feeds',
    'roles' => array(),
  );

  return $permissions;
}
