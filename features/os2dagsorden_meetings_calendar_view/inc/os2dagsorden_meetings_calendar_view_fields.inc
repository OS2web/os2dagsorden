<?php
/**
 * @file
 * Code for the OS2Web Calendar views - Events view.
 */
 
/////////////////////////////////////////header START /////////////////////////////////////////
function os2dagsorden_meetings_calendar_view_breadcrumb(){
  global $base_url;
  $q = explode('/',$_GET['q']);
  $breadcrumb[] = l('Hjem', $base_url);
  $breadcrumb[] .= '<span class="breadcrumb-active">Kalender</span>';
  drupal_set_breadcrumb($breadcrumb);
}
/////////////////////////////////////////header END /////////////////////////////////////////

/////////////////////////////////////////common START /////////////////////////////////////////
function os2dagsorden_meetings_calendar_view_fields_title($data){
  $title = '';
  if (isset($data->_field_data['nid']['entity']->field_title_short['und']))
    $title = $data->_field_data['nid']['entity']->field_title_short['und'][0]['value'];
  else 
    $title = $data->_field_data['nid']['entity']->title;

  $meeting_category = substr(strtoupper($data->_field_data['nid']['entity']->field_meeting_category['und'][0]['value']), 0, 1);

  echo '<font color="' . $data->_field_data['nid']['entity']->field_hex['und'][0]['value'] . '">' . '['. $meeting_category . '] ' . $title . '</font>';
}

function os2dagsorden_meetings_calendar_view_fields_filter_by_meeting_category($meeting_id){
  $user_loaded = os2dagsorden_access_helper_get_user();

  $meeting = node_load($meeting_id);
  $meeting_category = $meeting->field_meeting_category['und'][0]['value'];
  if (isset($user_loaded->field_user_meetings_category['und'])) {
    foreach ($user_loaded->field_user_meetings_category['und'] as $user_category){
      if (strcasecmp($user_category['value'], $meeting_category) == 0){
	return FALSE;
      }
    }
  }
  return TRUE;
}
/////////////////////////////////////////common END /////////////////////////////////////////

/////////////////////////////////////////month START /////////////////////////////////////////

function os2dagsorden_meetings_calendar_view_fields_month_date_contextual_filter(){
  $q = $_GET['q'];

  if (strlen($q) > strlen('calendar-field-date/month/'))
    return substr($q, strrpos($q,'month/')+6, 7);
  else 
    return date('Y-m');
}
/////////////////////////////////////////month END /////////////////////////////////////////

/////////////////////////////////////////day START/////////////////////////////////////////
function os2dagsorden_meetings_calendar_view_fields_day_date_contextual_filter(){
  $q = $_GET['q'];

  if (strlen($q) > strlen('calendar-field-date/day/'))
    return substr($q, strrpos($q,'day/')+4, 10);
  else 
    return date('Y-m-d');
}
/////////////////////////////////////////day END /////////////////////////////////////////

/////////////////////////////////////////block START/////////////////////////////////////////
function os2dagsorden_meetings_calendar_view_fields_block_date_contextual_filter(){
  $q = $_GET['q'];

  if (strrpos($q, 'calendar-field-date/day/') > -1 && strlen($q) > strlen('calendar-field-date/day/'))
    return substr($q, strrpos($q,'day/')+4, 7);
  else 
    return date('Y-m');
}

function os2dagsorden_meetings_calendar_view_block_help_text(){
  print '<div class="help-button" title="Her findes en dags- eller månedskalender med links 
    til dagsordner og referater hvis de er publicerede. Det er muligt at eksportere møderne til en fil, 
    som så kan importeres til egen kalender, eks. i Outlook."></div>';
}
/////////////////////////////////////////block END /////////////////////////////////////////