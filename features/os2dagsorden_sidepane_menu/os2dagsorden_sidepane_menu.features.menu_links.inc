<?php
/**
 * @file
 * os2dagsorden_sidepane_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2dagsorden_sidepane_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-sidepane-menu:<front>
  $menu_links['menu-sidepane-menu:<front>'] = array(
    'menu_name' => 'menu-sidepane-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Oversigt',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-oversigt',
        'class' => array(
          0 => 'menu-sidepane',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-sidepane-menu:meetings-search
  $menu_links['menu-sidepane-menu:meetings-search'] = array(
    'menu_name' => 'menu-sidepane-menu',
    'link_path' => 'meetings-search',
    'router_path' => 'meetings-search',
    'link_title' => 'Søg',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-sog',
        'rel' => 'menu-sidepane',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-sidepane-menu:meetings/print
  $menu_links['menu-sidepane-menu:meetings/print'] = array(
    'menu_name' => 'menu-sidepane-menu',
    'link_path' => 'meetings/print',
    'router_path' => 'meetings/print',
    'link_title' => 'Print kalender',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-print-kalendar',
        'class' => array(
          0 => 'menu-sidepane',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Oversigt');
  t('Print kalender');
  t('Søg');


  return $menu_links;
}
