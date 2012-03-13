<?php
/**
 * @file
 * ballerup_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ballerup_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'admin_content';
  $view->description = 'Emulates the Drupal content administration page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indhold';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 1;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er intet indhold at vise.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'balk_custom_node_assign_term_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'node_promote_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'balk_custom_node_empty_lead_image_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'balk_sections_node_set_inherit_field_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Har nyt indhold */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Felt: Indhold: Overordnet placering */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_site_structure']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_site_structure']['field_api_classes'] = 0;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Forfatter';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Redigér';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 0;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filterkriterie: Indhold: Overordnet placering (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_site_structure_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['operator_id'] = 'field_site_structure_tid_op';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['label'] = 'Overordnet placering';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['operator'] = 'field_site_structure_tid_op';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['identifier'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_site_structure_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_site_structure_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';
  $handler->display->display_options['filters']['field_site_structure_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_site_structure_tid']['error_message'] = 1;
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = 'All';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['exposed'] = TRUE;
  $handler->display->display_options['filters']['promote']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['promote']['expose']['label'] = 'Promoted';
  $handler->display->display_options['filters']['promote']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = 'promote_op';
  $handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
  $handler->display->display_options['filters']['promote']['expose']['multiple'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = FALSE;
  /* Filterkriterie: Indhold: Source ID (field_source_id) */
  $handler->display->display_options['filters']['field_source_id_value']['id'] = 'field_source_id_value';
  $handler->display->display_options['filters']['field_source_id_value']['table'] = 'field_data_field_source_id';
  $handler->display->display_options['filters']['field_source_id_value']['field'] = 'field_source_id_value';
  $handler->display->display_options['filters']['field_source_id_value']['group'] = 0;
  $handler->display->display_options['filters']['field_source_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_id_value']['expose']['operator_id'] = 'field_source_id_value_op';
  $handler->display->display_options['filters']['field_source_id_value']['expose']['label'] = 'Source ID';
  $handler->display->display_options['filters']['field_source_id_value']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_source_id_value']['expose']['operator'] = 'field_source_id_value_op';
  $handler->display->display_options['filters']['field_source_id_value']['expose']['identifier'] = 'field_source_id_value';
  $handler->display->display_options['filters']['field_source_id_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content2';
  $translatables['admin_content'] = array(
    t('Master'),
    t('Indhold'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Der er intet indhold at vise.'),
    t('forfatter'),
    t('Titel'),
    t('New?'),
    t('Type'),
    t('Overordnet placering'),
    t('Forfatter'),
    t('Udgivet'),
    t('Redigér'),
    t('Title contains'),
    t('Node: Type'),
    t('Promoted'),
    t('Source ID'),
    t('Page'),
  );
  $export['admin_content'] = $view;

  $view = new view;
  $view->name = 'ballerup_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ballerup Taxonomy term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'short_date_only';
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail';
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  /* Felt: Indhold: Medlem af følgende Råd og Nævn... */
  $handler->display->display_options['fields']['field_member']['id'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['table'] = 'field_data_field_member';
  $handler->display->display_options['fields']['field_member']['field'] = 'field_member';
  /* Felt: Indhold: Sektioner */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'forums' => 0,
    'aktivitetstype' => 0,
    'emneord' => 0,
    'grupper_og_udvalg' => 0,
    'nyhedstype' => 0,
    'organisation' => 0,
    'site_struktur' => 0,
    'politiske_partier' => 0,
    'r_d_og_n_vn' => 0,
    'structure' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'forums' => 0,
    'aktivitetstype' => 0,
    'emneord' => 0,
    'grupper_og_udvalg' => 0,
    'nyhedstype' => 0,
    'organisation' => 0,
    'site_struktur' => 0,
    'politiske_partier' => 0,
    'r_d_og_n_vn' => 0,
    'structure' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
  /* Kontekstuelt filter: Indhold: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = 1;
  /* Filterkriterie: Indhold: Udgivet eller administrator */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Block - Grid */
  $handler = $view->new_display('block', 'Block - Grid', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;

  /* Display: Block - List */
  $handler = $view->new_display('block', 'Block - List', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';

  /* Display: Block - Table */
  $handler = $view->new_display('block', 'Block - Table', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_lead_image' => 'field_lead_image',
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_lead_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = 'Billede';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = 'Resume';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Indholdsside Block - Grid */
  $handler = $view->new_display('block', 'Indholdsside Block - Grid', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Nid (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Content: Nid (hidden)';
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
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Felt: Content: Attached node (Hidden) */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['ui_name'] = 'Content: Attached node (Hidden)';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet eller administrator */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Block - Personale */
  $handler = $view->new_display('block', 'Block - Personale', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';
  $handler->display->display_options['display_description'] = 'Showing personale based on taxonomy term';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'original-460px',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lead_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = '';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = '';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  $translatables['ballerup_taxonomy_term'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Adresse'),
    t('E-mail'),
    t('Hjemmeside'),
    t('Medlem af følgende Råd og Nævn...'),
    t('Sektioner'),
    t('Telefonnummer'),
    t('Alle'),
    t('%1'),
    t('Block - Grid'),
    t('Block - List'),
    t('Block - Table'),
    t('Billede'),
    t('Titel'),
    t('Resume'),
    t('Feed'),
    t('Indholdsside Block - Grid'),
    t('Block - Personale'),
    t('Showing personale based on taxonomy term'),
    t('mailto:[field_email]'),
    t('[field_url]'),
  );
  $export['ballerup_taxonomy_term'] = $view;

  $view = new view;
  $view->name = 'campaigns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kampagner og temaer';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tema' => 'tema',
  );
  /* Filterkriterie: Indhold: Overordnet placering (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['value'] = array(
    228 => '228',
  );
  $handler->display->display_options['filters']['field_site_structure_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_site_structure_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';

  /* Display: Block: Aktuelt i Ballerup */
  $handler = $view->new_display('block', 'Block: Aktuelt i Ballerup', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Aktuelt i Ballerup';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-campaigns-front-aktuelt-i-ballerup';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Attached node (Hidden) */
  $handler->display->display_options['fields']['field_attached_node']['id'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['table'] = 'field_data_field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['field'] = 'field_attached_node';
  $handler->display->display_options['fields']['field_attached_node']['ui_name'] = 'Content: Attached node (Hidden)';
  $handler->display->display_options['fields']['field_attached_node']['label'] = '';
  $handler->display->display_options['fields']['field_attached_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attached_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attached_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_attached_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_attached_node']['type'] = 'balk_custom_node_reference_nid';
  $handler->display->display_options['fields']['field_attached_node']['field_api_classes'] = 0;
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
  /* Felt: Content: Primære billede (Color) */
  $handler->display->display_options['fields']['field_lead_image_1']['id'] = 'field_lead_image_1';
  $handler->display->display_options['fields']['field_lead_image_1']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image_1']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image_1']['ui_name'] = 'Content: Primære billede (Color)';
  $handler->display->display_options['fields']['field_lead_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['path'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image_1']['settings'] = array(
    'image_style' => 'thumbnail-campaign-front-color',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image_1']['field_api_classes'] = 0;
  /* Felt: Content: Primære billede (BW) */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['ui_name'] = 'Content: Primære billede (BW)';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['path'] = 'node/[field_attached_node]';
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail-campaign-front-bw',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Aktuelt i Ballerup';

  /* Display: Block: Latest campaign */
  $handler = $view->new_display('block', 'Block: Latest campaign', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest campaign';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-campaigns-latest-campaign';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Latest campaign';
  $translatables['campaigns'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Block: Aktuelt i Ballerup'),
    t('Aktuelt i Ballerup'),
    t('node/[field_attached_node]'),
    t('Block: Latest campaign'),
    t('Latest campaign'),
  );
  $export['campaigns'] = $view;

  $view = new view;
  $view->name = 'content_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indholdssider';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contentpage' => 'contentpage',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';
  $handler->display->display_options['path'] = 'indholdssider';
  $translatables['content_page'] = array(
    t('Master'),
    t('Indholdssider'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
  );
  $export['content_page'] = $view;

  $view = new view;
  $view->name = 'iframe';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'iFrame';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'iFrame, Selvbetjeningsløsning mm.';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';
  $handler->display->display_options['path'] = 'iframes';
  $translatables['iframe'] = array(
    t('Master'),
    t('iFrame, Selvbetjeningsløsning mm.'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
  );
  $export['iframe'] = $view;

  $view = new view;
  $view->name = 'institution';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Institution';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Institutioner';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institution' => 'institution',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';
  $handler->display->display_options['path'] = 'institutioner';
  $translatables['institution'] = array(
    t('Master'),
    t('Institutioner'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
  );
  $export['institution'] = $view;

  $view = new view;
  $view->name = 'lokalplan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lokalplan';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lokalplaner, Kildedal';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_lead_image' => 'field_lead_image',
    'field_file' => 'field_file',
    'title' => 'title',
    'field_resume_long' => 'field_resume_long',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_lead_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_file' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_long' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Tilføj fil */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = 'Download:';
  $handler->display->display_options['fields']['field_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_file']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_file']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_file']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_file]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_area_tid']['expose']['operator_id'] = 'field_area_tid_op';
  $handler->display->display_options['filters']['field_area_tid']['expose']['label'] = 'Vælg en bydel:';
  $handler->display->display_options['filters']['field_area_tid']['expose']['operator'] = 'field_area_tid_op';
  $handler->display->display_options['filters']['field_area_tid']['expose']['identifier'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['filters']['field_area_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';
  $handler->display->display_options['path'] = 'lokalplan';

  /* Display: Kildedal */
  $handler = $view->new_display('page', 'Kildedal', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Kildedal';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    203 => '203',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/kildedal';

  /* Display: Måløv */
  $handler = $view->new_display('page', 'Måløv', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Måløv';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    204 => '204',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/malov';

  /* Display: Skovlunde */
  $handler = $view->new_display('page', 'Skovlunde', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Skovlunde';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Skovlunde';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    216 => '216',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/skovlunde';

  /* Display: Egebjerg */
  $handler = $view->new_display('page', 'Egebjerg', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Egebjerg';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Egebjerg';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    211 => '211',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/egebjerg';

  /* Display: Ågerup */
  $handler = $view->new_display('page', 'Ågerup', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Ågerup';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Ågerup';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    214 => '214',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/aagerup';

  /* Display: Måløv Kilen */
  $handler = $view->new_display('page', 'Måløv Kilen', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Måløv Kilen';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Måløv Kilen';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    210 => '210',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/malov-kilen';

  /* Display: Ballerup Midt */
  $handler = $view->new_display('page', 'Ballerup Midt', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Ballerup Midt';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Ballerup Midt';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    202 => '202',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/ballerup-midt';

  /* Display: Ballerup Syd */
  $handler = $view->new_display('page', 'Ballerup Syd', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Ballerup Syd';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Ballerup Syd';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    212 => '212',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/ballerup-syd';

  /* Display: Harrestrup */
  $handler = $view->new_display('page', 'Harrestrup', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Harrestrup';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Harrestrup';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    215 => '215',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/harrestrup';

  /* Display: Lautrupgård */
  $handler = $view->new_display('page', 'Lautrupgård', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokalplaner, Lautrupgård';
  $handler->display->display_options['display_description'] = 'Oversigt over lokalplaner i Lautrupgård';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'local_plan' => 'local_plan',
  );
  /* Filterkriterie: Indhold: Bydel (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    213 => '213',
  );
  $handler->display->display_options['filters']['field_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'bydel';
  $handler->display->display_options['path'] = 'lokalplaner/lautrupgaard';
  $translatables['lokalplan'] = array(
    t('Master'),
    t('Lokalplaner, Kildedal'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Download:'),
    t('[field_file]'),
    t('Vælg en bydel:'),
    t('Page'),
    t('Lokalplaner'),
    t('Kildedal'),
    t('Måløv'),
    t('Lokalplaner, Måløv'),
    t('Skovlunde'),
    t('Lokalplaner, Skovlunde'),
    t('Oversigt over lokalplaner i Skovlunde'),
    t('Egebjerg'),
    t('Lokalplaner, Egebjerg'),
    t('Oversigt over lokalplaner i Egebjerg'),
    t('Ågerup'),
    t('Lokalplaner, Ågerup'),
    t('Oversigt over lokalplaner i Ågerup'),
    t('Måløv Kilen'),
    t('Lokalplaner, Måløv Kilen'),
    t('Oversigt over lokalplaner i Måløv Kilen'),
    t('Ballerup Midt'),
    t('Lokalplaner, Ballerup Midt'),
    t('Oversigt over lokalplaner i Ballerup Midt'),
    t('Ballerup Syd'),
    t('Lokalplaner, Ballerup Syd'),
    t('Oversigt over lokalplaner i Ballerup Syd'),
    t('Harrestrup'),
    t('Lokalplaner, Harrestrup'),
    t('Oversigt over lokalplaner i Harrestrup'),
    t('Lautrupgård'),
    t('Lokalplaner, Lautrupgård'),
    t('Oversigt over lokalplaner i Lautrupgård'),
  );
  $export['lokalplan'] = $view;

  $view = new view;
  $view->name = 'media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media' => 'media',
  );

  /* Display: Block: Hold dig opdateret */
  $handler = $view->new_display('block', 'Block: Hold dig opdateret', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hold dig opdateret';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-media-front-hold-dig-opdateret';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Hold dig opdateret';
  $translatables['media'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Block: Hold dig opdateret'),
    t('Hold dig opdateret'),
  );
  $export['media'] = $view;

  $view = new view;
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['use_more_text'] = 'Flere nyheder >';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_category' => 'field_news_category',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-news-front',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    35 => '35',
    36 => '36',
    37 => '37',
    38 => '38',
    39 => '39',
    40 => '40',
    41 => '41',
    42 => '42',
    43 => '43',
    44 => '44',
    45 => '45',
    46 => '46',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;

  /* Display: Block: Ballerup nyt */
  $handler = $view->new_display('block', 'Block: Ballerup nyt', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste nyt';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-news-front-ballerup-nyt';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-news-front',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Nyhedskategori */
  $handler->display->display_options['fields']['field_news_category']['id'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['fields']['field_news_category']['field'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_category']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_news_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_news_category']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_category']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_category']['field_api_classes'] = 0;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'short_date_only';
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['block_description'] = 'Ballerup nyt ';

  /* Display: Page: Nyheder */
  $handler = $view->new_display('page', 'Page: Nyheder', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list views-news-page-nyheder';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_news_category' => 'field_news_category',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Nyhedskategori */
  $handler->display->display_options['fields']['field_news_category']['id'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['fields']['field_news_category']['field'] = 'field_news_category';
  $handler->display->display_options['fields']['field_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_news_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_news_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_news_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_news_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_news_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_news_category']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_news_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_news_category']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_news_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_news_category']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_news_category']['field_api_classes'] = 0;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'short_date_only';
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['path'] = 'nyheder';

  /* Display: Feed: By & Bolig */
  $handler = $view->new_display('feed', 'Feed: By & Bolig', 'feed_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'By, Bolig & Trafik';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    43 => '43',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/by-bolig';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Sundhed & Forebyggelse */
  $handler = $view->new_display('feed', 'Feed: Sundhed & Forebyggelse', 'feed_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sundhed & Forebyggelse';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    41 => '41',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/sundhed-forebyggelse';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Borgerservice */
  $handler = $view->new_display('feed', 'Feed: Borgerservice', 'feed_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Borgerservice';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    44 => '44',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/borgerservice';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Erhverv */
  $handler = $view->new_display('feed', 'Feed: Erhverv', 'feed_10');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    45 => '45',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/erhverv';

  /* Display: Feed: Alle Nyheder */
  $handler = $view->new_display('feed', 'Feed: Alle Nyheder', 'feed_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alle Nyheder';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    35 => '35',
    36 => '36',
    37 => '37',
    38 => '38',
    39 => '39',
    40 => '40',
    41 => '41',
    42 => '42',
    43 => '43',
    44 => '44',
    45 => '45',
    46 => '46',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/alle-nyheder';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Politik */
  $handler = $view->new_display('feed', 'Feed: Politik', 'feed_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politik';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'fulltext';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    46 => '46',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/politik';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Om Kultur & Fritid */
  $handler = $view->new_display('feed', 'Feed: Om Kultur & Fritid', 'feed_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kultur & Fritid';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    40 => '40',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/kultur-fritid';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Ældre & Pleje */
  $handler = $view->new_display('feed', 'Feed: Ældre & Pleje', 'feed_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ældre & Pleje';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/aeldre-pleje';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Børn og Unge */
  $handler = $view->new_display('feed', 'Feed: Børn og Unge', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Børn & Unge';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    36 => '36',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/born-unge';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Om Ballerup */
  $handler = $view->new_display('feed', 'Feed: Om Ballerup', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Om Ballerup';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    35 => '35',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/om-ballerup';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Job & Uddannelse */
  $handler = $view->new_display('feed', 'Feed: Job & Uddannelse', 'feed_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Job & Uddannelse';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    37 => '37',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/job-uddannelse';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Handikap & Psykiatri */
  $handler = $view->new_display('feed', 'Feed: Handikap & Psykiatri', 'feed_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Handikap & Psykiatri';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    38 => '38',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/handicap-psykiatri';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Feed: Natur & Miljø */
  $handler = $view->new_display('feed', 'Feed: Natur & Miljø', 'feed_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Natur & Mijø';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_13';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Feed: Om Ballerup */
  $handler->display->display_options['filters']['field_news_category_tid']['id'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['table'] = 'field_data_field_news_category';
  $handler->display->display_options['filters']['field_news_category_tid']['field'] = 'field_news_category_tid';
  $handler->display->display_options['filters']['field_news_category_tid']['ui_name'] = 'Feed: Om Ballerup';
  $handler->display->display_options['filters']['field_news_category_tid']['value'] = array(
    42 => '42',
  );
  $handler->display->display_options['filters']['field_news_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_category_tid']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['field_news_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'nyheder/feed/natur-miljo';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['news'] = array(
    t('Master'),
    t('Nyheder'),
    t('Flere nyheder >'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Block: Ballerup nyt'),
    t('Seneste nyt'),
    t('mere'),
    t('Ballerup nyt '),
    t('Page: Nyheder'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Feed: By & Bolig'),
    t('By, Bolig & Trafik'),
    t('Feed: Sundhed & Forebyggelse'),
    t('Sundhed & Forebyggelse'),
    t('Feed: Borgerservice'),
    t('Borgerservice'),
    t('Feed: Erhverv'),
    t('Feed: Alle Nyheder'),
    t('Alle Nyheder'),
    t('Feed: Politik'),
    t('Politik'),
    t('Feed: Om Kultur & Fritid'),
    t('Kultur & Fritid'),
    t('Feed: Ældre & Pleje'),
    t('Ældre & Pleje'),
    t('Feed: Børn og Unge'),
    t('Børn & Unge'),
    t('Feed: Om Ballerup'),
    t('Om Ballerup'),
    t('Feed: Job & Uddannelse'),
    t('Job & Uddannelse'),
    t('Feed: Handikap & Psykiatri'),
    t('Handikap & Psykiatri'),
    t('Feed: Natur & Miljø'),
    t('Natur & Mijø'),
  );
  $export['news'] = $view;

  $view = new view;
  $view->name = 'persons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Persons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personer';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
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
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'person' => 'person',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lead_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Felt: Content: Navn */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Navn';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Content: Titel */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['ui_name'] = 'Content: Titel';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_short_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_short_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_short_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_short_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_short_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_short_description']['field_api_classes'] = 0;
  /* Felt: Indhold: Sektioner */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_organization']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organization']['field_api_classes'] = 0;
  /* Felt: Indhold: Medlem af følgende Råd og Nævn... */
  $handler->display->display_options['fields']['field_member']['id'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['table'] = 'field_data_field_member';
  $handler->display->display_options['fields']['field_member']['field'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['label'] = '';
  $handler->display->display_options['fields']['field_member']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['text'] = 'Medled af [field_member]';
  $handler->display->display_options['fields']['field_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_member']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_member']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = '';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = '';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'person' => 'person',
  );
  /* Filterkriterie: Indhold: Sektioner (field_organization) */
  $handler->display->display_options['filters']['field_organization_tid']['id'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['table'] = 'field_data_field_organization';
  $handler->display->display_options['filters']['field_organization_tid']['field'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_tid']['expose']['operator_id'] = 'field_organization_tid_op';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['label'] = 'Filtrér efter organisation:';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['operator'] = 'field_organization_tid_op';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['identifier'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organization_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_organization_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_tid']['vocabulary'] = 'organisation';
  $handler->display->display_options['filters']['field_organization_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_organization_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'personer';

  /* Display: Personalen */
  $handler = $view->new_display('page', 'Personalen', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Personale';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
  /* Felt: Content: Navn */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Navn';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Content: Titel */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['ui_name'] = 'Content: Titel';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_short_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_short_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_short_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_short_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_short_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_short_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_short_description']['field_api_classes'] = 0;
  /* Felt: Indhold: Sektioner */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_organization']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organization']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = '';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = '';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'person' => 'person',
  );
  /* Filterkriterie: Indhold: Sektioner (field_organization) */
  $handler->display->display_options['filters']['field_organization_tid']['id'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['table'] = 'field_data_field_organization';
  $handler->display->display_options['filters']['field_organization_tid']['field'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['value'] = array(
    287 => '287',
    286 => '286',
    284 => '284',
    285 => '285',
    49 => '49',
    280 => '280',
    282 => '282',
    281 => '281',
    283 => '283',
    271 => '271',
    48 => '48',
    266 => '266',
    265 => '265',
    277 => '277',
    267 => '267',
    278 => '278',
    279 => '279',
  );
  $handler->display->display_options['filters']['field_organization_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_tid']['expose']['operator_id'] = 'field_organization_tid_op';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['label'] = 'Sektioner (field_organization)';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['operator'] = 'field_organization_tid_op';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['identifier'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organization_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_organization_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_tid']['vocabulary'] = 'organisation';
  $handler->display->display_options['filters']['field_organization_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_organization_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'personalen';
  $translatables['persons'] = array(
    t('Master'),
    t('Personer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
    t('Medled af [field_member]'),
    t('Filtrér efter organisation:'),
    t('Personalen'),
    t('Personale'),
    t('Sektioner (field_organization)'),
  );
  $export['persons'] = $view;

  $view = new view;
  $view->name = 'politician';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Politician';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Politiker';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'politician' => 'politician',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Kommunalbestyrelsen (field_role_in_kb) */
  $handler->display->display_options['sorts']['field_role_in_kb_tid']['id'] = 'field_role_in_kb_tid';
  $handler->display->display_options['sorts']['field_role_in_kb_tid']['table'] = 'field_data_field_role_in_kb';
  $handler->display->display_options['sorts']['field_role_in_kb_tid']['field'] = 'field_role_in_kb_tid';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  /* Filterkriterie: Indhold: Rolle i Kommunalbestyrelsen (field_role_in_kb) */
  $handler->display->display_options['filters']['field_role_in_kb_tid']['id'] = 'field_role_in_kb_tid';
  $handler->display->display_options['filters']['field_role_in_kb_tid']['table'] = 'field_data_field_role_in_kb';
  $handler->display->display_options['filters']['field_role_in_kb_tid']['field'] = 'field_role_in_kb_tid';
  $handler->display->display_options['filters']['field_role_in_kb_tid']['value'] = array(
    235 => '235',
    236 => '236',
    237 => '237',
    238 => '238',
  );
  $handler->display->display_options['filters']['field_role_in_kb_tid']['group'] = 0;
  $handler->display->display_options['filters']['field_role_in_kb_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_role_in_kb_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_role_in_kb_tid']['vocabulary'] = 'roller_i_kommunalbestyrelsen';
  $handler->display->display_options['path'] = 'kommunen/politik/kommunalbestyrelsen/politikere';

  /* Display: DEMO Page */
  $handler = $view->new_display('page', 'DEMO Page', 'page_7');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Indhold: Medlem af Grupper og udvalg... */
  $handler->display->display_options['fields']['field_udvalg']['id'] = 'field_udvalg';
  $handler->display->display_options['fields']['field_udvalg']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['fields']['field_udvalg']['field'] = 'field_udvalg';
  $handler->display->display_options['fields']['field_udvalg']['label'] = '';
  $handler->display->display_options['fields']['field_udvalg']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['text'] = 'Medlem af [field_member]';
  $handler->display->display_options['fields']['field_udvalg']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_udvalg']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_udvalg']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udvalg']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_udvalg']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_udvalg']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_udvalg']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_udvalg']['field_api_classes'] = 0;
  /* Felt: Indhold: Medlem af følgende Råd og Nævn... */
  $handler->display->display_options['fields']['field_member']['id'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['table'] = 'field_data_field_member';
  $handler->display->display_options['fields']['field_member']['field'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['label'] = '';
  $handler->display->display_options['fields']['field_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_member']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_member']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'politikere';

  /* Display: Oversigt */
  $handler = $view->new_display('page', 'Oversigt', 'page_8');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Indhold: Hjemmeside */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['path'] = 'http://[field_url]';
  $handler->display->display_options['fields']['field_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_url']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_url']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Sorter efter:';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  /* Filterkriterie: Indhold: Partimedlemsskab (field_party_membership) */
  $handler->display->display_options['filters']['field_party_membership_tid']['id'] = 'field_party_membership_tid';
  $handler->display->display_options['filters']['field_party_membership_tid']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['filters']['field_party_membership_tid']['field'] = 'field_party_membership_tid';
  $handler->display->display_options['filters']['field_party_membership_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['operator_id'] = 'field_party_membership_tid_op';
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['operator'] = 'field_party_membership_tid_op';
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['identifier'] = 'field_party_membership_tid';
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_party_membership_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_party_membership_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_party_membership_tid']['vocabulary'] = 'politiske_partier';
  $handler->display->display_options['filters']['field_party_membership_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'politikere-oversigt';

  /* Display: KMB */
  $handler = $view->new_display('page', 'KMB', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommunalbestyrelsen';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefonnummer:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Kommunalbestyrelsen (field_role_in_kb) */
  $handler->display->display_options['sorts']['field_role_in_kb_tid']['id'] = 'field_role_in_kb_tid';
  $handler->display->display_options['sorts']['field_role_in_kb_tid']['table'] = 'field_data_field_role_in_kb';
  $handler->display->display_options['sorts']['field_role_in_kb_tid']['field'] = 'field_role_in_kb_tid';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    24 => '24',
    25 => '25',
    26 => '26',
    27 => '27',
    28 => '28',
    29 => '29',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Medlem af Grupper og udvalg... (field_udvalg)';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  /* Filterkriterie: Indhold: Partimedlemsskab (field_party_membership) */
  $handler->display->display_options['filters']['field_party_membership_tid']['id'] = 'field_party_membership_tid';
  $handler->display->display_options['filters']['field_party_membership_tid']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['filters']['field_party_membership_tid']['field'] = 'field_party_membership_tid';
  $handler->display->display_options['filters']['field_party_membership_tid']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['operator_id'] = 'field_party_membership_tid_op';
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['operator'] = 'field_party_membership_tid_op';
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['identifier'] = 'field_party_membership_tid';
  $handler->display->display_options['filters']['field_party_membership_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_party_membership_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_party_membership_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_party_membership_tid']['vocabulary'] = 'politiske_partier';
  $handler->display->display_options['filters']['field_party_membership_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'kmb';

  /* Display: KFU */
  $handler = $view->new_display('page', 'KFU', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kultur- og Fritidsudvalget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Kultur- og Fritidsudvalget (field_role_in_kfu) */
  $handler->display->display_options['sorts']['field_role_in_kfu_tid']['id'] = 'field_role_in_kfu_tid';
  $handler->display->display_options['sorts']['field_role_in_kfu_tid']['table'] = 'field_data_field_role_in_kfu';
  $handler->display->display_options['sorts']['field_role_in_kfu_tid']['field'] = 'field_role_in_kfu_tid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    24 => '24',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Sorter efter:';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'kfu';

  /* Display: TMU */
  $handler = $view->new_display('page', 'TMU', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teknik- og Miljøudvalget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Teknik- og Miljøudvalget (field_role_in_tmu) */
  $handler->display->display_options['sorts']['field_role_in_tmu_tid']['id'] = 'field_role_in_tmu_tid';
  $handler->display->display_options['sorts']['field_role_in_tmu_tid']['table'] = 'field_data_field_role_in_tmu';
  $handler->display->display_options['sorts']['field_role_in_tmu_tid']['field'] = 'field_role_in_tmu_tid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    28 => '28',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Medlem af Grupper og udvalg... (field_udvalg)';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'tmu';

  /* Display: OKU */
  $handler = $view->new_display('page', 'OKU', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Økonomiudvalget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Økonomiudvalget (field_role_in_ku) */
  $handler->display->display_options['sorts']['field_role_in_ku_tid']['id'] = 'field_role_in_ku_tid';
  $handler->display->display_options['sorts']['field_role_in_ku_tid']['table'] = 'field_data_field_role_in_ku';
  $handler->display->display_options['sorts']['field_role_in_ku_tid']['field'] = 'field_role_in_ku_tid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Medlem af Grupper og udvalg... (field_udvalg)';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'oku';

  /* Display: SOU */
  $handler = $view->new_display('page', 'SOU', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Socialudvalget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Socialudvalget (field_role_in_su) */
  $handler->display->display_options['sorts']['field_role_in_su_tid']['id'] = 'field_role_in_su_tid';
  $handler->display->display_options['sorts']['field_role_in_su_tid']['table'] = 'field_data_field_role_in_su';
  $handler->display->display_options['sorts']['field_role_in_su_tid']['field'] = 'field_role_in_su_tid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    26 => '26',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Medlem af Grupper og udvalg... (field_udvalg)';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'sou';

  /* Display: SFU */
  $handler = $view->new_display('page', 'SFU', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sundheds- og Forebyggelsesudvalget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Sundheds- og Forebyggelsesudvalget (field_role_in_sfu) */
  $handler->display->display_options['sorts']['field_role_in_sfu_tid']['id'] = 'field_role_in_sfu_tid';
  $handler->display->display_options['sorts']['field_role_in_sfu_tid']['table'] = 'field_data_field_role_in_sfu';
  $handler->display->display_options['sorts']['field_role_in_sfu_tid']['field'] = 'field_role_in_sfu_tid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    27 => '27',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Medlem af Grupper og udvalg... (field_udvalg)';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'sfu';

  /* Display: SUD */
  $handler = $view->new_display('page', 'SUD', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Skole- og Uddannelsesudvalget';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-persons-list-page';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'medium-person',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
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
  /* Felt: Indhold: Partimedlemsskab */
  $handler->display->display_options['fields']['field_party_membership']['id'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['table'] = 'field_data_field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['field'] = 'field_party_membership';
  $handler->display->display_options['fields']['field_party_membership']['label'] = '';
  $handler->display->display_options['fields']['field_party_membership']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_party_membership']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_party_membership']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_party_membership']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_party_membership']['field_api_classes'] = 0;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Adresse */
  $handler->display->display_options['fields']['field_adress']['id'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['table'] = 'field_data_field_adress';
  $handler->display->display_options['fields']['field_adress']['field'] = 'field_adress';
  $handler->display->display_options['fields']['field_adress']['label'] = 'Adresseoplysninger:';
  $handler->display->display_options['fields']['field_adress']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adress']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adress']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_adress']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_adress']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adress']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_adress']['field_api_classes'] = 0;
  /* Felt: Indhold: Telefonnummer */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['label'] = 'Telefon:';
  $handler->display->display_options['fields']['field_phone1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_phone1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_phone1']['field_api_classes'] = 0;
  /* Felt: Indhold: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'E-mail:';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['path'] = 'mailto:[field_email]';
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Rolle i Skole- og Uddannelsesudvalget (field_role_in_suu) */
  $handler->display->display_options['sorts']['field_role_in_suu_tid']['id'] = 'field_role_in_suu_tid';
  $handler->display->display_options['sorts']['field_role_in_suu_tid']['table'] = 'field_data_field_role_in_suu';
  $handler->display->display_options['sorts']['field_role_in_suu_tid']['field'] = 'field_role_in_suu_tid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'politician' => 'politician',
  );
  /* Filterkriterie: Indhold: Medlem af Grupper og udvalg... (field_udvalg) */
  $handler->display->display_options['filters']['field_udvalg_tid']['id'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['table'] = 'field_data_field_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['field'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator_id'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['label'] = 'Medlem af Grupper og udvalg... (field_udvalg)';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['operator'] = 'field_udvalg_tid_op';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['identifier'] = 'field_udvalg_tid';
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_udvalg_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_udvalg_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_udvalg_tid']['vocabulary'] = 'grupper_og_udvalg';
  $handler->display->display_options['filters']['field_udvalg_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'sud';
  $translatables['politician'] = array(
    t('Master'),
    t('Politiker'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
    t('DEMO Page'),
    t('Medlem af [field_member]'),
    t('Oversigt'),
    t('Adresseoplysninger:'),
    t('Telefon:'),
    t('E-mail:'),
    t('mailto:[field_email]'),
    t('Hjemmeside'),
    t('http://[field_url]'),
    t('Sorter efter:'),
    t('KMB'),
    t('Kommunalbestyrelsen'),
    t('Telefonnummer:'),
    t('E-mail'),
    t('Medlem af Grupper og udvalg... (field_udvalg)'),
    t('KFU'),
    t('Kultur- og Fritidsudvalget'),
    t('TMU'),
    t('Teknik- og Miljøudvalget'),
    t('OKU'),
    t('Økonomiudvalget'),
    t('SOU'),
    t('Socialudvalget'),
    t('SFU'),
    t('Sundheds- og Forebyggelsesudvalget'),
    t('SUD'),
    t('Skole- og Uddannelsesudvalget'),
  );
  $export['politician'] = $view;

  $view = new view;
  $view->name = 'referat';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Referat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Referater';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lead_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['field_api_classes'] = 0;
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
  /* Felt: Indhold: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_resume_long']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_resume_long']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'referat' => 'referat',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-view-list';
  $handler->display->display_options['path'] = 'referater';

  /* Display: Block: test referater */
  $handler = $view->new_display('block', 'Block: test referater', 'block_1');
  $handler->display->display_options['block_description'] = '/test-referater';
  $translatables['referat'] = array(
    t('Master'),
    t('Referater'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Page'),
    t('Block: test referater'),
    t('/test-referater'),
  );
  $export['referat'] = $view;

  $view = new view;
  $view->name = 'sektion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sektion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sektion';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Læs mere';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
    'contentpage' => 'contentpage',
    'news' => 'news',
  );
  /* Filterkriterie: Indhold: Overordnet placering (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_site_structure_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_site_structure_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';
  $handler->display->display_options['filters']['field_site_structure_tid']['hierarchy'] = 1;
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'section');
  $handler->display->display_options['path'] = 'testomraade';
  $translatables['sektion'] = array(
    t('Master'),
    t('Sektion'),
    t('Læs mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Page'),
    t('mere'),
  );
  $export['sektion'] = $view;

  return $export;
}
