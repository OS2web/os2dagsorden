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
  $handler->display->display_options['title'] = '<none>';
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
  /* Forbindelse: Indhold: Kontaktblok (field_node_reference_kontaktblok) */
  $handler->display->display_options['relationships']['field_node_reference_kontaktblok_nid']['id'] = 'field_node_reference_kontaktblok_nid';
  $handler->display->display_options['relationships']['field_node_reference_kontaktblok_nid']['table'] = 'field_data_field_node_reference_kontaktblok';
  $handler->display->display_options['relationships']['field_node_reference_kontaktblok_nid']['field'] = 'field_node_reference_kontaktblok_nid';
  $handler->display->display_options['relationships']['field_node_reference_kontaktblok_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_node_reference_kontaktblok_nid']['delta'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_egetindhold']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Sted Adresse */
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
  /* Felt: Indhold: Sted Postnr */
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
  $handler->display->display_options['fields']['field_phone1']['element_class'] = 'telefonnummer';
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
  /* Felt: Indhold: Vis Callcenter */
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['id'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['table'] = 'field_data_field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['field'] = 'field_kontaktblok_callcenter';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['alter']['text'] = '<p><strong>Callcenter</strong></p>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<p>Mandag-onsdag: 08.30 - 15.00<br />
Torsdag: 08.30 - 17.00<br />
Fredag: 08.30 - 12.00<p>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på bibliotekerne. Besøg bibliotekets hjemmeside <a href="http://bibliotek.syddjurs.dk">her</a></p>';
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
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['empty'] = '<div class="telefonnummer"><a href="tel:[field_phone1]">[field_phone1]</a></div>';
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_kontaktblok_callcenter']['field_api_classes'] = 0;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '2337';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Kontekstuelt filter: Indhold: Kontaktblok (field_node_reference_kontaktblok) */
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['id'] = 'field_node_reference_kontaktblok_nid';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['table'] = 'field_data_field_node_reference_kontaktblok';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['field'] = 'field_node_reference_kontaktblok_nid';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['relationship'] = 'field_node_reference_kontaktblok_nid';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_node_reference_kontaktblok_nid']['not'] = 0;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['kontaktblok'] = array(
    t('Master'),
    t('<none>'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('field_node_reference_kontaktblok'),
    t('Kontakt [title]'),
    t('<'),
    t('<p><strong>Callcenter</strong></p>
<div class="telfonnummer"><a href="tel:87535000">87 53 50 00</a></div>
<p>Mandag-onsdag: 08.30 - 15.00<br />
Torsdag: 08.30 - 17.00<br />
Fredag: 08.30 - 12.00<p>

<p>Borgerservice i Hornslet og Ebeltoft har lukket fredag.</p>

<p>Du kan få hjælp til selvbetjening på bibliotekerne. Besøg bibliotekets hjemmeside <a href="http://bibliotek.syddjurs.dk">her</a></p>'),
    t('<div class="telefonnummer"><a href="tel:[field_phone1]">[field_phone1]</a></div>'),
    t('Alle'),
    t('Block'),
  );
  $export['kontaktblok'] = $view;

  return $export;
}
