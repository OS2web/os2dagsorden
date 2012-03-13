<?php
/**
 * @file
 * ballerup_menuer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ballerup_menuer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'slettes',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:http://su.dk/Sider/default.aspx
  $menu_links['main-menu:http://su.dk/Sider/default.aspx'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://su.dk/Sider/default.aspx',
    'router_path' => '',
    'link_title' => 'Min SU',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:http://tastselv.skat.dk/
  $menu_links['main-menu:http://tastselv.skat.dk/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://tastselv.skat.dk/',
    'router_path' => '',
    'link_title' => 'TastSelv Skat',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:http://www.borger.dk
  $menu_links['main-menu:http://www.borger.dk'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.borger.dk',
    'router_path' => '',
    'link_title' => 'Borger.dk',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:http://www.survey-xact.dk/LinkCollector?key=S1WES4U1151K
  $menu_links['main-menu:http://www.survey-xact.dk/LinkCollector?key=S1WES4U1151K'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.survey-xact.dk/LinkCollector?key=S1WES4U1151K',
    'router_path' => '',
    'link_title' => 'Hvad synes du?',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:https://minside.borger.dk/
  $menu_links['main-menu:https://minside.borger.dk/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://minside.borger.dk/',
    'router_path' => '',
    'link_title' => 'Min side',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:https://minside.borger.dk/post
  $menu_links['main-menu:https://minside.borger.dk/post'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://minside.borger.dk/post',
    'router_path' => '',
    'link_title' => 'Digital post',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:https://www.nemid.nu/
  $menu_links['main-menu:https://www.nemid.nu/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.nemid.nu/',
    'router_path' => '',
    'link_title' => 'Bestil NemID',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:node/28270
  $menu_links['main-menu:node/28270'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28270',
    'router_path' => 'node/%',
    'link_title' => 'Bolig',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/60',
  );
  // Exported menu link: main-menu:node/28274
  $menu_links['main-menu:node/28274'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28274',
    'router_path' => 'node/%',
    'link_title' => 'Boligstøtte & Lån',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28270',
  );
  // Exported menu link: main-menu:node/28275
  $menu_links['main-menu:node/28275'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28275',
    'router_path' => 'node/%',
    'link_title' => 'Beredskab',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28270',
  );
  // Exported menu link: main-menu:node/28276
  $menu_links['main-menu:node/28276'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28276',
    'router_path' => 'node/%',
    'link_title' => 'Almene boligselskaber',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28270',
  );
  // Exported menu link: main-menu:node/28357
  $menu_links['main-menu:node/28357'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28357',
    'router_path' => 'node/%',
    'link_title' => 'Aktuelt og nyt',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/60',
  );
  // Exported menu link: main-menu:node/28608
  $menu_links['main-menu:node/28608'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28608',
    'router_path' => 'node/%',
    'link_title' => 'Folkeregister',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28609
  $menu_links['main-menu:node/28609'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28609',
    'router_path' => 'node/%',
    'link_title' => 'Flytning',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28608',
  );
  // Exported menu link: main-menu:node/28610
  $menu_links['main-menu:node/28610'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28610',
    'router_path' => 'node/%',
    'link_title' => 'Adresse',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28608',
  );
  // Exported menu link: main-menu:node/28611
  $menu_links['main-menu:node/28611'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28611',
    'router_path' => 'node/%',
    'link_title' => 'Indsigt i oplysninger',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28608',
  );
  // Exported menu link: main-menu:node/28612
  $menu_links['main-menu:node/28612'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28612',
    'router_path' => 'node/%',
    'link_title' => 'ID-kort til unge der er fyldt 16 år',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/28608',
  );
  // Exported menu link: main-menu:node/28613
  $menu_links['main-menu:node/28613'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28613',
    'router_path' => 'node/%',
    'link_title' => 'Kørekort',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28614
  $menu_links['main-menu:node/28614'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28614',
    'router_path' => 'node/%',
    'link_title' => 'Opkrævning',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28615
  $menu_links['main-menu:node/28615'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28615',
    'router_path' => 'node/%',
    'link_title' => 'Pas',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28617
  $menu_links['main-menu:node/28617'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28617',
    'router_path' => 'node/%',
    'link_title' => 'Skat',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28618
  $menu_links['main-menu:node/28618'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28618',
    'router_path' => 'node/%',
    'link_title' => 'Skilsmisse',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28619
  $menu_links['main-menu:node/28619'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28619',
    'router_path' => 'node/%',
    'link_title' => 'Vielser',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28620
  $menu_links['main-menu:node/28620'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28620',
    'router_path' => 'node/%',
    'link_title' => 'Hvis du -',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/28621
  $menu_links['main-menu:node/28621'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28621',
    'router_path' => 'node/%',
    'link_title' => 'Spørgsmål og svar',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '49',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/31675
  $menu_links['main-menu:node/31675'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31675',
    'router_path' => 'node/%',
    'link_title' => 'Blanketter',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:node/33766
  $menu_links['main-menu:node/33766'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/33766',
    'router_path' => 'node/%',
    'link_title' => 'Oversigt',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'taxonomy/term/223',
  );
  // Exported menu link: main-menu:node/34406
  $menu_links['main-menu:node/34406'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/34406',
    'router_path' => 'node/%',
    'link_title' => 'Øvrige områder i Borgerservice',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:node/34527
  $menu_links['main-menu:node/34527'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/34527',
    'router_path' => 'node/%',
    'link_title' => 'Sagsbehandling',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/56',
  );
  // Exported menu link: main-menu:taxonomy/term/195
  $menu_links['main-menu:taxonomy/term/195'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/195',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'English',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/208
  $menu_links['main-menu:taxonomy/term/208'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/208',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik og planer',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/223
  $menu_links['main-menu:taxonomy/term/223'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/223',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Selvbetjening',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'taxonomy/term/50',
  );
  // Exported menu link: main-menu:taxonomy/term/228
  $menu_links['main-menu:taxonomy/term/228'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/228',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Forside',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/50
  $menu_links['main-menu:taxonomy/term/50'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/50',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'attributes' => array(
        'rel' => 'nofollow',
        'class' => array(
          0 => 'l1',
          1 => 'borger',
          2 => 'green',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: main-menu:taxonomy/term/52
  $menu_links['main-menu:taxonomy/term/52'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/52',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Om kommunen',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/208',
  );
  // Exported menu link: main-menu:taxonomy/term/56
  $menu_links['main-menu:taxonomy/term/56'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/56',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borgerservice',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'taxonomy/term/50',
  );
  // Exported menu link: main-menu:taxonomy/term/60
  $menu_links['main-menu:taxonomy/term/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/60',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'By, Bolig & Trafik',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'taxonomy/term/50',
  );
  // Exported menu link: menu-header:<front>
  $menu_links['menu-header:<front>'] = array(
    'menu_name' => 'menu-header',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'A - a',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-header:http://gis.ballerup.dk/webgis/
  $menu_links['menu-header:http://gis.ballerup.dk/webgis/'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'http://gis.ballerup.dk/webgis/',
    'router_path' => '',
    'link_title' => 'Balkort',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-header:node/27070
  $menu_links['menu-header:node/27070'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/27070',
    'router_path' => 'node/%',
    'link_title' => ' Integration',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-header:node/27365
  $menu_links['menu-header:node/27365'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/27365',
    'router_path' => 'node/%',
    'link_title' => 'NetTV',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-header:node/28328
  $menu_links['menu-header:node/28328'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/28328',
    'router_path' => 'node/%',
    'link_title' => 'English',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-header:node/28620
  $menu_links['menu-header:node/28620'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/28620',
    'router_path' => 'node/%',
    'link_title' => 'Hvis du',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-header:node/33766
  $menu_links['menu-header:node/33766'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/33766',
    'router_path' => 'node/%',
    'link_title' => 'Selvbetjening',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-header:node/33830
  $menu_links['menu-header:node/33830'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/33830',
    'router_path' => 'node/%',
    'link_title' => 'Kontakt ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-header:nyheder
  $menu_links['menu-header:nyheder'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-header:sitemap
  $menu_links['menu-header:sitemap'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Oversigt ',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-header:taxonomy/term/198
  $menu_links['menu-header:taxonomy/term/198'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'taxonomy/term/198',
    'router_path' => 'taxonomy/term/%',
    'link_title' => ' Job hos os',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(' Integration');
  t(' Job hos os');
  t('A - a');
  t('Adresse');
  t('Aktuelt og nyt');
  t('Almene boligselskaber');
  t('Balkort');
  t('Beredskab');
  t('Bestil NemID');
  t('Blanketter');
  t('Bolig');
  t('Boligstøtte & Lån');
  t('Borger');
  t('Borger.dk');
  t('Borgerservice');
  t('By, Bolig & Trafik');
  t('Digital post');
  t('English');
  t('Flytning');
  t('Folkeregister');
  t('Forside');
  t('Hvad synes du?');
  t('Hvis du');
  t('Hvis du -');
  t('ID-kort til unge der er fyldt 16 år');
  t('Indsigt i oplysninger');
  t('Kontakt ');
  t('Kørekort');
  t('Min SU');
  t('Min side');
  t('NetTV');
  t('Nyheder');
  t('Om kommunen');
  t('Opkrævning');
  t('Oversigt');
  t('Oversigt ');
  t('Pas');
  t('Politik og planer');
  t('Sagsbehandling');
  t('Selvbetjening');
  t('Skat');
  t('Skilsmisse');
  t('Spørgsmål og svar');
  t('TastSelv Skat');
  t('Vielser');
  t('slettes');
  t('Øvrige områder i Borgerservice');


  return $menu_links;
}
