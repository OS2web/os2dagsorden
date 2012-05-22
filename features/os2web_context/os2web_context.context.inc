<?php
/**
 * @file
 * os2web_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footerblokke';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-footer_menuer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer_menuer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['footerblokke'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forside';
  $context->description = 'Forside blokke';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'foside',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forside blokke');
  $export['forside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Globale højre blokke';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'esdh_dokument' => 'esdh_dokument',
        'esdh_sag' => 'esdh_sag',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => 12,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-49',
        ),
        'views-spot_view-block_1' => array(
          'module' => 'views',
          'delta' => 'spot_view-block_1',
          'region' => 'sidebar_second',
          'weight' => '-48',
        ),
        'views-kontaktblok-block' => array(
          'module' => 'views',
          'delta' => 'kontaktblok-block',
          'region' => 'sidebar_second',
          'weight' => '-47',
        ),
        'views-kle_lonks_boks-kle_links_boks' => array(
          'module' => 'views',
          'delta' => 'kle_lonks_boks-kle_links_boks',
          'region' => 'sidebar_second',
          'weight' => '-46',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Globale højre blokke');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_second_sidebar';
  $context->description = 'Skjul højre kolonne på iframesider';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/add/*' => 'node/add/*',
        'node/*/edit' => 'node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'hide_second_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Skjul højre kolonne på iframesider');
  $export['hide_second_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hide_second_sidebar_indholdssider';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        2 => 2,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'hide_second_sidebar',
    ),
  );
  $context->condition_mode = 1;
  $export['hide_second_sidebar_indholdssider'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portalforside';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'borger' => 'borger',
        'erhverv' => 'erhverv',
        'politik-og-planer' => 'politik-og-planer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_1' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => 11,
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'portalforside',
    ),
  );
  $context->condition_mode = 1;
  $export['portalforside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sektionsforside';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'site_struktur' => 'site_struktur',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'hide_second_sidebar',
    ),
  );
  $context->condition_mode = 0;
  $export['sektionsforside'] = $context;

  return $export;
}
