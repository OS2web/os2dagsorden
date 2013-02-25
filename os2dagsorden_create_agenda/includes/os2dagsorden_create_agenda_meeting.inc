<?php

/**
 * os2dagsorden_create_agenda
 *
 * PHP version 5
 *
 * @category OS2Dagsorden
 * @package  Os2dagsorden_Create_Agenda
 * @author   Stanislav Kutasevits <stan@bellcom.dk>
 * @license  http://www.gnu.org/licenses/gpl-2.0.html GNU General Public License, version 2
 * @link     http://bellcom.dk
 */

function os2dagsorden_create_agenda_meeting($form, $form_state, $meeting_id) {
  if (!empty($form_state['page_num']) && $form_state['page_num'] == 2) {
    return os2dagsorden_create_agenda_bullet_point($form, $form_state, $bullet_point_id);
  } else if (!empty($form_state['page_num']) && $form_state['page_num'] == 3) {
    return os2dagsorden_create_agenda_bpa($form, $form_state);
  } 
  $form_state['page_num'] = 1;
  
  $form[] = array(
    '#markup' => '<h1 class="title">' . t('Meeting') . '</h1>',
  );
  $form[] = array(
    '#markup' => '<div class="node">',
  );

  $form['title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Title:'), 
    '#size' => 60, 
    '#maxlength' => 128, 
    '#required' => TRUE,
    '#description' => 'Full title of the meeting',
  );
  
  $form['short_title'] = array(
    '#type' => 'textfield', 
    '#title' => t('Short title:'), 
    '#size' => 40, 
    '#maxlength' => 35, 
    '#required' => TRUE,
    '#description' => 'Maximum 35 characters. <br/>Short title will be used in places with limited contatiner width, e.g, front page views',
  );
  $form['status'] = array(
    '#type' => 'select',
    '#title' => t('Status:'), 
    '#required' => TRUE,
    '#options' => array(
	'Planlagt' => t('Planlagt'),
	'Ændret' => t('Ændret'),
	'Aflyst' => t('Aflyst'),
	'Referat' => t('Referat'),
	'Dagsorden' => t('Dagsorden'),
    ),
    '#multiple' => FALSE,
  );
  $form['hex_color'] = array(
    '#type' => 'textfield', 
    '#field_prefix' => '#',
    '#title' => t('HEX color code:'), 
    '#size' => 5, 
    '#maxlength' => 6, 
    '#required' => FALSE,
    '#description' => 'Maximum six characters. <br/>Will be used for changing the color of the meeting title. E.g., FF0000 - for red',
  );
  $form[] = array(
    '#markup' => '<div class="clearfix">',
  );
  $form['start_date'] = array(
    '#type' => 'date_popup',
    '#title' => t('Start Date:'), 
    '#size' => 10, 
    '#required' => TRUE,
    '#date_format' => 'd/m/Y H:i',
  );
  $form['end_date'] = array(
    '#type' => 'date_popup',
    '#title' => t('End Date:'), 
    '#size' => 10, 
    '#required' => FALSE,
    '#date_format' => 'd/m/Y H:i',
  );
  $form[] = array(
    '#markup' => '</div>',
  );
  
  $loc_voc = taxonomy_vocabulary_machine_name_load('lokation');
  $loc_terms = taxonomy_get_tree($loc_voc->vid);
  $loc_select = array();
  foreach ($loc_terms as $loc_term) {
    $loc_select[$loc_term->tid] = $loc_term->name;
  }
  $form['location'] = array(
    '#type' => 'select',
    '#title' => t('Location:'), 
    '#required' => FALSE,
    '#options' => $loc_select,
    '#multiple' => FALSE,
    '#empty_value' => 0,
  );
  
  $com_voc = taxonomy_vocabulary_machine_name_load('committee');
  $com_terms = taxonomy_get_tree($com_voc->vid);
  $com_select = array();
  foreach ($com_terms as $com_term) {
    $com_select[$com_term->tid] = $com_term->name;
  }
  $form['committee'] = array(
    '#type' => 'select',
    '#title' => t('Committee:'), 
    '#required' => TRUE,
    '#options' => $com_select,
    '#multiple' => FALSE,
  );
  
  $form['participants'] = array(
    '#title' => t('Participants'),
    '#type' => 'textarea',
    '#rows' => 2,
  );
  $form['description_opened'] = array(
    '#title' => t('Description opened:'),
    '#type' => 'managed_file',
    '#description' => 'Files must be less than <b>2 MB</b>.<br/>Allowed file types: <b>doc docx pdf</b>.',
    '#upload_validators' => array(
      'file_validate_extensions' => array('doc docx pdf'),
      // Pass the maximum file size in bytes
      'file_validate_size' => array(2*1024*1024*1024),//2 MB
    ),
  );
  $form['description_closed'] = array(
    '#title' => t('Description closed:'),
    '#type' => 'managed_file',
    '#description' => 'Files must be less than <b>2 MB</b>.<br/>Allowed file types: <b>doc docx pdf</b>.',
    '#upload_validators' => array(
      'file_validate_extensions' => array('doc docx pdf'),
      // Pass the maximum file size in bytes
      'file_validate_size' => array(2*1024*1024*1024),//2 MB
    ),
  );
  
  $form['agenda'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Agenda'), 
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,
  );
  
  //filling the fields if meeting_id is not empty
  if (!$meeting_id)
    $meeting_id = $form_state['meeting_id'];//if meeting id is empty, try to fill it with form_state meeting_id value
    
  if ($meeting_id) {
    $form_state['meeting_id'] = $meeting_id;//saving for usage in the submit function
    
    $node = node_load($meeting_id);
    $form['title']['#default_value'] = $node->title;
    
    if (field_get_items('node', $node, 'field_title_short')){
      $short_title_field = array_pop(field_get_items('node', $node, 'field_title_short'));
      $form['short_title']['#default_value'] = $short_title_field['safe_value'];
    }
    
    $status_field = array_pop(field_get_items('node', $node, 'field_meeting_status'));
    $form['status']['#default_value'] = $status_field['safe_value'];
    
    if (field_get_items('node', $node, 'field_hex')){
      $hex_field = array_pop(field_get_items('node', $node, 'field_hex'));
      $form['hex_color']['#default_value'] = $hex_field['safe_value'];
    }
    
    $date_field = array_pop(field_get_items('node', $node, 'field_date'));
    $form['start_date']['#default_value'] = $date_field['value'];
    if ($date_field['value2'] != $date_field['value'])
      $form['end_date']['#default_value'] = $date_field['value2'];
    
    $location_field = array_pop(field_get_items('node', $node, 'field_location'));
    $form['location']['#default_value'] = $location_field['tid'];
    
    $committee_field = array_pop(field_get_items('node', $node, 'field_committee'));
    $form['committee']['#default_value'] = $committee_field['tid'];
    
    $participants_field = array_pop(field_get_items('node', $node, 'field_meeting_participants'));
    $form['participants']['#default_value'] = $participants_field['safe_value'];
    
    if (field_get_items('node', $node, 'field_meeting_description')){
      $description_opened_field = array_pop(field_get_items('node', $node, 'field_meeting_description'));
      $form['description_opened']['#default_value'] = $description_opened_field['fid'];
    }
    
    if (field_get_items('node', $node, 'field_meeting_description_closed')){
      $description_closed_field = array_pop(field_get_items('node', $node, 'field_meeting_description_closed'));
      $form['description_closed']['#default_value'] = $description_closed_field['fid'];
    }
    
    if (field_get_items('node', $node, 'field_ref_bullet_points')){
      $bullet_points = field_get_items('node', $node, 'field_ref_bullet_points');
      foreach($bullet_points as $bp){
	$bp = node_load($bp['target_id']);
	$form['agenda'][] = array(
	  '#markup' => '<div id="fsdfsdfdsfdsfsdfds" class="create-agenda-list-item">',
	);	
	$form['agenda'][] = array(
	  '#markup' => '<span class="create-agenda-edit-delete-container">',
	);
	$form['agenda'][] = array(
	  '#type' => 'image_button',
	  '#button_type' => 'submit-edit',
	  '#src' => drupal_get_path('theme', 'syddjurs_omega_subtheme') . '/img/icon_edit.png',
	  '#name' => 'edit_' . $bp->nid,
	  '#submit' => array('os2dagsorden_create_agenda_meeting_submit_add_edit_bullet_point'),
	  '#bp_nid' => $bp->nid,
	);
	$form['agenda'][] = array(
	  '#type' => 'image_button',
	  '#button_type' => 'submit-delete',
	  '#src' => drupal_get_path('theme', 'syddjurs_omega_subtheme') . '/img/icon_delete.png',
	  '#name' => 'delete_' . $bp->nid,
	  '#submit' => array('os2dagsorden_create_agenda_meeting_submit_delete_bullet_point'),
	  '#bp_nid' => $bp->nid,
	  '#ajax' => array(
	    'callback' => 'os2dagsorden_create_agenda_bullet_point_delete_ajax',
	    'wrapper' => 'edit-agenda',
	    'method' => 'replace',
	    'effect' => 'fade',
	  ),
	);
	
	$form['agenda'][] = array(
	  '#markup' => '</span>',//'<span class="create-agenda-edit-delete-container">',
	);
	
	$form['agenda'][] = array(
	  '#markup' => '<span class="create-agenda-privacy-container">',
	);
	$closed_field = array_pop(field_get_items('node', $bp, 'field_bul_point_closed'));
	if ($closed_field['value'])
	  $form['agenda'][] = array(
	    '#markup' => '<span class="indicator-form-unlocked"></span>',
	  );
	else
	  $form['agenda'][] = array(
	    '#markup' => '<span class="indicator-form-empty"></span>',
	  );
	
	$personal_field = array_pop(field_get_items('node', $bp, 'field_bul_point_personal'));
	if ($personal_field['value'])
	  $form['agenda'][] = array(
	    '#markup' => '<span class="indicator-form-personal"></span>',
	  );
	else
	  $form['agenda'][] = array(
	    '#markup' => '<span class="indicator-form-empty"></span>',
	  );
	  
	$form['agenda'][] = array(
	  '#markup' => '</span>',//'<span class="create-agenda-privacy-container">',
	);
	
	$form['agenda'][] = array(
	  '#markup' => $bp->title,
	);
	$form['agenda'][] = array(
	  '#markup' => '</div>',//'<div class="create-agenda-list-item">',
	);
      }
    }
  }
  
  //finishing form
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'os2dagsorden_create_agenda') . '/css/form_theme.css',
  );
  $form['#attached']['js'] = array(
    drupal_get_path('module', 'os2dagsorden_create_agenda') . '/js/form_js.js',
  );
  
  $form['save_meeting'] = array(
    '#type' => 'submit',
    '#attributes' => array(
      'class' => array('form-save-submit'),
    ),
    '#value' => t('Save meeting'),
    '#submit' => array('os2dagsorden_create_agenda_meeting_submit'),
  );
  $form[] = array(
    '#markup' => '&nbsp;',
  );
  $form['save_meeting_and_add_bullet_point'] = array(
    '#type' => 'submit', 
    '#attributes' => array(
      'class' => array('form-add-submit'),
    ),
    '#value' => t('Save & Add bullet point'),
    '#submit' => array('os2dagsorden_create_agenda_meeting_submit_add_edit_bullet_point'),
  );
  $form[] = array(
    '#markup' => '</div>',
  );
  
  return $form;
}

