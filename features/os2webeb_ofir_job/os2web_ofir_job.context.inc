<?php
/**
 * @file
 * os2web_ofir_job.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_ofir_job_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jobliste';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*job-opslag/*' => '*job-opslag/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => 5,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-14' => array(
          'module' => 'menu_block',
          'delta' => 14,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-e91026866ce95ba7ed4ff25d9253b75a' => array(
          'module' => 'views',
          'delta' => 'e91026866ce95ba7ed4ff25d9253b75a',
          'region' => 'sidebar_second',
          'weight' => '-71',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'standard',
    ),
  );
  $context->condition_mode = 0;
  $export['jobliste'] = $context;

  return $export;
}
