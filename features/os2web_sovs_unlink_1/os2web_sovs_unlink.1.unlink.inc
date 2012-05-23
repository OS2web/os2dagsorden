<?php

/**
 * Unlink os2web_sovs_unlink_1_views_view().
 */
function os2web_sovs_unlink_1_views_view() {
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
$handler->display->display_options['css_class'] = 'spotbox-indhold';
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
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Forbindelse: Indhold: Spotboxe (field_indholdsside_spotboxe) */
$handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['id'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['table'] = 'field_data_field_indholdsside_spotboxe';
$handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['field'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['required'] = 1;
$handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['delta'] = '-1';
/* Felt: Indhold: Primære billede */
$handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
$handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
$handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
$handler->display->display_options['fields']['field_lead_image']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['fields']['field_lead_image']['label'] = '';
$handler->display->display_options['fields']['field_lead_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title]" />
<span class="zoom-icon"></span>';
$handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
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
  'image_style' => 'spotbox_right',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
/* Felt: Indhold: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
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
$handler->display->display_options['fields']['title']['alter']['max_length'] = '24';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['title']['alter']['trim'] = 1;
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
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">[title]</div>

';
$handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
$handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 0;
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
/* Felt: Indhold: Hjemmeside */
$handler->display->display_options['fields']['field_url']['id'] = 'field_url';
$handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['fields']['field_url']['label'] = '';
$handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_url']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
/* Sorteringskriterie: Indhold: Oprettelsesdato */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Kontekstuelt filter: Indhold: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
$handler->display->display_options['arguments']['nid']['not'] = 0;
/* Filterkriterie: Indhold: Udgivet */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filterkriterie: Indhold: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'spotbox' => 'spotbox',
);

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'spotbox-2-vertical';

/* Display: Spotbox */
$handler = $view->new_display('block', 'Spotbox', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Felt: Indhold: Hjemmeside */
$handler->display->display_options['fields']['field_url']['id'] = 'field_url';
$handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['fields']['field_url']['label'] = '';
$handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['text'] = '[field_url] ';
$handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_url']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
$handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
/* Felt: Indhold: Primære billede */
$handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
$handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
$handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
$handler->display->display_options['fields']['field_lead_image']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['fields']['field_lead_image']['label'] = '';
$handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['field_lead_image']['alter']['text'] = '<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span>';
$handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['field_lead_image']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['link_class'] = 'overlayclass';
$handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_lead_image']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 0;
$handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_lead_image']['type'] = 'image_url';
$handler->display->display_options['fields']['field_lead_image']['settings'] = array(
  'image_style' => 'spotbox_right',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
/* Felt: Indhold: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
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
$handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 1;
$handler->display->display_options['fields']['title']['alter']['trim'] = 1;
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
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
$handler->display->display_options['fields']['title_1']['alter']['text'] = '<h3><a href=[field_url]>[title]</a></h3>';
$handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
$handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 0;
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
$translatables['spot_view'] = array(
  t('Master'),
  t('mere'),
  t('Udfør'),
  t('Gendan'),
  t('Sortér efter'),
  t('Stigende'),
  t('Faldende'),
  t('field_indholdsside_spotboxe'),
  t('<img src="[field_lead_image]" alt="[title]" />
<span class="zoom-icon"></span>'),
  t('[field_url]'),
  t('[field_lead_image]<br />
[title]'),
  t('<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">[title]</div>

'),
  t('Alle'),
  t('Content pane'),
  t('View panes'),
  t('Spotbox'),
  t('[field_url] '),
  t('<img src="[field_lead_image]" alt="[title_1]" />
<span class="zoom-icon"></span>'),
  t('<h3><a href=[field_url]>[title]</a></h3>'),
);

$view->save();
}
