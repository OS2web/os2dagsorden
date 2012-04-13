<?php
/**
 * @file
 * os2web_sovs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_sovs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'borgerblokke';
  $context->description = 'Borger sider';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'esdh_dokument' => 'esdh_dokument',
        'esdh_sag' => 'esdh_sag',
        'files' => 'files',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'ofir_job' => 'ofir_job',
        'panel' => 'panel',
        'politician' => 'politician',
        'referat' => 'referat',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        4 => 4,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-mega-menu-borger' => array(
          'module' => 'menu',
          'delta' => 'menu-mega-menu-borger',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger sider');
  $export['borgerblokke'] = $context;

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
        'menu-menu-selvbetjening' => array(
          'module' => 'menu',
          'delta' => 'menu-selvbetjening',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'menu-menu-mega-menu-erhverv' => array(
          'module' => 'menu',
          'delta' => 'menu-mega-menu-erhverv',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'menu-menu-mega-menu-borger' => array(
          'module' => 'menu',
          'delta' => 'menu-mega-menu-borger',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'menu-menu-fritid-og-planer' => array(
          'module' => 'menu',
          'delta' => 'menu-fritid-og-planer',
          'region' => 'footer_second',
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

  return $export;
}
