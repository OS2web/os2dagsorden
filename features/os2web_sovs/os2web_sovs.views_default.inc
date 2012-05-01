<?php
/**
 * @file
 * os2web_sovs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_sovs_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'newslist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newslist';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newslist';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 1;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
    'acadremmcomittee' => 0,
    'egennavne_stednavne' => 0,
    'kle' => 0,
    'organisation' => 0,
    'politik' => 0,
    'portalkategori' => 0,
    'redaktoertags' => 0,
    'sidevisning' => 0,
  );
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lead_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['field_api_classes'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '356';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lead_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['field_api_classes'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Felt: Indhold: Alle taksonomitermer */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = 0;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'site_struktur' => 0,
    'acadremmcomittee' => 0,
    'egennavne_stednavne' => 0,
    'kle' => 0,
    'organisation' => 0,
    'politik' => 0,
    'portalkategori' => 0,
    'redaktoertags' => 0,
    'sidevisning' => 0,
  );
  $handler->display->display_options['path'] = 'news';

  /* Display: Newslist */
  $handler = $view->new_display('panel_pane', 'Newslist', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news-cycle-medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lead_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long_1']['id'] = 'field_resume_long_1';
  $handler->display->display_options['fields']['field_resume_long_1']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long_1']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '88';
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resume_long_1']['field_api_classes'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>';
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['newslist'] = array(
    t('Master'),
    t('Newslist'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term'),
    t('<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>'),
    t('Alle'),
    t('Block'),
    t('Page'),
    t('View panes'),
  );
  $export['newslist'] = $view;

  $view = new view;
  $view->name = 'rotating_image_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rotating image view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rotating image view';
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title_1' => 'title_1',
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotating_link' => 0,
    'title' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_rotating_link']['id'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['table'] = 'field_data_field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['field'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotating_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotating_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotating_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotating_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotating_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotating_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_rotating_link']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image']['id'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotate_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotate_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image']['settings'] = array(
    'image_style' => 'rotating_image',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotate_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="[field_rotating_link]"><span>[title]</span> [body]</a>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['empty'] = '<a href="[field_rotating_link]"><span>[title]</span></a>';
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image_1']['id'] = 'field_rotate_image_1';
  $handler->display->display_options['fields']['field_rotate_image_1']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotate_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotate_image_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotate_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_rotate_image_1']['settings'] = array(
    'image_style' => 'rotating_image_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotate_image_1']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="item-bg" title=\'[field_rotate_image_1]\'>[title]</div>';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotating_image' => 'rotating_image',
  );
  /* Filterkriterie: Indhold: Indløb / Udløb -  startdato (field_rotate_publish) */
  $handler->display->display_options['filters']['field_rotate_publish_value']['id'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value']['field'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rotate_publish_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Indløb / Udløb - slutdato (field_rotate_publish:value2) */
  $handler->display->display_options['filters']['field_rotate_publish_value2']['id'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['field'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['rotating_image_view'] = array(
    t('Master'),
    t('Rotating image view'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="[field_rotating_link]"><span>[title]</span> [body]</a>'),
    t('<a href="[field_rotating_link]"><span>[title]</span></a>'),
    t('<div class="item-bg" title=\'[field_rotate_image_1]\'>[title]</div>'),
    t('Block'),
  );
  $export['rotating_image_view'] = $view;

  $view = new view;
  $view->name = 'spot_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spot view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'spotbox_view_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_lead_image]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">
[title]
</div>';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'spotbox' => 'spotbox',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Spotbox */
  $handler = $view->new_display('block', 'Spotbox', 'block_1');
  $translatables['spot_view'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('[field_lead_image]<br />
[title]'),
    t('<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">
[title]
</div>'),
    t('Content pane'),
    t('View panes'),
    t('Spotbox'),
  );
  $export['spot_view'] = $view;

  return $export;
}
