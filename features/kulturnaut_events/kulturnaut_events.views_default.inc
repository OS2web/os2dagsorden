<?php
/**
 * @file
 * kulturnaut_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kulturnaut_events_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'kulturnaut_events_lister';
  $view->description = 'Side, block og andre visninger af Kulturnaut begivenheder fra Kulturnaut.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kulturnaut begivenheder lister';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyeste begivenheder fra Kulturnaut.dk';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: feeds item: maaned */
  $handler->display->display_options['fields']['imported']['id'] = 'imported';
  $handler->display->display_options['fields']['imported']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['imported']['field'] = 'imported';
  $handler->display->display_options['fields']['imported']['ui_name'] = 'feeds item: maaned';
  $handler->display->display_options['fields']['imported']['label'] = '';
  $handler->display->display_options['fields']['imported']['exclude'] = TRUE;
  $handler->display->display_options['fields']['imported']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['external'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['imported']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['imported']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['imported']['alter']['html'] = 0;
  $handler->display->display_options['fields']['imported']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['imported']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['imported']['hide_empty'] = 0;
  $handler->display->display_options['fields']['imported']['empty_zero'] = 0;
  $handler->display->display_options['fields']['imported']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['imported']['date_format'] = 'custom';
  $handler->display->display_options['fields']['imported']['custom_date_format'] = 'M';
  /* Felt: feeds item: dato */
  $handler->display->display_options['fields']['imported_1']['id'] = 'imported_1';
  $handler->display->display_options['fields']['imported_1']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['imported_1']['field'] = 'imported';
  $handler->display->display_options['fields']['imported_1']['ui_name'] = 'feeds item: dato';
  $handler->display->display_options['fields']['imported_1']['label'] = '';
  $handler->display->display_options['fields']['imported_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['imported_1']['alter']['text'] = '<div class="calendar">
<div class="calendar-top">[imported]</div>
<div class="calendar-bottom">[imported_1] </div>
</div>
';
  $handler->display->display_options['fields']['imported_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['imported_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['imported_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['imported_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['imported_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['imported_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['imported_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['imported_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['imported_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['imported_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['imported_1']['custom_date_format'] = 'd';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class=""><div class="">[imported]</div>
<div class="">[imported_1]</div>
<div class="">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
    'knactivity' => 'knactivity',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'kulturnaut-begivenheder';

  /* Display: Blok - indholdsside */
  $handler = $view->new_display('block', 'Blok - indholdsside', 'blok_kulturnaut_indholdsside');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Blok - forside */
  $handler = $view->new_display('block', 'Blok - forside', 'blok_kulturnaut_forside');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['kulturnaut_events_lister'] = array(
    t('Master'),
    t('Nyeste begivenheder fra Kulturnaut.dk'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('<div class="calendar">
<div class="calendar-top">[imported]</div>
<div class="calendar-bottom">[imported_1] </div>
</div>
'),
    t('<div class=""><div class="">[imported]</div>
<div class="">[imported_1]</div>
<div class="">[title]</div>'),
    t('Page'),
    t('Blok - indholdsside'),
    t('Blok - forside'),
  );
  $export['kulturnaut_events_lister'] = $view;

  return $export;
}