function os2dagsorden_create_agenda_bullet_point_delete_ajax($form, $form_state) {
  return $form['agenda'];
}

function os2dagsorden_create_agenda_save_meeting($form, &$form_state){
  $input = $form_state['input'];
  
  //input extraction
  $title = $input['title'];
  $short_title = $input['short_title'];
  $status = $input['status'];
  $hex_color = $input['hex_color'];
  $start_date = $input['start_date']['date'];
  $start_time = $input['start_date']['time'];
  $end_date = $input['end_date']['date'];
  $end_time = $input['end_date']['time'];
  $loc_tid = $input['location'];
  $com_tid = $input['committee'];
  $participants = $input['participants'];
  //file extraction
  $description_opened = $form_state['values']['description_opened'];
  $description_closed = $form_state['values']['description_closed'];
  
  if (!$form_state['meeting_id']){
    //node creating
    $node = new stdClass();
    $node->type = "meeting";
    $node->language = LANGUAGE_NONE;
    node_object_prepare($node);    
  } else {
    $node = node_load($form_state['meeting_id']);
  }
  
  //node population
  $node->title = $title;
  $node->field_title_short['und'][0]['value'] = $short_title;
  $node->field_meeting_status['und'][0]['value'] = $status;
  $start_datetime = date_create_from_format("d/m/Y H:i", $start_date . ' ' . $start_time);
  $node->field_date['und'][0]['value'] = $start_datetime->format('Y-m-d H:i:s');
  $node->field_committee['und'][0]['tid'] = $com_tid;
  
  
  $node->field_hex['und'][0]['value'] = $hex_color;
  
  if (!empty($end_date)){
    $end_datetime = date_create_from_format("d/m/Y H:i", $end_date . ' ' . $end_time);
    $node->field_date['und'][0]['value2'] = $end_datetime->format('Y-m-d H:i:s');
  } else {//same as start date - default
    $node->field_date['und'][0]['value2'] = $start_datetime->format('Y-m-d H:i:s');
  }
  
  $node->field_location['und'][0]['tid'] = $loc_tid;
  
  $node->field_meeting_participants['und'][0]['value'] = $participants;  
 
  if($description_opened != 0){
    //resaving file permanently
    $description_opened = file_load($description_opened);
    $description_opened->status = FILE_STATUS_PERMANENT;
    $description_opened->display = 1;
    file_save($description_opened);

    $node->field_meeting_description['und'][0] = (array) $description_opened;
  } else {
    if (field_get_items('node', $node, 'field_meeting_description')){
      $description_opened_field = array_pop(field_get_items('node', $node, 'field_meeting_description'));
      $to_del_file = file_load($description_opened_field['fid']); 
      unset($node->field_meeting_description['und']);
      file_delete($to_del_file);
    }
  }
  
  if($description_closed != 0){
    //resaving file permanently
    $description_closed = file_load($description_closed);
    $description_closed->status = FILE_STATUS_PERMANENT;
    $description_closed->display = 1;
    file_save($description_closed);
    
    $node->field_meeting_description_closed['und'][0] = (array) $description_closed;
  } else {
    if (field_get_items('node', $node, 'field_meeting_description_closed')){
      $description_closed_field = array_pop(field_get_items('node', $node, 'field_meeting_description_closed'));
      $to_del_file = file_load($description_closed_field['fid']); 
      unset($node->field_meeting_description_closed['und']);
      file_delete($to_del_file);
    }
  }
  
  $node = os2dagsorden_access_helper_set_meeting_status_and_save($node, $status);
  
  return $node;
}

