<?php
/**
 * @file
 * os2web_kontaktblok.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_kontaktblok_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'kontaktblok';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kontaktblok';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kontakt';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/kontakt">Gå til kontaktoversigt</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Kontakt [title]';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'kontaktblok-overskrift';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Eget indhold */
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['id'] = 'field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['table'] = 'field_data_field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['field'] = 'field_kontaktblok_egetindhold';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = '';
  $handler->display->display_options['fields']['field_phone1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['text'] = '<';
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_phone1']['element_class'] = 'telefonnummer, kontaktblok-indhold';
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Mandag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['id'] = 'field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['table'] = 'field_data_field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['field'] = 'field_kontaktblok_aa_manlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['text'] = ' - [field_kontaktblok_aa_manlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manlk']['field_api_classes'] = 0;
  /* Felt: Indhold: Mandag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['id'] = 'field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['table'] = 'field_data_field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['field'] = 'field_kontaktblok_aa_manaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['text'] = '<div class="dag">Mandag:</div><div class="aaben"> [field_kontaktblok_aa_manaa][field_kontaktblok_aa_manlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_manaa']['field_api_classes'] = 0;
  /* Felt: Indhold: Tirsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['id'] = 'field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['table'] = 'field_data_field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['field'] = 'field_kontaktblok_aa_tirlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['text'] = ' - [field_kontaktblok_aa_tirlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tirlk']['field_api_classes'] = 0;
  /* Felt: Indhold: Tirsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['id'] = 'field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['table'] = 'field_data_field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['field'] = 'field_kontaktblok_aa_tiraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['text'] = '<div class="dag">Tirsdag:</div><div class="aaben"> [field_kontaktblok_aa_tiraa][field_kontaktblok_aa_tirlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_tiraa']['field_api_classes'] = 0;
  /* Felt: Indhold: Onsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['id'] = 'field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['table'] = 'field_data_field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['field'] = 'field_kontaktblok_aa_onslk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['text'] = ' - [field_kontaktblok_aa_onslk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onslk']['field_api_classes'] = 0;
  /* Felt: Indhold: Onsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['id'] = 'field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['table'] = 'field_data_field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['field'] = 'field_kontaktblok_aa_onsaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['text'] = '<div class="dag">Onsdag:</div><div class="aaben"> [field_kontaktblok_aa_onsaa][field_kontaktblok_aa_onslk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_onsaa']['field_api_classes'] = 0;
  /* Felt: Indhold: Torsdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['id'] = 'field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['table'] = 'field_data_field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['field'] = 'field_kontaktblok_aa_torlk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['text'] = ' - [field_kontaktblok_aa_torlk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_torlk']['field_api_classes'] = 0;
  /* Felt: Indhold: Torsdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['id'] = 'field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['table'] = 'field_data_field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['field'] = 'field_kontaktblok_aa_toraa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['text'] = '<div class="dag">Torsdag:</div><div class="aaben"> [field_kontaktblok_aa_toraa][field_kontaktblok_aa_torlk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_toraa']['field_api_classes'] = 0;
  /* Felt: Indhold: Fredag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['id'] = 'field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['table'] = 'field_data_field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['field'] = 'field_kontaktblok_aa_frelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['text'] = ' - [field_kontaktblok_aa_frelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_frelk']['field_api_classes'] = 0;
  /* Felt: Indhold: Fredag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['id'] = 'field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['table'] = 'field_data_field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['field'] = 'field_kontaktblok_aa_freaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['text'] = '<div class="dag">Fredag:</div><div class="aaben"> [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_freaa']['field_api_classes'] = 0;
  /* Felt: Indhold: Lørdag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['id'] = 'field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['table'] = 'field_data_field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['field'] = 'field_kontaktblok_aa_loelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['text'] = ' - [field_kontaktblok_aa_loelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loelk']['field_api_classes'] = 0;
  /* Felt: Indhold: Lørdag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['id'] = 'field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['table'] = 'field_data_field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['field'] = 'field_kontaktblok_aa_loeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['text'] = '<div class="dag">Lørdag:</div><div class="aaben"> [field_kontaktblok_aa_loeaa][field_kontaktblok_aa_loelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_loeaa']['field_api_classes'] = 0;
  /* Felt: Indhold: Søndag, lukker */
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['id'] = 'field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['table'] = 'field_data_field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['field'] = 'field_kontaktblok_aa_soelk';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['text'] = ' - [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soelk']['field_api_classes'] = 0;
  /* Felt: Indhold: Søndag, åbner */
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['id'] = 'field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['table'] = 'field_data_field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['field'] = 'field_kontaktblok_aa_soeaa';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['text'] = '<div class="dag">Søndag:</div><div class="aaben"> [field_kontaktblok_aa_soeaa][field_kontaktblok_aa_soelk]</div>';
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_aa_soeaa']['field_api_classes'] = 0;
  /* Felt: Indhold: Vis Callcenter */
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['id'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['table'] = 'field_data_field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['field'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['text'] = '<p><strong>Callcenter</strong></p>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<div class="dag">Mandag-onsdag:</div><div class="aaben">08.30 - 15.00</div>
<div class="dag">Torsdag:</div><div class="aaben"> 08.30 - 17.00</div>
<div class="dag">Fredag:</div><div class="aaben> 08.30 - 12.00</div>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på bibliotekerne. Besøg bibliotekets hjemmeside <a href="http://bibliotek.syddjurs.dk">her</a></p>
';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_class'] = 'kontaktblok-indhold';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['empty'] = '<div class="telefonnummer"><a href="tel:[field_phone1]">[field_phone1]</a></div>';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Indhold: Vis åbningstider */
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['id'] = 'field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['table'] = 'field_data_field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['field'] = 'field_kontaktblok_vis_aabnen';
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_vis_aabnen']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_stedadresse']['id'] = 'field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['table'] = 'field_data_field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['field'] = 'field_stedadresse';
  $handler->display->display_options['fields']['field_stedadresse']['label'] = '';
  $handler->display->display_options['fields']['field_stedadresse']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stedadresse']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stedadresse']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stedadresse']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stedadresse']['field_api_classes'] = 0;
  /* Felt: Indhold: Postnummer */
  $handler->display->display_options['fields']['field_stedpostnr']['id'] = 'field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['table'] = 'field_data_field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['field'] = 'field_stedpostnr';
  $handler->display->display_options['fields']['field_stedpostnr']['label'] = '';
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stedpostnr']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stedpostnr']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stedpostnr']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stedpostnr']['field_api_classes'] = 0;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'if (function_exists(\'os2web_kontaktblok_get_block\')) {
return os2web_kontaktblok_get_block();
}';
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
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kontaktblok' => 'kontaktblok',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Kontaktblok */
  $handler = $view->new_display('panel_pane', 'Kontaktblok', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['kontaktblok'] = array(
    t('Master'),
    t('Kontakt'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="/kontakt">Gå til kontaktoversigt</a>'),
    t('Kontakt [title]'),
    t('<'),
    t('Mandag, lukker'),
    t(' - [field_kontaktblok_aa_manlk]'),
    t('<div class="dag">Mandag:</div><div class="aaben"> [field_kontaktblok_aa_manaa][field_kontaktblok_aa_manlk]</div>'),
    t('Tirsdag, lukker'),
    t(' - [field_kontaktblok_aa_tirlk]'),
    t('<div class="dag">Tirsdag:</div><div class="aaben"> [field_kontaktblok_aa_tiraa][field_kontaktblok_aa_tirlk]</div>'),
    t('Onsdag, lukker'),
    t(' - [field_kontaktblok_aa_onslk]'),
    t('<div class="dag">Onsdag:</div><div class="aaben"> [field_kontaktblok_aa_onsaa][field_kontaktblok_aa_onslk]</div>'),
    t('Torsdag, lukker'),
    t(' - [field_kontaktblok_aa_torlk]'),
    t('<div class="dag">Torsdag:</div><div class="aaben"> [field_kontaktblok_aa_toraa][field_kontaktblok_aa_torlk]</div>'),
    t('Fredag, lukker'),
    t(' - [field_kontaktblok_aa_frelk]'),
    t('<div class="dag">Fredag:</div><div class="aaben"> [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]</div>'),
    t('Lørdag, lukker'),
    t(' - [field_kontaktblok_aa_loelk]'),
    t('<div class="dag">Lørdag:</div><div class="aaben"> [field_kontaktblok_aa_loeaa][field_kontaktblok_aa_loelk]</div>'),
    t('Søndag, lukker'),
    t(' - [field_kontaktblok_aa_freaa][field_kontaktblok_aa_frelk]'),
    t('<div class="dag">Søndag:</div><div class="aaben"> [field_kontaktblok_aa_soeaa][field_kontaktblok_aa_soelk]</div>'),
    t('<p><strong>Callcenter</strong></p>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<div class="dag">Mandag-onsdag:</div><div class="aaben">08.30 - 15.00</div>
<div class="dag">Torsdag:</div><div class="aaben"> 08.30 - 17.00</div>
<div class="dag">Fredag:</div><div class="aaben> 08.30 - 12.00</div>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på bibliotekerne. Besøg bibliotekets hjemmeside <a href="http://bibliotek.syddjurs.dk">her</a></p>
'),
    t('<div class="telefonnummer"><a href="tel:[field_phone1]">[field_phone1]</a></div>'),
    t('Vis åbningstider'),
    t('Alle'),
    t('Block'),
    t('Kontaktblok'),
    t('View panes'),
  );
  $export['kontaktblok'] = $view;

  return $export;
}
