<?php
/**
 * @file
 * os2dagsorden_sidepane_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function os2dagsorden_sidepane_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-show_hide_menu_block' => array(
      'machine_name' => 'show_hide_menu_block',
      'module' => 'block',
    ),
    'menu-menu-sidepane-menu' => array(
      'delta' => 'menu-sidepane-menu',
      'module' => 'menu',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-show_hide_menu_block'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'show_hide_menu_block',
  );

  $theme['menu-menu-sidepane-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-sidepane-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // seven
  $theme = array();

  $theme['block-show_hide_menu_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'show_hide_menu_block',
  );

  $theme['menu-menu-sidepane-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-sidepane-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  // syddjurs_omega_subtheme
  $theme = array();

  $theme['block-show_hide_menu_block'] = array(
    'module' => 'block',
    'theme' => 'syddjurs_omega_subtheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'show_hide_menu_block',
  );

  $theme['menu-menu-sidepane-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-sidepane-menu',
    'theme' => 'syddjurs_omega_subtheme',
    'status' => 0,
    'weight' => '-19',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['syddjurs_omega_subtheme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
