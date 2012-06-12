<?php
/**
 * @file
 * os2web_sovs.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function os2web_sovs_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-fritid-og-planer
  $menus['menu-fritid-og-planer'] = array(
    'menu_name' => 'menu-fritid-og-planer',
    'title' => 'Fritid og planer',
    'description' => '',
  );
  // Exported menu: menu-indholdsmenu
  $menus['menu-indholdsmenu'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'title' => 'Indholdsmenu',
    'description' => '',
  );
  // Exported menu: menu-mega-menu-borger
  $menus['menu-mega-menu-borger'] = array(
    'menu_name' => 'menu-mega-menu-borger',
    'title' => 'Borger',
    'description' => '',
  );
  // Exported menu: menu-mega-menu-erhverv
  $menus['menu-mega-menu-erhverv'] = array(
    'menu_name' => 'menu-mega-menu-erhverv',
    'title' => 'Erhverv',
    'description' => '',
  );
  // Exported menu: menu-overordnet-sitemenu
  $menus['menu-overordnet-sitemenu'] = array(
    'menu_name' => 'menu-overordnet-sitemenu',
    'title' => 'Overordnet sitemenu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Borger');
  t('Erhverv');
  t('Fritid og planer');
  t('Indholdsmenu');
  t('Overordnet sitemenu');


  return $menus;
}
