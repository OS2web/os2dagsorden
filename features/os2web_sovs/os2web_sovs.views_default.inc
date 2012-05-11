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
  $view->name = 'aktuelt';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aktuelt';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_site_structure']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';

  /* Display: Aktuelt - Sektionsforside */
  $handler = $view->new_display('panel_pane', 'Aktuelt - Sektionsforside', 'panel_pane_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['pane_category']['name'] = 'CMS Theme';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Aktuelt - Portalforside */
  $handler = $view->new_display('panel_pane', 'Aktuelt - Portalforside', 'panel_pane_2');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12265 => '12265',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['pane_category']['name'] = 'CMS Theme';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['aktuelt'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('Alle'),
    t('Aktuelt - Sektionsforside'),
    t('CMS Theme'),
    t('Aktuelt - Portalforside'),
  );
  $export['aktuelt'] = $view;

  $view = new view;
  $view->name = 'kle_lonks_boks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KLE Links boks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KLE Links boks';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'kle' => 'kle',
  );
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'kle' => 'kle',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
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
  $handler->display->display_options['arguments']['nid']['not'] = 1;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: KL Emneord (field_termref_kle) */
  $handler->display->display_options['filters']['field_termref_kle_tid']['id'] = 'field_termref_kle_tid';
  $handler->display->display_options['filters']['field_termref_kle_tid']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['filters']['field_termref_kle_tid']['field'] = 'field_termref_kle_tid';
  $handler->display->display_options['filters']['field_termref_kle_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_termref_kle_tid']['value'] = '';
  $handler->display->display_options['filters']['field_termref_kle_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_termref_kle_tid']['vocabulary'] = 'kle';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'kle_links_boks');
  $translatables['kle_lonks_boks'] = array(
    t('Master'),
    t('KLE Links boks'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Block'),
  );
  $export['kle_lonks_boks'] = $view;

  $view = new view;
  $view->name = 'megadd_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'MegaDD News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelle emner';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'bgbg';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_site_structure_tid']['value'] = '';
  $handler->display->display_options['filters']['field_site_structure_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_site_structure_tid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Portalkategori (field_site_structure)',
    ),
  );
  $translatables['megadd_news'] = array(
    t('Master'),
    t('Aktuelle emner'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('bgbg'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
  );
  $export['megadd_news'] = $view;

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
  $view->name = 'selvbetjening';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjening';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['css_class'] = 'selvbetjening';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Felt: Felt: Spotboxe Bund */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attached_node']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_attached_node]';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  $handler->display->display_options['path'] = 'selvbetjening';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  $handler->display->display_options['path'] = 'selvbetjening.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: SB-block-forside */
  $handler = $view->new_display('block', 'SB-block-forside', 'sb_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-block-forside';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_attached_node';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = 'Hvis du skal flytte, giftes osv.';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/selvbetjening">Selvbetjening</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['empty'] = FALSE;
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:sb_block_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = 0;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['empty'] = FALSE;
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_2';
  $handler->display->display_options['footer']['view_1']['inherit_arguments'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';

  /* Display: selvbetjening-megamenu */
  $handler = $view->new_display('block', 'selvbetjening-megamenu', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-megamenu';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/selvbetjening">Selvbetjening</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );

  /* Display: SB-block-forside-att-1 */
  $handler = $view->new_display('block', 'SB-block-forside-att-1', 'sb_block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_attached_node';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = 'Emner kort, affald, jobs osv. ';
  $handler->display->display_options['style_options']['default_value'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['empty'] = FALSE;
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:attachment_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = 0;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="knapper"><a class="kviksvar" href="/kviksvar">Kviksvar</a><a class="nemindsigt" href="/soeg-nemindsigt">Søg nemindsig</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';

  /* Display: SB-block-forside-att-2 */
  $handler = $view->new_display('block', 'SB-block-forside-att-2', 'sb_block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle Genvej';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="aktuel-genvej>Aktuelle Genveje</div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['empty'] = FALSE;
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:attachment_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = 0;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Spotboxe Bund */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['text'] = 'node/[field_attached_node-nid]';
  $handler->display->display_options['fields']['field_attached_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_attached_node']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attached_node']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_attached_node]';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';
  $translatables['selvbetjening'] = array(
    t('Master'),
    t('Selvbetjening'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('node/[field_attached_node-nid]'),
    t('node/[field_attached_node]'),
    t('Page'),
    t('Feed'),
    t('SB-block-forside'),
    t('<h3><a href="/selvbetjening">Selvbetjening</a></h3>'),
    t('selvbetjening-megamenu'),
    t('SB-block-forside-att-1'),
    t('<div class="knapper"><a class="kviksvar" href="/kviksvar">Kviksvar</a><a class="nemindsigt" href="/soeg-nemindsigt">Søg nemindsig</a></div>'),
    t('SB-block-forside-att-2'),
    t('Aktuelle Genvej'),
    t('<div class="aktuel-genvej>Aktuelle Genveje</div>'),
    t('<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>'),
    t('[field_attached_node]'),
    t('Aktuelle genveje'),
  );
  $export['selvbetjening'] = $view;

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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => '',
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
