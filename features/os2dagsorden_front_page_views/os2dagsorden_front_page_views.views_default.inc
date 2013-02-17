<?php
/**
 * @file
 * os2dagsorden_front_page_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2dagsorden_front_page_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_committee';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'User Committee';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Medlem af';
  $handler->display->display_options['css_class'] = 'front-page-info-block';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Her kan du se de udvalg du er medlem af. Ret henvendelse til Direktionssekretariatet hvis du mener det skal ændres."></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Taxonomy term: User using Is part of Committee */
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['id'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_user_committee_user']['field'] = 'reverse_field_user_committee_user';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name Short */
  $handler->display->display_options['fields']['field_name_short']['id'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['table'] = 'field_data_field_name_short';
  $handler->display->display_options['fields']['field_name_short']['field'] = 'field_name_short';
  $handler->display->display_options['fields']['field_name_short']['label'] = '';
  $handler->display->display_options['fields']['field_name_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name_short']['empty'] = '[name]';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'reverse_field_user_committee_user';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['user_committee'] = array(
    t('Master'),
    t('Medlem af'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<div class="help-button" title="Her kan du se de udvalg du er medlem af. Ret henvendelse til Direktionssekretariatet hvis du mener det skal ændres."></div>'),
    t('field_user_committee'),
    t('[name]'),
    t('Block'),
  );
  $export['user_committee'] = $view;

  $view = new view();
  $view->name = 'user_follow_committees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'User follow committees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jeg følger';
  $handler->display->display_options['css_class'] = 'front-page-info-block';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'field_name_short' => 'field_name_short',
    'php' => 'php',
  );
  /* Header: help text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'help text';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="help-button" title="Her kan du se de udvalg du er sat op til at følge. Følger betyder at du kun kan se åbne punkter og Følger+ betyder at du også kan se lukkede punkter. Ret henvendelse til Direktionssekretariatet hvis du mener det skal ændres."></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = FALSE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
global $user;
$full_user = user_load($user->uid);
if (isset($full_user->field_follows_committee_plus[\'und\'])){
  foreach ($full_user->field_follows_committee_plus[\'und\'] as $com){
    $com_term = taxonomy_term_load($com[\'tid\']);
    if (isset($com_term->field_name_short))
      print($com_term->field_name_short[\'und\'][0][\'value\']);
    else
      print($com_term->name);
    
    print(\'<b>+</b><br/>\');
  }
}
if (isset($full_user->field_follows_committee[\'und\'])){
  foreach ($full_user->field_follows_committee[\'und\'] as $com){
    $com_term = taxonomy_term_load($com[\'tid\']);
    if (isset($com_term->field_name_short))
      print($com_term->field_name_short[\'und\'][0][\'value\']);
    else
      print($com_term->name);

    print(\'<br/>\');
  }
}

?>';
  /* Field: Prints Follows+ committees with a plus sign, prints follows committees */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Prints Follows+ committees with a plus sign, prints follows committees';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$full_user = user_load($user->uid);
if (isset($full_user->field_follows_committee_plus[\'und\'])){
  foreach ($full_user->field_follows_committee_plus[\'und\'] as $com){
    $com_term = taxonomy_term_load($com[\'tid\']);
    if (isset($com_term->field_name_short))
      print($com_term->field_name_short[\'und\'][0][\'value\']);
    else
      print($com_term->name);
    
    print(\'<b>+</b><br/>\');
  }
}

if (isset($full_user->field_follows_committee[\'und\'])){
  foreach ($full_user->field_follows_committee[\'und\'] as $com){
    $com_term = taxonomy_term_load($com[\'tid\']);
    if (isset($com_term->field_name_short))
      print($com_term->field_name_short[\'und\'][0][\'value\']);
    else
      print($com_term->name);

    print(\'<br/>\');
  }
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['user_follow_committees'] = array(
    t('Master'),
    t('Jeg følger'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<div class="help-button" title="Her kan du se de udvalg du er sat op til at følge. Følger betyder at du kun kan se åbne punkter og Følger+ betyder at du også kan se lukkede punkter. Ret henvendelse til Direktionssekretariatet hvis du mener det skal ændres."></div>'),
    t('Block'),
  );
  $export['user_follow_committees'] = $view;

  $view = new view();
  $view->name = 'user_logout_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User logout menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'user-logout-block';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_full_name' => 'field_user_full_name',
    'php' => 'php',
    'uid' => 'uid',
    'nothing' => 'nothing',
  );
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_user_full_name']['id'] = 'field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['table'] = 'field_data_field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['field'] = 'field_user_full_name';
  $handler->display->display_options['fields']['field_user_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_full_name']['element_class'] = 'user-logout-textbox';
  $handler->display->display_options['fields']['field_user_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_full_name']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_user_full_name']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: User position - with highest priority */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'User position - with highest priority';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_class'] = 'user-logout-textbox';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$users = entity_load(\'user\', array($user->uid));
$full_user = $users[$user->uid];

if (isset($full_user->field_user_positions[\'und\'])){
$tids = array();
foreach ($full_user->field_user_positions[\'und\'] as $item){
$tids[] = $item[\'tid\'];
}
$terms = entity_load(\'taxonomy_term\', $tids, array());
$min = $terms[$tids[0]];

foreach ($terms as $term){
  if ($term->field_priority[\'und\'][0][\'value\'] <  $min->field_priority[\'und\'][0][\'value\'])
    $min = $term;
}
print $min->name;
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Log af';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['path'] = 'user/logout';
  $handler->display->display_options['fields']['uid']['element_class'] = 'user-logout-btn';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Log out button */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Log out button';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Log af';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/logout';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'user-logout-btn button';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['user_logout_menu'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Log af'),
    t('user/logout'),
    t('Block'),
  );
  $export['user_logout_menu'] = $view;

  return $export;
}
