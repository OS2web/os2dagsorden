<?php
/**
 * @file
 * os2dagsorden_meeting_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2dagsorden_meeting_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kommende_m_der_i_mine_udvalg';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kommende møder i mine udvalg';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommende møder i mine udvalg';
  $handler->display->display_options['css_class'] = 'front-page-content-block';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'php_1' => 'field_title_short',
    'php' => 'field_title_short',
    'field_meeting_status' => 'field_meeting_status',
    'title' => 'title',
    'field_title_short' => 'field_title_short',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
    'field_committee' => 'field_committee',
    'field_name_short' => 'field_name_short',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title_short' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_short' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: help text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'help text';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class=\'help-button\' title=\'Her vises de kommende 5 møder i "Mine udvalg". Det vil sige udvalg som man enten er medlem af eller følger. Udvalgene kan ses i boksene "Medlem af" og "Jeg følger" i højremenuen. Der er ikke en dagsorden tilgængelig før status er angivet til publiceret.\'></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Content: Committee (field_committee) */
  $handler->display->display_options['relationships']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['relationships']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['relationships']['field_committee_tid']['field'] = 'field_committee_tid';
  /* Relationship: Taxonomy term: User using Is part of Committee */
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['id'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['field'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['relationship'] = 'field_committee_tid';
  /* Relationship: Taxonomy term: User using Follows committees */
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['id'] = 'reverse_field_follows_committee_user';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['field'] = 'reverse_field_follows_committee_user';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_user']['relationship'] = 'field_committee_tid';
  /* Relationship: Taxonomy term: User using Follows committees+ */
  $handler->display->display_options['relationships']['reverse_field_follows_committee_plus_user']['id'] = 'reverse_field_follows_committee_plus_user';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_plus_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_plus_user']['field'] = 'reverse_field_follows_committee_plus_user';
  $handler->display->display_options['relationships']['reverse_field_follows_committee_plus_user']['relationship'] = 'field_committee_tid';
  /* Field: nid hidden */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'nid hidden';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_meeting_status']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_meeting_status']['hide_alter_empty'] = FALSE;
  /* Field: indicator - has speaker paper */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'indicator - has speaker paper';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (os2dagsorden_access_helper_meeting_has_speaker_paper($row->nid)){
print "<div class=\\"indicator-has-speaker-paper\\"></div>";
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: indicator - has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - has notes';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = os2dagsorden_annotator_get_notes_by_meeting_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_title_short']['id'] = 'field_title_short';
  $handler->display->display_options['fields']['field_title_short']['table'] = 'field_data_field_title_short';
  $handler->display->display_options['fields']['field_title_short']['field'] = 'field_title_short';
  $handler->display->display_options['fields']['field_title_short']['label'] = 'Møde';
  $handler->display->display_options['fields']['field_title_short']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title_short']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_title_short']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_title_short']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_short']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_short']['empty'] = '[title]';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_date']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['text'] = 'none';
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_location']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_location']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_committee']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_committee']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name Short */
  $handler->display->display_options['fields']['field_name_short']['id'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['table'] = 'field_data_field_name_short';
  $handler->display->display_options['fields']['field_name_short']['field'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['relationship'] = 'field_committee_tid';
  $handler->display->display_options['fields']['field_name_short']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_name_short']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_name_short']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_name_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_short']['empty'] = '[field_committee]';
  $handler->display->display_options['fields']['field_name_short']['type'] = 'text_plain';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['expose']['label'] = 'Start dato';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'reverse_field_follows_committee_user';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_2']['id'] = 'uid_current_2';
  $handler->display->display_options['filters']['uid_current_2']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_2']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_2']['relationship'] = 'reverse_field_follows_committee_plus_user';
  $handler->display->display_options['filters']['uid_current_2']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_2']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['block_description'] = 'coming_meetings_my_committee';
  $translatables['kommende_m_der_i_mine_udvalg'] = array(
    t('Master'),
    t('Kommende møder i mine udvalg'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<div class=\'help-button\' title=\'Her vises de kommende 5 møder i "Mine udvalg". Det vil sige udvalg som man enten er medlem af eller følger. Udvalgene kan ses i boksene "Medlem af" og "Jeg følger" i højremenuen. Der er ikke en dagsorden tilgængelig før status er angivet til publiceret.\'></div>'),
    t('term from field_committee'),
    t('field_user_committee'),
    t('field_follows_committee'),
    t('field_follows_committee_plus'),
    t('Status'),
    t('meeting/[nid]'),
    t('&nbsp;'),
    t('Titel'),
    t('Møde'),
    t('[title]'),
    t('Dato'),
    t('Lokation'),
    t('none'),
    t('Udvalg'),
    t('[field_committee]'),
    t('Start dato'),
    t('Block'),
    t('coming_meetings_my_committee'),
  );
  $export['kommende_m_der_i_mine_udvalg'] = $view;

  $view = new view();
  $view->name = 'meeting_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lokation';
  $handler->display->display_options['css_class'] = 'bullet-point-attachments';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'table-plain-text';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'php_1' => 'title',
    'php' => 'title',
    'title' => 'title',
    'field_date' => 'field_date',
    'field_date_1' => 'field_date_1',
    'field_committee' => 'field_committee',
    'field_name_short' => 'field_name_short',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_short' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: breadcrumb override */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'breadcrumb override';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php global $base_url;
