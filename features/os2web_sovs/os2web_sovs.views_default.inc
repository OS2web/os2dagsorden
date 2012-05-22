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
  /* Filterkriterie: Felt: KL Emneord (field_termref_kle) */
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
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
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
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;

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
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_site_structure_tid']['validate_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
  $handler->display->display_options['fields']['field_resume_long_1']['alter']['max_length'] = '80';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;

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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Portalnews */
  $handler = $view->new_display('panel_pane', 'Portalnews', 'panel_pane_2');
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

  /* Display: Portalnews-big */
  $handler = $view->new_display('panel_pane', 'Portalnews-big', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'portalnews-big';
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
    'image_style' => 'news_big',
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
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div class="news-list-left">[field_lead_image]</div>
<div class="news-list-right"><p>[created]</p><p><a href="node/[nid]">[field_resume_long_1]</a></p></div>
<div class="news-list-next"></div>'),
    t('Alle'),
    t('Block'),
    t('Page'),
    t('Newslist'),
    t('View panes'),
    t('Portalnews'),
    t('Portalnews-big'),
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
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator ';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '155';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
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

  /* Display: Stor rotator - single */
  $handler = $view->new_display('block', 'Stor rotator - single', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator  slideshow_big';
  $handler->display->display_options['display_description'] = 'Vise kun en ad gangen, bruges bland andet på erhvervssiden';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list ';
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
    'title' => 'title',
    'field_rotating_link' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'rotating_image_tall',
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
    'rotating_image' => 'rotating_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Indløb / Udløb -  startdato (field_rotate_publish) */
  $handler->display->display_options['filters']['field_rotate_publish_value']['id'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value']['field'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rotate_publish_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rotate_publish_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Indløb / Udløb - slutdato (field_rotate_publish:value2) */
  $handler->display->display_options['filters']['field_rotate_publish_value2']['id'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['field'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_rotate_publish_value2']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Har taksonomiterm */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '12265',
  );
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Har taksonomiterm';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'forfrem_til';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;

  /* Display: Stor rotator - single2 */
  $handler = $view->new_display('block', 'Stor rotator - single2', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'custom-slideshow billedrotator  slideshow_big';
  $handler->display->display_options['display_description'] = 'Vise kun en ad gangen, bruges bland andet på erhvervssiden';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list ';
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
    'title' => 'title',
    'field_rotating_link' => 0,
    'field_rotate_image' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
    'title_1' => 0,
  );
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'rotating_image_tall',
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
    'rotating_image' => 'rotating_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
    t('Stor rotator - single'),
    t('Vise kun en ad gangen, bruges bland andet på erhvervssiden'),
    t('Alle'),
    t('Har taksonomiterm'),
    t('Stor rotator - single2'),
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
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
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'portalkategori' => 'portalkategori',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
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
  $handler = $view->new_display('block', 'SB-block-forside', 'sb_block_forside');
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
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:sb_block_forside_att_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = 0;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['empty'] = FALSE;
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_forside_att_2';
  $handler->display->display_options['footer']['view_1']['inherit_arguments'] = 0;
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'handling' => 'handling',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

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
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler = $view->new_display('block', 'SB-block-forside-att-1', 'sb_block_forside_att_1');
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
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="knapper"><a class="kviksvar" href="/kviksvar">Kviksvar</a><a class="nemindsigt" href="/soeg-nemindsigt">Søg nemindsig</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'emne' => 'emne',
  );

  /* Display: SB-block-forside-att-2 */
  $handler = $view->new_display('block', 'SB-block-forside-att-2', 'sb_block_forside_att_2');
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
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';

  /* Display: SB-block-portal */
  $handler = $view->new_display('block', 'SB-block-portal', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-block-forside selvbetjening-block-portal';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_attached_node';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = 'Hvis du skal flytte...';
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
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selvbetjening:sb_block_portal_att_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = 1;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['empty'] = FALSE;
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_portal_att_2';
  $handler->display->display_options['footer']['view_1']['inherit_arguments'] = 1;
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'handling' => 'handling',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';

  /* Display: Selvbetjening - footerlinks */
  $handler = $view->new_display('block', 'Selvbetjening - footerlinks', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
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

  /* Display: SB-block-portal-att-1 */
  $handler = $view->new_display('block', 'SB-block-portal-att-1', 'sb_block_portal_att_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = 1;
  $handler->display->display_options['style_options']['path'] = 'field_attached_node';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = 'Emner kort, affald...';
  $handler->display->display_options['style_options']['default_value'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'emne' => 'emne',
  );

  /* Display: SB-block-portal-att-2 */
  $handler = $view->new_display('block', 'SB-block-portal-att-2', 'sb_block_portal_att_2');
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
  $handler->display->display_options['header']['area']['content'] = '<div class="aktuel-genvej-portal>Aktuelle Genveje</div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'portalkategori' => 'portalkategori',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';

  /* Display: SB-block-sektion */
  $handler = $view->new_display('block', 'SB-block-sektion', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-block-forside selvbetjening-block-portal selvbetjening-block-sektion';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['empty'] = FALSE;
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'selvbetjening:sb_block_portal_att_2';
  $handler->display->display_options['footer']['view_1']['inherit_arguments'] = 1;
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_selvbetjening_direkte]';
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
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'handling' => 'handling',
  );

  /* Display: SB-block-sektion2 */
  $handler = $view->new_display('block', 'SB-block-sektion2', 'block_5');
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
  $handler->display->display_options['header']['area']['content'] = '<div class="aktuel-genvej-portal>Blanketter</div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['arguments']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['arguments']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_options']['vocabularies'] = array(
    'portalkategori' => 'portalkategori',
  );
  $handler->display->display_options['arguments']['field_site_structure_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_site_structure_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_site_structure_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_site_structure_tid']['not'] = 0;
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
  /* Filterkriterie: Indhold: Type (field_selvbetjeningslink_type) */
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['id'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['table'] = 'field_data_field_selvbetjeningslink_type';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['field'] = 'field_selvbetjeningslink_type_value';
  $handler->display->display_options['filters']['field_selvbetjeningslink_type_value']['value'] = array(
    'liste' => 'liste',
  );
  $handler->display->display_options['block_description'] = 'Aktuelle genveje';

  /* Display: selvbetjening-indholdsside */
  $handler = $view->new_display('block', 'selvbetjening-indholdsside', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'selvbetjening selvbetjening-indholdsside';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['header']['area']['content'] = '<div class="blanketter"><a href="/selvbetjening">Blanketter</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="se-flere"><a href="/selvbetjening">Se flere blanketter</a></div>
<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'blokindhold';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Felt: Selvbetjeninslinks (field_noderef_selvbtjn) */
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['id'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['table'] = 'field_data_field_noderef_selvbtjn';
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['field'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_noderef_selvbtjn_nid']['delta'] = '-1';
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
  /* Felt: Indhold: Direkte link */
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['id'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['table'] = 'field_data_field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field'] = 'field_selvbetjening_direkte';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['label'] = '';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty'] = '[field_attached_node]';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_selvbetjening_direkte']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_noderef_selvbtjn_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selvbetjeningslinks' => 'selvbetjeningslinks',
  );
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
    t('[field_attached_node]'),
    t('node/[field_attached_node]'),
    t('Alle'),
    t('Page'),
    t('Feed'),
    t('SB-block-forside'),
    t('<h3><a href="/selvbetjening">Selvbetjening</a></h3>'),
    t('[field_selvbetjening_direkte]'),
    t('selvbetjening-megamenu'),
    t('SB-block-forside-att-1'),
    t('<div class="knapper"><a class="kviksvar" href="/kviksvar">Kviksvar</a><a class="nemindsigt" href="/soeg-nemindsigt">Søg nemindsig</a></div>'),
    t('SB-block-forside-att-2'),
    t('Aktuelle Genvej'),
    t('<div class="aktuel-genvej>Aktuelle Genveje</div>'),
    t('<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>'),
    t('Aktuelle genveje'),
    t('SB-block-portal'),
    t('Selvbetjening - footerlinks'),
    t('SB-block-portal-att-1'),
    t('SB-block-portal-att-2'),
    t('<div class="aktuel-genvej-portal>Aktuelle Genveje</div>'),
    t('SB-block-sektion'),
    t('SB-block-sektion2'),
    t('<div class="aktuel-genvej-portal>Blanketter</div>'),
    t('selvbetjening-indholdsside'),
    t('<div class="blanketter"><a href="/selvbetjening">Blanketter</a></div>'),
    t('<div class="se-flere"><a href="/selvbetjening">Se flere blanketter</a></div>
<div class="selbetjening-bund"><a class="nemid" href="http://nemid.dk">NEMID</a><a class="borgerdk" href="https://www.borger.dk/Sider/default.aspx?KommuneId=706">Borger.dk</a><a class="virkdk" href="http://virk.dk">Virk.dk</a></div>'),
    t('field_noderef_selvbtjn'),
  );
  $export['selvbetjening'] = $view;

  $view = new view;
  $view->name = 'sitestuktur';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Sitestuktur';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Felt: Ord i ordforråd: Subsite logo */
  $handler->display->display_options['fields']['field_subsite_logo']['id'] = 'field_subsite_logo';
  $handler->display->display_options['fields']['field_subsite_logo']['table'] = 'field_data_field_subsite_logo';
  $handler->display->display_options['fields']['field_subsite_logo']['field'] = 'field_subsite_logo';
  $handler->display->display_options['fields']['field_subsite_logo']['label'] = '';
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subsite_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_subsite_logo']['empty'] = '[name]';
  $handler->display->display_options['fields']['field_subsite_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_subsite_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_subsite_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_subsite_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_subsite_logo']['field_api_classes'] = 0;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
  );
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'site_struktur' => 'site_struktur',
  );

  /* Display: Logo */
  $handler = $view->new_display('block', 'Logo', 'block_1');
  $translatables['sitestuktur'] = array(
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
    t('[name]'),
    t('Term ID'),
    t('.'),
    t(','),
    t('Alle'),
    t('Logo'),
  );
  $export['sitestuktur'] = $view;

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
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
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
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    t('field_indholdsside_spotboxe'),
    t('[field_lead_image]<br />
[title]'),
    t('<div class="spotImage">[field_lead_image]</div>
<div class="spotTitle">
[title]
</div>'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
    t('Spotbox'),
  );
  $export['spot_view'] = $view;

  return $export;
}
