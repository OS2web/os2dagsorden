<?php
/**
 * @file
 * ballerup_kultunaut.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ballerup_kultunaut_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aktiviteter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Det sker i Ballerup';
  $handler->display->display_options['css_class'] = 'views-activities-front-det-sker-i-ballerup';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_activitytype' => 'field_activitytype',
    'field_activity_time' => 'field_activity_time',
    'field_activity_place' => 'field_activity_place',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: Content: External link (Hidden) */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['ui_name'] = 'Content: External link (Hidden)';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_external_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_external_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_external_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_external_link']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_external_link']['field_api_classes'] = 0;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = '';
  $handler->display->display_options['fields']['field_activity_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'short_date_only_no_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_activity_date']['field_api_classes'] = 0;
  /* Felt: Indhold: Aktivitetstype */
  $handler->display->display_options['fields']['field_activitytype']['id'] = 'field_activitytype';
  $handler->display->display_options['fields']['field_activitytype']['table'] = 'field_data_field_activitytype';
  $handler->display->display_options['fields']['field_activitytype']['field'] = 'field_activitytype';
  $handler->display->display_options['fields']['field_activitytype']['label'] = '';
  $handler->display->display_options['fields']['field_activitytype']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activitytype']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activitytype']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activitytype']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activitytype']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_activitytype']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_activitytype']['field_api_classes'] = 0;
  /* Felt: Indhold: Tid */
  $handler->display->display_options['fields']['field_activity_time']['id'] = 'field_activity_time';
  $handler->display->display_options['fields']['field_activity_time']['table'] = 'field_data_field_activity_time';
  $handler->display->display_options['fields']['field_activity_time']['field'] = 'field_activity_time';
  $handler->display->display_options['fields']['field_activity_time']['label'] = '';
  $handler->display->display_options['fields']['field_activity_time']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_activity_time']['alter']['text'] = '| [field_activity_time]';
  $handler->display->display_options['fields']['field_activity_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activity_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activity_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activity_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_time']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_activity_time']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_external_link]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 1;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Sted */
  $handler->display->display_options['fields']['field_activity_place']['id'] = 'field_activity_place';
  $handler->display->display_options['fields']['field_activity_place']['table'] = 'field_data_field_activity_place';
  $handler->display->display_options['fields']['field_activity_place']['field'] = 'field_activity_place';
  $handler->display->display_options['fields']['field_activity_place']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activity_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activity_place']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_activity_place']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activity_place']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_place']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_activity_place']['field_api_classes'] = 0;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_activity_date) */
  $handler->display->display_options['filters']['field_activity_date_value']['id'] = 'field_activity_date_value';
  $handler->display->display_options['filters']['field_activity_date_value']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['filters']['field_activity_date_value']['field'] = 'field_activity_date_value';
  $handler->display->display_options['filters']['field_activity_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_activity_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_activity_date_value']['default_date'] = 'now';

  /* Display: Block: Det sker i Ballerup */
  $handler = $view->new_display('block', 'Block: Det sker i Ballerup', 'block');
  $handler->display->display_options['block_description'] = 'Det sker i Ballerup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'aktiviteter';
  $translatables['activities'] = array(
    t('Master'),
    t('Det sker i Ballerup'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('| [field_activity_time]'),
    t('[field_external_link]'),
    t('Sted'),
    t('Block: Det sker i Ballerup'),
    t('Page'),
  );
  $export['activities'] = $view;

  return $export;
}
