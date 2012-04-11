<?php
/**
 * @file
 * ballerup_panels_and_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ballerup_panels_and_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_edit_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_node_edit_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_node_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_node";s:23:"allowed_layout_settings";a:36:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:20:"omega_24_twocol_6_18";b:0;s:20:"omega_24_twocol_18_6";b:0;s:29:"omega_24_twocol_12_12_stacked";b:0;s:28:"omega_24_twocol_12_12_bricks";b:0;s:21:"omega_24_twocol_12_12";b:0;s:31:"omega_24_threecol_8_8_8_stacked";b:0;s:23:"omega_24_threecol_8_8_8";b:0;s:15:"omega_24_onecol";b:0;s:27:"omega_16_twocol_8_8_stacked";b:0;s:26:"omega_16_twocol_8_8_bricks";b:0;s:19:"omega_16_twocol_8_8";b:0;s:20:"omega_16_twocol_4_12";b:0;s:20:"omega_16_twocol_12_4";b:0;s:31:"omega_16_threecol_5_6_5_stacked";b:0;s:23:"omega_16_threecol_5_6_5";b:0;s:15:"omega_16_onecol";b:0;s:19:"omega_12_twocol_9_3";b:0;s:27:"omega_12_twocol_6_6_stacked";b:0;s:26:"omega_12_twocol_6_6_bricks";b:0;s:19:"omega_12_twocol_6_6";b:0;s:19:"omega_12_twocol_3_9";b:0;s:31:"omega_12_threecol_4_4_4_stacked";b:0;s:23:"omega_12_threecol_4_4_4";b:0;s:15:"omega_12_onecol";b:0;s:14:"balk_node_news";b:1;s:9:"balk_node";b:1;s:13:"balk_homepage";b:1;}s:10:"form_state";N;}';
  $export['panels_node_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_node_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'custom' => 'custom',
    'block' => 'block',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panels_node_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:36:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:20:"omega_24_twocol_6_18";b:0;s:20:"omega_24_twocol_18_6";b:0;s:29:"omega_24_twocol_12_12_stacked";b:0;s:28:"omega_24_twocol_12_12_bricks";b:0;s:21:"omega_24_twocol_12_12";b:0;s:31:"omega_24_threecol_8_8_8_stacked";b:0;s:23:"omega_24_threecol_8_8_8";b:0;s:15:"omega_24_onecol";b:0;s:27:"omega_16_twocol_8_8_stacked";b:0;s:26:"omega_16_twocol_8_8_bricks";b:0;s:19:"omega_16_twocol_8_8";b:0;s:20:"omega_16_twocol_4_12";b:0;s:20:"omega_16_twocol_12_4";b:0;s:31:"omega_16_threecol_5_6_5_stacked";b:0;s:23:"omega_16_threecol_5_6_5";b:0;s:15:"omega_16_onecol";b:0;s:19:"omega_12_twocol_9_3";b:0;s:27:"omega_12_twocol_6_6_stacked";b:0;s:26:"omega_12_twocol_6_6_bricks";b:0;s:19:"omega_12_twocol_6_6";b:0;s:19:"omega_12_twocol_3_9";b:0;s:31:"omega_12_threecol_4_4_4_stacked";b:0;s:23:"omega_12_threecol_4_4_4";b:0;s:15:"omega_12_onecol";b:0;s:14:"balk_node_news";b:1;s:9:"balk_node";b:1;s:13:"balk_homepage";b:1;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'custom' => 'custom',
    'block' => 'block',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panels_page_default'] = $strongarm;

  return $export;
}