function os2dagsorden_create_agenda_meeting_submit($form, &$form_state) {  
  $node = os2dagsorden_create_agenda_save_meeting($form, $form_state);
  $start_date = $form_state['input']['start_date']['date'];
  $start_date = date_create_from_format("d/m/Y", $start_date);
  
  $form_state['redirect'] = 'calendar-field-date/month/' . $start_date->format('Y') . '-' . $start_date->format('m');
}

function os2dagsorden_create_agenda_meeting_submit_add_edit_bullet_point($form, &$form_state) {
  $node = os2dagsorden_create_agenda_save_meeting($form, $form_state);
  
  $form_state['meeting_id'] = $node->nid;
  //if empty - will be treated as new node creation
  $form_state['bullet_point_id'] = $form_state['triggering_element']['#bp_nid'];
  
  $form_state['page_num'] = 2;
  $form_state['rebuild'] = TRUE;
}

function os2dagsorden_create_agenda_meeting_submit_delete_bullet_point($form, &$form_state) {
  $node = os2dagsorden_create_agenda_save_meeting($form, $form_state);
  
  $bp_id = $form_state['triggering_element']['#bp_nid'];
  os2dagsorden_create_agenda_remove_bullet_point_from_meeting($node->nid, $bp_id);
  
  node_delete($bp_id);
  
  $form_state['page_num'] = 1;
  $form_state['rebuild'] = TRUE;
}

function os2dagsorden_create_agenda_remove_bullet_point_from_meeting($meeting_id, $bullet_point_id){
  $meeting = node_load($meeting_id);
  if (field_get_items('node', $meeting, 'field_ref_bullet_points')){
    $bullet_points = field_get_items('node', $meeting, 'field_ref_bullet_points');
    foreach($bullet_points as $key => $bp){
      if ($bp['target_id'] == $bullet_point_id){
	unset($meeting->field_ref_bullet_points['und'][$key]);
      }
    }
  }
  
  $meeting->field_ref_bullet_points['und'] = array_values($meeting->field_ref_bullet_points['und']);
  node_save($meeting);
}