$breadcrumb[] = l(\'Hjem\', $base_url);
$breadcrumb[] .= \'<span class="breadcrumb-active">Mødedetaljer</span>\';
drupal_set_breadcrumb($breadcrumb);
?>';
  /* Header: description download */
  $handler->display->display_options['header']['php_1']['id'] = 'php_1';
  $handler->display->display_options['header']['php_1']['table'] = 'views';
  $handler->display->display_options['header']['php_1']['field'] = 'php';
  $handler->display->display_options['header']['php_1']['ui_name'] = 'description download';
  $handler->display->display_options['header']['php_1']['empty'] = FALSE;
  $handler->display->display_options['header']['php_1']['php_output'] = '<div align="right" style="margin:5px;"><input class="form-submit" type="button" onclick="window.open(\'<?php  
$nid = $results[0]->nid;
$meeting = node_load($nid);
print(file_create_url($meeting->field_meeting_description[\'und\'][0][\'uri\']));
?>
\')" value="Hent møde dagsorden i PDF"></div>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['id'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['table'] = 'field_data_field_ref_bullet_points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['field'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['label'] = 'Meetings bullet points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['id'] = 'field_ref_attachment_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['table'] = 'field_data_field_ref_attachment';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['field'] = 'field_ref_attachment_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['label'] = 'bullet point attachments';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bullet_point' => 'bullet_point',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mødedetaljer';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Committee (field_committee) */
  $handler->display->display_options['relationships']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['relationships']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['relationships']['field_committee_tid']['field'] = 'field_committee_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: indicator - has speaker paper */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'indicator - has speaker paper';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (os2dagsorden_access_helper_meeting_has_speaker_paper($row->nid)){
print "<div class=\\"indicator-has-speaker-paper\\"></div>";
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: indicator - has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - has notes';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = os2dagsorden_annotator_get_notes_by_meeting_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Startdato';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['label'] = 'Slutdato';
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_committee']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name Short */
  $handler->display->display_options['fields']['field_name_short']['id'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['table'] = 'field_data_field_name_short';
  $handler->display->display_options['fields']['field_name_short']['field'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['relationship'] = 'field_committee_tid';
  $handler->display->display_options['fields']['field_name_short']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_name_short']['empty'] = '[field_committee]';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['path'] = 'meeting/%';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lokation';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'table-plain-text';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Meeting id - hidden */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Meeting id - hidden';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dagsorden';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'nid' => 'nid',
    'nothing' => 'nothing',
    'field_bul_point_closed' => 'title',
    'php_1' => 'title',
    'php' => 'title',
    'title' => 'title',
    'field_ref_attachment' => 'title',
    'php_3' => 'title',
    'php_2' => 'php_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bul_point_closed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Dagsorden:</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: bullet point */
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['id'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['table'] = 'field_data_field_ref_bullet_points';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['field'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['ui_name'] = 'bullet point';
  $handler->display->display_options['relationships']['field_ref_bullet_points_target_id']['required'] = TRUE;
  /* Relationship: bullet point speaking paper */
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['id'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['field'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['ui_name'] = 'bullet point speaking paper';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['label'] = 'bullet point speaking paper';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['id'] = 'field_ref_attachment_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['table'] = 'field_data_field_ref_attachment';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['field'] = 'field_ref_attachment_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['relationships']['field_ref_attachment_target_id']['label'] = 'bullet point attachment';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Meeting id - hidden */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Meeting id - hidden';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Bullet point id - hidden */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Bullet point id - hidden';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: hide show container */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'hide show container';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'hide_show_button_container';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: closed indicator */
  $handler->display->display_options['fields']['field_bul_point_closed']['id'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['table'] = 'field_data_field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['field'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['field_bul_point_closed']['ui_name'] = 'closed indicator';
  $handler->display->display_options['fields']['field_bul_point_closed']['label'] = '';
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['text'] = '<div class="indicator-unlocked"></div>';
  $handler->display->display_options['fields']['field_bul_point_closed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bul_point_closed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['type'] = 'list_key';
  /* Field: indicator - bullet point has speaker paper */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'indicator - bullet point has speaker paper';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if(os2dagsorden_access_helper_bullet_point_has_speaker_paper($row->nid)){
 print("<div class=\\"indicator-has-speaker-paper\\"></div>");
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: indicator - bullet point has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - bullet point has notes';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = os2dagsorden_annotator_get_notes_by_bullet_point_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Bullet point title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_ref_bullet_points_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Bullet point title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid_1]/bullet-point/[nid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'first-child';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: bullet point attachments with text */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['ui_name'] = 'bullet point attachments with text';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
global $base_url;
$bullet_point = node_load($row->nid);
if (isset($bullet_point->field_ref_attachment[\'und\'])){
  print \'<div class="item-list">\';
  print \'<ul>\';
  if ($bullet_point->field_bul_point_closed[\'und\'][0][\'value\'] == 1){
    print "<i>Dagsordenpunktets indhold er skjult fordi dagsordenspunktet er lukket. Klik på dagsordenspunktets overskrift for at få indeholdet frem.</i>";
  }
  else {
    foreach($bullet_point->field_ref_attachment[\'und\'] as $attachment_id){
      print \'<li>\';
      $attachment = node_load($attachment_id[\'target_id\']);
      if (strlen($attachment->title) < 75)
	$title = $attachment->title;
      else 
	$title = substr($attachment->title, 0, 75).\'...\';
      $link = $base_url.\'?q=meeting/\'.$row->nid_1.\'/bullet-point/\'.$row->nid.\'/bullet-point-attachment/\'.$attachment->nid;
      print \'<div id="\'.$attachment->nid.\'" class="indicator-has-no-notes"></div><a href="\'.$link.\'" class="first-child last-child">\'.$title.\'</a>\';

      //attachment text - if any
      if (!empty($attachment->field_bpa_body[\'und\'][0][\'safe_value\'])){
	print \'<div class="attachment_text_container">\';

	//if is bilag - have the preview/trimmed content
	if (!empty($attachment->field_bpa_file[\'und\'])){
	  print \'<div class="attachment_text_trimmed_container">\';
          print os2dagsorden_access_helper_smart_truncate($attachment->field_bpa_body[\'und\'][0][\'safe_value\'], 300, \'...\', true, true);
	  print \'</div>\';
	  print(\'<a class="first-child last-child" href="\'.$link.\'">Læs mere...</a>\');
	}
	else { //if not bilag just print the content
	  print \'<div class="attachment_text_full_container">\';
	  print($attachment->field_bpa_body[\'und\'][0][\'safe_value\']);
	  print \'</div>\';
	}

	print \'</div>\';
      }
      print \'</li>\';
    }
  }
  print \'</ul>\';
  print \'</div>\';
}
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: speaker paper link */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'speaker paper link';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_class'] = 'speaker-paper-link-container';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $base_url;
if (os2dagsorden_access_helper_bullet_point_has_speaker_paper($row->nid)){
$link = $base_url.\'?q=meeting/\'.$row->nid_1.\'/bullet-point/\'.$row->nid;
print "<a href=\\"".$link."\\"><div class=\\"indicator-has-speaker-paper\\"></div>Talepapir</a>";
} else {
$q = $_GET[\'q\'];
$link = $base_url."?q=node/add/speaker-paper&edit[field_ref_bullet_point][und]=".$row->nid."&destination=".$q;

print "<a href=\\"".$link."\\"><div class=\\"indicator-create-speaker-paper\\"></div>Nyt talepapir</a>";
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['meeting_details'] = array(
    t('Master'),
    t('Lokation'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Meetings bullet points'),
    t('bullet point attachments'),
    t('author'),
    t('All'),
    t('Page'),
    t('Mødedetaljer'),
    t('term from field_committee'),
    t('Titel'),
    t('Startdato'),
    t('Slutdato'),
    t('Udvalg'),
    t('[field_committee]'),
    t('Attachment'),
    t('Dagsorden'),
    t('<h3>Dagsorden:</h3>'),
    t('Content entity referenced from field_ref_bullet_points'),
    t('bullet point speaking paper'),
    t('bullet point attachment'),
    t('<div class="indicator-unlocked"></div>'),
    t('meeting/[nid_1]/bullet-point/[nid]'),
  );
  $export['meeting_details'] = $view;

  $view = new view();
  $view->name = 'meetings_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meetings search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mødesøgning';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_filter_description' => 'fff',
      ),
    ),
    'field_date_value_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_filter_description' => 'testik',
      ),
    ),
    'field_committee_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_meeting_search_meta_date_value' => array(
      'more_options' => array(
        'bef_filter_description' => '<div class=\'help-button\' title=\'Her kan der søges i dagsordenspunkters tekst og i bilagenes fritekst, hvis sidstnævnte er konverteret til html. Søgning kan filtreres via dato, udvalg og søgeord.\'></div>',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_meeting_status' => 'field_meeting_status',
    'php_1' => 'field_title_short',
    'php' => 'field_title_short',
    'title' => 'title',
    'field_title_short' => 'field_title_short',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
    'field_committee' => 'field_committee',
    'field_committee_abbr' => 'field_committee_abbr',
    'field_name_short' => 'field_name_short',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title_short' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name_short' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: help text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'help text';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Her vises de møder der indeholdt møder, punkter eller bilag der matchede dine søgekriterier. Søgeresultatet vises på mødeniveau i listen."></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: breadcrumb override */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'breadcrumb override';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
global $base_url;
$q = explode(\'/\',$_GET[\'q\']);
$breadcrumb[] = l(\'Hjem\', $base_url);
$breadcrumb[] .= \'<span class="breadcrumb-active">Møde søgning</span>\';
drupal_set_breadcrumb($breadcrumb);
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen møder er fundet';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Committee (field_committee) */
  $handler->display->display_options['relationships']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['relationships']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['relationships']['field_committee_tid']['field'] = 'field_committee_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_meeting_status']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_meeting_status']['hide_alter_empty'] = FALSE;
  /* Field: indicator - has speaker paper */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'indicator - has speaker paper';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (os2dagsorden_access_helper_meeting_has_speaker_paper($row->nid)){
print "<div class=\\"indicator-has-speaker-paper\\"></div>";
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: indicator - has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - has notes';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = os2dagsorden_annotator_get_notes_by_meeting_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_title_short']['id'] = 'field_title_short';
  $handler->display->display_options['fields']['field_title_short']['table'] = 'field_data_field_title_short';
  $handler->display->display_options['fields']['field_title_short']['field'] = 'field_title_short';
  $handler->display->display_options['fields']['field_title_short']['label'] = 'Møde';
  $handler->display->display_options['fields']['field_title_short']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title_short']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_title_short']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_title_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_short']['empty'] = '[title]';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_date']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_location']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_location']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_committee']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_committee']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_committee']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name Short */
  $handler->display->display_options['fields']['field_name_short']['id'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['table'] = 'field_data_field_name_short';
  $handler->display->display_options['fields']['field_name_short']['field'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['relationship'] = 'field_committee_tid';
  $handler->display->display_options['fields']['field_name_short']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_name_short']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_name_short']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_name_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_short']['empty'] = '[field_committee]';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date -  start date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Fra dato:';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'from_date';
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator_id'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['label'] = 'Til dato:';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['operator'] = 'field_date_value_1_op';
  $handler->display->display_options['filters']['field_date_value_1']['expose']['identifier'] = 'to_date';
  $handler->display->display_options['filters']['field_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now + 30 day';
  $handler->display->display_options['filters']['field_date_value_1']['year_range'] = '-1:+0';
  /* Filter criterion: Content: Committee (field_committee) */
  $handler->display->display_options['filters']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['filters']['field_committee_tid']['field'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_committee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['expose']['operator_id'] = 'field_committee_tid_op';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['label'] = 'Udvalg:';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['operator'] = 'field_committee_tid_op';
  $handler->display->display_options['filters']['field_committee_tid']['expose']['identifier'] = 'field_committee_tid';
  $handler->display->display_options['filters']['field_committee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_committee_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_committee_tid']['vocabulary'] = 'committee';
  /* Filter criterion: Content: Search meta data (field_meeting_search_meta_date) */
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['id'] = 'field_meeting_search_meta_date_value';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['table'] = 'field_data_field_meeting_search_meta_date';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['field'] = 'field_meeting_search_meta_date_value';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['operator_id'] = 'field_meeting_search_meta_date_value_op';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['label'] = 'Fritekst:';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['operator'] = 'field_meeting_search_meta_date_value_op';
  $handler->display->display_options['filters']['field_meeting_search_meta_date_value']['expose']['identifier'] = 'search_params';
  $handler->display->display_options['path'] = 'meetings-search';
  $translatables['meetings_search'] = array(
    t('Master'),
    t('Mødesøgning'),
    t('more'),
    t('Søg'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<div class="help-button" title="Her vises de møder der indeholdt møder, punkter eller bilag der matchede dine søgekriterier. Søgeresultatet vises på mødeniveau i listen."></div>'),
    t('Ingen møder er fundet'),
    t('term from field_committee'),
    t('Status'),
    t('meeting/[nid]'),
    t('&nbsp;'),
    t('PHP'),
    t('Møde'),
    t('[title]'),
    t('Dato'),
    t('Lokation'),
    t('Udvalg'),
    t('[field_committee]'),
    t('Date -  start date (field_date)'),
    t('Page'),
    t('Fra dato:'),
    t('Til dato:'),
    t('Udvalg:'),
    t('Fritekst:'),
  );
  $export['meetings_search'] = $view;

  $view = new view();
  $view->name = 'seneste_8_m_der_i_de_st_ende_politiske_udvalg_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Seneste 8 møder i de stående politiske udvalg:';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste 8 møder i de stående politiske udvalg';
  $handler->display->display_options['css_class'] = 'front-page-content-block';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_meeting_status' => 'field_meeting_status',
    'php_1' => 'field_title_short',
    'php' => 'field_title_short',
    'title' => 'title',
    'field_meeting_abbr' => 'field_meeting_abbr',
    'field_date' => 'field_date',
    'field_location' => 'field_location',
    'field_committee' => 'field_committee',
    'field_title_short' => 'field_title_short',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meeting_abbr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title_short' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Her vises de seneste 8 møder i de stående politiske udvalg. Der er ikke et referat tilgængeligt før status er angivet til publiceret."></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Content: Committee (field_committee) */
  $handler->display->display_options['relationships']['field_committee_tid']['id'] = 'field_committee_tid';
  $handler->display->display_options['relationships']['field_committee_tid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['relationships']['field_committee_tid']['field'] = 'field_committee_tid';
  /* Relationship: Taxonomy term: User using Is part of Committee */
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['id'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['field'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['relationship'] = 'field_committee_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_meeting_status']['id'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['table'] = 'field_data_field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['field'] = 'field_meeting_status';
  $handler->display->display_options['fields']['field_meeting_status']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_status']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_meeting_status']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_meeting_status']['hide_alter_empty'] = FALSE;
  /* Field: indicator - has speaker paper */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'indicator - has speaker paper';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if (os2dagsorden_access_helper_meeting_has_speaker_paper($row->nid)){
print "<div class=\\"indicator-has-speaker-paper\\"></div>";
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: indicator - has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - has notes';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = os2dagsorden_annotator_get_notes_by_meeting_id($row->nid);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short title */
  $handler->display->display_options['fields']['field_title_short']['id'] = 'field_title_short';
  $handler->display->display_options['fields']['field_title_short']['table'] = 'field_data_field_title_short';
  $handler->display->display_options['fields']['field_title_short']['field'] = 'field_title_short';
  $handler->display->display_options['fields']['field_title_short']['label'] = 'Møde';
  $handler->display->display_options['fields']['field_title_short']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title_short']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_title_short']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_title_short']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_title_short']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_title_short']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_short']['empty'] = '[title]';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_date']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Lokation */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_location']['alter']['max_length'] = '15';
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_location']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_committee']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_committee']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name Short */
  $handler->display->display_options['fields']['field_name_short']['id'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['table'] = 'field_data_field_name_short';
  $handler->display->display_options['fields']['field_name_short']['field'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['relationship'] = 'field_committee_tid';
  $handler->display->display_options['fields']['field_name_short']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_name_short']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_name_short']['alter']['path'] = 'meeting/[nid]';
  $handler->display->display_options['fields']['field_name_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_short']['empty'] = '[field_committee]';
  $handler->display->display_options['fields']['field_name_short']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_name_short']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['seneste_8_m_der_i_de_st_ende_politiske_udvalg_'] = array(
    t('Master'),
    t('Seneste 8 møder i de stående politiske udvalg'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="help-button" title="Her vises de seneste 8 møder i de stående politiske udvalg. Der er ikke et referat tilgængeligt før status er angivet til publiceret."></div>'),
    t('term from field_committee'),
    t('field_user_committee'),
    t('Status'),
    t('meeting/[nid]'),
    t('&nbsp;'),
    t('PHP'),
    t('Møde'),
    t('[title]'),
    t('Dato'),
    t('Lokation'),
    t('Udvalg'),
    t('[field_committee]'),
    t('Block'),
  );
  $export['seneste_8_m_der_i_de_st_ende_politiske_udvalg_'] = $view;

  $view = new view();
  $view->name = 'speaking_paper';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Speaking paper (bullet point details)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dagsordenspunkt';
  $handler->display->display_options['access']['type'] = 'php';
  $handler->display->display_options['access']['php_access'] = '$q = explode("/", $_GET[\'q\']);

$meeting_id =  $q[1];
$bullet_point_id = $q[3];

return os2dagsorden_access_helper_check_user_can_see_bullet_point($meeting_id, $bullet_point_id);';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  /* Header: breadcrumb override */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'breadcrumb override';
  $handler->display->display_options['header']['php']['empty'] = FALSE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
global $base_url;
$q = explode(\'/\',$_GET[\'q\']);
$breadcrumb[] = l(\'Hjem\', $base_url);
$breadcrumb[] .= l(\'Mødedetaljer\', \'meeting/\'.$q[1]);
$breadcrumb[] .= \'<span class="breadcrumb-active">Dagsordenspunkt</span>\';
drupal_set_breadcrumb($breadcrumb);
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<?php
global $base_url;
$q = $_GET[\'q\'];
print "<a href=\\"".$base_url."?q=node/add/speaker-paper&edit[field_ref_bullet_point][und]=!1&destination=".$q."\\">Opret et nye talepapir</a>";
?>
';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['id'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_bullet_point_node']['field'] = 'reverse_field_ref_bullet_point_node';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'speaker paper creator';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Ref Attachment */
  $handler->display->display_options['fields']['field_ref_attachment']['id'] = 'field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['table'] = 'field_data_field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['field'] = 'field_ref_attachment';
  $handler->display->display_options['fields']['field_ref_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_ref_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_attachment']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_ref_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_attachment']['multi_type'] = 'ul';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_ref_speaker_paper_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_ref_speaker_paper_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid_1']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bullet_point' => 'bullet_point',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'php_1' => 'php_1',
    'nid_1' => 'nid_1',
    'field_bul_point_closed' => 'title',
    'title' => 'title',
    'php' => 'title',
    'body' => 'title',
    'field_ref_attachment' => 'title',
    'php_2' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bul_point_closed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ref_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: bullet point id */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'bullet point id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: closed indicator */
  $handler->display->display_options['fields']['field_bul_point_closed']['id'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['table'] = 'field_data_field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['field'] = 'field_bul_point_closed';
  $handler->display->display_options['fields']['field_bul_point_closed']['ui_name'] = 'closed indicator';
  $handler->display->display_options['fields']['field_bul_point_closed']['label'] = '';
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['alter']['text'] = '<div class="indicator-unlocked"></div>';
  $handler->display->display_options['fields']['field_bul_point_closed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bul_point_closed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bul_point_closed']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'view-header';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: indicator - bullet point has notes */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'indicator - bullet point has notes';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$annotations = os2dagsorden_annotator_get_notes_by_bullet_point_id($row->nid_1);
if (!empty($annotations))
print("<div class=\\"indicator-has-notes\\"></div>");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: attachments and attachments&#039; content */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'attachments and attachments\' content';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$q = explode(\'/\',$_GET[\'q\']);
$meeting_id = $q[\'1\'];

global $base_url;
$bullet_point = node_load($row->nid_1);
if (isset($bullet_point->field_ref_attachment[\'und\'])){
  print \'<div class="item-list item-list-dagsordenspunkt">\';
  print \'<ul>\';
  //if ($bullet_point->field_bul_point_closed[\'und\'][0][\'value\'] == 1){
  //  print "<i>Dagsorden punktets indhold er skjult fordi dagsorden punktet er lukket.<br/> For at indhold skal kommet fram skal der klikkes på dagsorden\'s punktets overskrift.</i>";
  //}
  //else {
    foreach($bullet_point->field_ref_attachment[\'und\'] as $attachment_id){
      print \'<li>\';
      $attachment = node_load($attachment_id[\'target_id\']);
      if (strlen($attachment->title) < 75)
	$title = $attachment->title;
      else 
	$title = substr($attachment->title, 0, 75).\'...\';
      $link = $base_url.\'?q=meeting/\'.$meeting_id.\'/bullet-point/\'.$row->nid_1.\'/bullet-point-attachment/\'.$attachment->nid;
      print \'<div id="\'.$attachment->nid.\'" class="indicator-has-no-notes"></div><a href="\'.$link.\'" class="first-child last-child">\'.$title.\'</a>\';

      //attachment text - if any
      if (!empty($attachment->field_bpa_body[\'und\'][0][\'safe_value\'])){
	print \'<div class="attachment_text_container">\';

	//if is bilag - have the preview/trimmed content
	if (!empty($attachment->field_bpa_file[\'und\'])){
	  print \'<div class="attachment_text_trimmed_container">\';
          print os2dagsorden_access_helper_smart_truncate($attachment->field_bpa_body[\'und\'][0][\'safe_value\'], 300, \'...\', true, true);
	  print \'</div>\';
	  print(\'<a class="first-child last-child" href="\'.$link.\'">Læs mere...</a>\');
	}
	else { //if not bilag just print the content
	  print \'<div class="attachment_text_full_container">\';
	  print($attachment->field_bpa_body[\'und\'][0][\'safe_value\']);
	  print \'</div>\';
	}

	print \'</div>\';
      }
      print \'</li>\';
    }
  //}
  print \'</ul>\';
  print \'</div>\';
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bullet_point' => 'bullet_point',
  );
  $handler->display->display_options['path'] = 'meeting/%/bullet-point/%';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'talepapir - [title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '#';
  $handler->display->display_options['fields']['title_1']['alter']['prefix'] = 'Talepapir -';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'view-header';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['relationship'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_ref_bullet_point_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['speaking_paper'] = array(
    t('Master'),
    t('Dagsordenspunkt'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<?php
global $base_url;
$q = $_GET[\'q\'];
print "<a href=\"".$base_url."?q=node/add/speaker-paper&edit[field_ref_bullet_point][und]=!1&destination=".$q."\">Opret et nye talepapir</a>";
?>
'),
    t('Content referencing Content from field_ref_bullet_point'),
    t('speaker paper creator'),
    t('All'),
    t('Page'),
    t('<div class="indicator-unlocked"></div>'),
    t('Attachment'),
    t('talepapir - [title_1]'),
    t('#'),
    t('Talepapir -'),
  );
  $export['speaking_paper'] = $view;

  return $export;
}
