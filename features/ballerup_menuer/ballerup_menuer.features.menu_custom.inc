<?php
/**
 * @file
 * ballerup_menuer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ballerup_menuer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: features
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Egenskaber',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-andre-netsteder
  $menus['menu-andre-netsteder'] = array(
    'menu_name' => 'menu-andre-netsteder',
    'title' => 'Andre netsteder',
    'description' => '',
  );
  // Exported menu: menu-bfo
  $menus['menu-bfo'] = array(
    'menu_name' => 'menu-bfo',
    'title' => 'BFO\'er og Klubber',
    'description' => '',
  );
  // Exported menu: menu-borger-genveje
  $menus['menu-borger-genveje'] = array(
    'menu_name' => 'menu-borger-genveje',
    'title' => 'Hvis du',
    'description' => 'Genveje til din situation',
  );
  // Exported menu: menu-botilbud
  $menus['menu-botilbud'] = array(
    'menu_name' => 'menu-botilbud',
    'title' => 'Botilbud',
    'description' => '',
  );
  // Exported menu: menu-erhverv-genveje
  $menus['menu-erhverv-genveje'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'title' => 'Din kommune',
    'description' => 'Spørgsmål om din kommune',
  );
  // Exported menu: menu-erhverv-genveje2
  $menus['menu-erhverv-genveje2'] = array(
    'menu_name' => 'menu-erhverv-genveje2',
    'title' => 'Erhverv genveje',
    'description' => '',
  );
  // Exported menu: menu-header
  $menus['menu-header'] = array(
    'menu_name' => 'menu-header',
    'title' => '1. Header',
    'description' => 'Header links.',
  );
  // Exported menu: menu-nyhedstype
  $menus['menu-nyhedstype'] = array(
    'menu_name' => 'menu-nyhedstype',
    'title' => 'Nyhedstype',
    'description' => '',
  );
  // Exported menu: menu-om-ballerup
  $menus['menu-om-ballerup'] = array(
    'menu_name' => 'menu-om-ballerup',
    'title' => 'Kommunen',
    'description' => '',
  );
  // Exported menu: menu-plejecenter
  $menus['menu-plejecenter'] = array(
    'menu_name' => 'menu-plejecenter',
    'title' => 'Plejecenter',
    'description' => '',
  );
  // Exported menu: menu-selvbetjening
  $menus['menu-selvbetjening'] = array(
    'menu_name' => 'menu-selvbetjening',
    'title' => 'Selvbetjening',
    'description' => '',
  );
  // Exported menu: menu-test
  $menus['menu-test'] = array(
    'menu_name' => 'menu-test',
    'title' => 'Test',
    'description' => '',
  );
  // Exported menu: menu-test-omr-de
  $menus['menu-test-omr-de'] = array(
    'menu_name' => 'menu-test-omr-de',
    'title' => 'Lokal - testområde',
    'description' => 'Dette er et testområde til demo',
  );
  // Exported menu: navigation
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('1. Header');
  t('Andre netsteder');
  t('BFO\'er og Klubber');
  t('Botilbud');
  t('Dette er et testområde til demo');
  t('Development');
  t('Development link');
  t('Din kommune');
  t('Egenskaber');
  t('Erhverv genveje');
  t('Genveje til din situation');
  t('Header links.');
  t('Hvis du');
  t('Kommunen');
  t('Lokal - testområde');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('Nyhedstype');
  t('Plejecenter');
  t('Selvbetjening');
  t('Spørgsmål om din kommune');
  t('Test');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
