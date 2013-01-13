<?php

/**
 * @file
 * This file implements the importing functions of the MM functionality and depends on a
 * plugin to do the actual filereads
 */

/**
 * Imports meeting metadata into a node.
 *
 * @param string $meeting_id
 *   Meeting id
 *
 * @return int
 *   Node id
 */
function _os2web_esdh_provider_import_meeting($meeting_id, $force = FALSE, &$context = NULL) {
  if (!lock_acquire(__FUNCTION__ . $meeting_id['id'])) {
    return;
  }
  $meetings = os2web_esdh_provider_invoke('mm', 'import_meeting', $meeting_id);
  $nids = array();
  foreach ($meetings as $meeting) {
    //trying to get meeting from id
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
        ->fieldCondition('field_meeting_id', 'value', $meeting['meeting_id'], '=');

    $result = $query->execute();
    if (isset($result['node'])) {
        $nids = array_keys($result['node']);
        $node = reset(entity_load('node', $nids));
    }
    else {//if fails, trying to get meeting from date and committe combination. Assuming this is unique
        //getting committee tid
        $vid = db_select('taxonomy_vocabulary', 'tv')->fields('tv', array('vid'))->condition('machine_name', 'committee')->execute()->fetchField();

        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'taxonomy_term')
            ->propertyCondition('vid', $vid)
            ->fieldCondition('field_committee_acadre_id', 'value', $meeting['committee_id'], '=');

        $result = $query->execute();
        if (isset($result['taxonomy_term'])) {
            $tids = array_keys($result['taxonomy_term']);
            $com_tid = reset($tids);
        }

        //getting meeting
        $meeting_start_date_0000 = date('Y-m-d 00:00:00', strtotime($meeting['meeting_date_start']));
        $meeting_start_date_2359 = date('Y-m-d 23:59:59', strtotime($meeting['meeting_date_start']));

        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
            ->fieldCondition('field_date', 'value', $meeting_start_date_0000, '>=')
            ->fieldCondition('field_date', 'value', $meeting_start_date_2359, '<=')
            ->fieldCondition('field_committee', 'tid', $com_tid, '=');
        $result = $query->execute();

        if (isset($result['node'])) {
            $nids = array_keys($result['node']);
            $node = reset(entity_load('node', $nids));
        }
        else {//if fails, creating a new meeting
            $node = new stdClass();
            $node->type = "meeting";
            $node->language = LANGUAGE_NONE;

            node_object_prepare($node);    
        }
    }
    //avoiding reimports
    if (isset($node->field_meeting_acadre_version[$node->language][0])) {
      $old_version = $node->field_meeting_acadre_version[$node->language][0]['value'];
      $new_version = $meeting['acadre_version'];
      if (strcmp($old_version,$new_version) >= 0){//meeting is of the same version, no need to proceed
	continue;
      }
    }
    
    $node->title = $meeting['title'];
    $node->field_meeting_acadre_version[$node->language][0]['value'] = $meeting['acadre_version'];//setting the acarde version of the meeting
    
    $node->field_date[LANGUAGE_NONE][0]['value'] = $meeting['meeting_date_start'];
    $node->field_date[LANGUAGE_NONE][0]['value2'] = $meeting['meeting_date_finish'];
    
    $node->field_meeting_status['und'][0]['value'] = 'Publiceret';
    
    // Proper id tagging.
    $node->field_meeting_id[LANGUAGE_NONE][0]['value'] = $meeting['meeting_id'];
    //$node->field_system_id[LANGUAGE_NONE][0]['value'] = $meeting['system_id'];
 
    $committee = _os2web_esdh_provider_find_committee($meeting['committee_id']);
    if ($committee) {
       $node->field_committee[LANGUAGE_NONE][0]['tid'] = $committee->tid;
    }
    else {
      return;
    }
    $location = _os2web_esdh_provider_find_create_location($meeting['location']);
    
    if ($location) {
       $node->field_location[LANGUAGE_NONE][0]['tid'] = $location->tid;
    }
    
    //Adding participants
    $part_names = array();
    $node->field_meeting_participants[$node->language][0]['value'] = implode(', ', $meeting['participants']);
     
    // Import items.
    if (is_array($meeting['items'])) {
      $item_nids = _os2web_esdh_provider_import_items($meeting['items']);
      foreach ($item_nids as $nid) {
        $node->field_ref_bullet_points[LANGUAGE_NONE][]['target_id'] = $nid;
      }
    }
    
    //adding description
    $description = _os2web_esdh_provider_import_file($meeting['full_doc']);
    
    if (strcmp($meeting['agenda_access'], 'Lukket') == 0) 
      $node->field_meeting_description_closed[$node->language][0] = (array) $description;
    else 
      $node->field_meeting_description[$node->language][0] = (array) $description;
     
    
    // Save the meeting node.
    node_submit($node);
    $node->created = $meeting['creation_date'];
    
    node_save($node);
    watchdog('ESDH', 'Imported agenda id: %aid (Meeting: %mid) into node %nid .', array(
      '%aid' => $meeting['system_id'],
      '%mid' => $meeting['meeting_id'],
      '%nid' => $node->nid), WATCHDOG_DEBUG);
    
    $nids[] = $node->nid;
    
    //schedule description for PDF convertion
    if (module_exists('os2dagsorden_adlib_api')) {
      os2dagsorden_adlib_api_convert_to_pdf($description_fid, $node->nid);
    }
    
  }
  lock_release(__FUNCTION__ . $meeting_id['id']);
  return $nids;
}

/**
 * Imports item metadata into nodes.
 * @access protected
 *
 * @param array $items
 *   List of items to import.
 *
 * @return array
 *   List of imported node ids
 */
function _os2web_esdh_provider_import_items($items) {
  $nids = array();
  foreach ($items as $item) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
        ->fieldCondition('field_bullet_point_id', 'value', $item['sysid'], '=');
    $result = $query->execute();
    
    if (isset($result['node'])) {
        $all_nids = array_keys($result['node']);
        $node = reset(entity_load('node', $all_nids));
    }
    else {
        $node = new stdClass();
        $node->type = "bullet_point";
        $node->language = LANGUAGE_NONE;
        node_object_prepare($node);

        $node->field_bullet_point_id[$node->language][0]['value'] = $item['sysid'];
    } 
    
    //check the name
    if (strcmp($item['agenda_type'], 'Tillægsreferat') != 0)
      $node->title = $item['title'] . ' (' . $item['caseno'] . ')';
    else
     $node->title = 'Tillægsdagsorden: ' . $item['title'] . ' (' . $item['caseno'] . ')';

    $node->field_bul_point_number['und'][0]['value'] = $item['id'];
 
    if ($item['access'] === 'Lukket') {
      $node->field_bul_point_closed[LANGUAGE_NONE][]['value'] = 1;
    } else {
      $node->field_bul_point_closed[LANGUAGE_NONE][]['value'] = 0;
    }
    
    // Gather the bullets for the item.
    if (isset($item['bullets']) && is_array($item['bullets'])) {
      $bullet_nids = _os2web_esdh_provider_import_bullets($item['bullets']);
      foreach ($bullet_nids as $nid) {
	$node->field_ref_attachment[LANGUAGE_NONE][]['target_id'] = $nid;
      }
    }
    else {
      $node->field_ref_attachment[LANGUAGE_NONE] = array();
    }
    
    // Gather enclosures.
    foreach ($item['enclosures'] as $enclosure) {
      if ($file = _os2web_esdh_provider_import_file($enclosure)) {
	$enclosure_nid = _os2web_esdh_provider_add_enclosure_bullet($enclosure, $file);
	
	$contains = FALSE;
	if (isset($enclosure_nid)){//if the ID is empty - means that the enclosure has been created before, and hence already added to the bullet point
	  if (isset($node->field_ref_attachment[LANGUAGE_NONE])) {
	      foreach ($node->field_ref_attachment[LANGUAGE_NONE] as $attachment) {
		  if ($attachment['target_id'] == $enclosure_nid) {
		      $contains = TRUE;
		      break;
		  }
	      }
	  }
	  if (!$contains)
            $node->field_ref_attachment[LANGUAGE_NONE][]['target_id'] = $enclosure_nid;
            
	  $filetype = $enclosure['filetype'];

	  //Adlib Conversion
	  if (module_exists('os2dagsorden_adlib_api')) {
	      drupal_load('module', 'os2dagsorden_adlib_api');

	      //if not PDF, schedule for pdf conversion as well
	      if (strcmp($filetype, ".PDF") != 0)
		  os2dagsorden_adlib_api_convert_to_pdf($file->fid, $enclosure_nid);
	  }
	  if (strcmp($filetype, ".PDF") == 0)//if is PDF, schedule for HTML conversion
		  os2dagsorden_pdf2htmlex_schedule($file->fid, $enclosure_nid);
	}        
      }
      else {
	watchdog('ESDH', 'There was an error importing file %uri ', array('%uri' => $enclosure['uri']), WATCHDOG_ERROR);
      }
    }
    
    node_submit($node);
    node_save($node);
    $nids[] = $node->nid;
  }
  return $nids;
}

/**
 * Imports bullet metadata into nodes.
 * @access protected
 *
 * @param array $bullets
 *   List of bullets
 *
 * @return array
 *   List of imported node ids
 */
function _os2web_esdh_provider_import_bullets($bullets) {
  $nids = array();
  foreach ($bullets as $bullet) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
	->fieldCondition('field_bpa_id', 'value', $bullet['sysid'], '=');

    $result = $query->execute();

    if (isset($result['node'])) {
	//node exists, avoiding recreation
	continue;
    }
    else {
	$node = new stdClass();
	$node->type = "bullet_point_attachment";
	$node->language = LANGUAGE_NONE;

	node_object_prepare($node);
	$node->field_bpa_id[$node->language][0]['value'] = $bullet['sysid'];
    }

    $node->title = $bullet['title'];

    // Let's add standard body field
    $content_ind_start = strpos($bullet['body'], '<div class=Section1>');

    $bullet['body'] = substr($bullet['body'], $content_ind_start);

    $node->field_bpa_body[$node->language][0]['value'] = $bullet['body'];
    $node->field_bpa_body[$node->language][0]['format'] = 'filtered_html'; // If field has a format, you need to define it. Here we define a default filtered_html format for a body field  

    node_submit($node);
    node_save($node);

    $nids[] = $node->nid;    
  }
  return $nids;
}

/**
 * Imports a file metadata into a managed drupal file.
 * @access protected
 *
 * @param array $file_meta
 *   File metadata
 *
 * @return object
 *   Drupal standard file object
 */
function _os2web_esdh_provider_import_file($file_meta) {
  $filename = $file_meta['title'];
  $uri = $file_meta['uri'];

  $fid = db_select('file_managed', 'fm')
		  ->fields('fm', array('fid'))
		  ->condition('uri', $uri)
		  ->execute()->fetchField();
  if ($fid) {
      $file = file_load($fid);
      $file->display = 1;
  }
  else {
      $file = new stdClass();
      $file->uri = $uri;
      $file->display = 1;
      $file->filename = drupal_basename($file->uri);
      $file->filemime = file_get_mimetype($file->uri);
      $file->uid = 1;
      $file->status = FILE_STATUS_PERMANENT;
      $file = file_save($file);
  }
  
  return $file;
}


/**
 * Creates an empty bullet point attachment node with file reference.
 * The file is eventually converted to HTML and the rendered output will be used as bullet point attachment body field.
 * The file is then converted to PDF (is the file extension is not PDF already)
 *
 * @param SimpleXMLElement $enclosure xml
 * @param stdClass         $file      file
 * 
 * @author Stanislav Kutasevits
 * 
 * @return int - Node ID
 */
function _os2web_esdh_provider_add_enclosure_bullet($enclosure, $file) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
            ->fieldCondition('field_bpa_id', 'value', $enclosure['sysid'], '=');

    $result = $query->execute();
    if (isset($result['node'])) {
	//node exists, avoiding recreation
	return;
    }
    else {
        $node = new stdClass();
        $node->type = "bullet_point_attachment";
        $node->language = LANGUAGE_NONE;

        node_object_prepare($node);
        $node->field_bpa_id[$node->language][0]['value'] = $enclosure['sysid'];
    }

    $node->title = 'Bilag: ' . $enclosure['title'];

    $node->field_bpa_file[$node->language][] = (array) $file;

    node_submit($node);
    node_save($node);

    return $node->nid;
}


/**
 * Returns the right committee term, but does not create one
 *
 * @param int $committee_acadre_id acadre id of the committee
 * @return term
 */
function _os2web_esdh_provider_find_committee($committee_acadre_id){
    $vid = db_select('taxonomy_vocabulary', 'tv')
        ->fields('tv', array('vid'))
        ->condition('machine_name', 'committee')
        ->execute()
        ->fetchField();

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'taxonomy_term')
        ->propertyCondition('vid', $vid)
        ->fieldCondition('field_committee_acadre_id', 'value', $committee_acadre_id, '=');

    $result = $query->execute();
    if (isset($result['taxonomy_term'])) {
        $tids = array_keys($result['taxonomy_term']);
        $term = taxonomy_term_load($tids[0]);

	return $term;
    }
    return NULL;
}

/**
 * Find the existing or creates a new location taxonomy tern
 *
 * @param $location_name name fo the location
 * 
 * @return location term
 */
function _os2web_esdh_provider_find_create_location($location_name) {
    $vid = db_select('taxonomy_vocabulary', 'tv')
        ->fields('tv', array('vid'))
        ->condition('machine_name', 'lokation')
        ->execute()
        ->fetchField();
        
    $terms = taxonomy_get_term_by_name($location_name, $vid);
    if ($terms){
	$term = array_pop($terms);
    }
    else {
	$term = new stdClass();
	$term->vid = $vid;
	$term->name = $location_name;
	taxonomy_term_save($term);
    }
    
    return $term;
}

/**
 * Page callback. Displays a technical overview of an imported meeting.
 */
function _os2web_esdh_provider_node_tab_page($nid, $op = FALSE) {
  $html = "";
  $node = node_load($nid);
  $meeting_id = $node->field_meeting_id[LANGUAGE_NONE][0]['value'];
  $system_id = $node->field_system_id[LANGUAGE_NONE][0]['value'];
  $filename = 'Unknown';
  $files = file_scan_directory(variable_get('os2web_meetings_path', ACADRE_MM_IMPORT_DIR), '/\.xml$/i', array('recurse' => FALSE));
  foreach ($files as $file) {
    $xml = simplexml_load_file(drupal_realpath($file->uri));
    if (is_object($xml)) {
      $xml_mid = (string) array_shift($xml->xpath("//table[@name='meeting']/fields/field/@sysid"));
      if ($meeting_id == $xml_mid) {
        $filename = $file->filename;
        $agenda = $xml->xpath("//table[@name='producedAgenda']/fields/field[@sysid='$system_id']/../field");
        if (!empty($agenda)) {
          break;
        }
      }
    }
  }

  if ($op) {
    switch ($op) {
      case 'reimport':
        break;

      default:
        drupal_set_message($op . ' not yet implemented.', 'error');
        break;

    }
    drupal_goto('node/' . $nid . '/control');
  }

  $html .= "<h1>" . $node->title . "</h1>";

  $head = array('Node id', 'Meeting id', 'System id', 'Filename');
  $rows[] = array(
    $node->nid,
    $meeting_id,
    $system_id,
    $filename,
  );
  $html .= theme('table', array('header' => $head, 'rows' => $rows));
  $head = array('Attribute', 'Value');
  $rows = array();
  foreach ($agenda as $attr) {
    foreach ($attr->attributes() as $key => $val) {
      $rows[] = array($key, $val);
    }
  }
  $html .= theme('table', array('header' => $head, 'rows' => $rows));

  $html .= l(t('Re-import'), 'node/' . $node->nid . '/control/reimport');

  return $html;
}

/**
 * Sanetizes filename, removing illegal characters.
 *
 * @param string $filename
 *   Filename
 *
 * @return string
 *   Sanetized filename with same extension.
 */
function _os2web_esdh_provider_sanetize_filename($filename) {
  // Replace whitespace.
  // $filename = str_replace(' ', '_', $filename);
  // Remove remaining unsafe characters.
  // $filename = preg_replace('![^0-9A-Za-z_.- ]!', '', $filename);
  $filename = preg_replace('![/"]!', '-', $filename);
  // Remove multiple consecutive non-alphabetical characters.
  $filename = preg_replace('/(_)_+|(\.)\.+|(-)-+/', '\\1\\2\\3', $filename);
  // Force lowercase to prevent issues on case-insensitive file systems.
  // $filename = strtolower($filename);
  $pi = pathinfo($filename);
  if (isset($pi['extension'])) {
    return substr(trim($pi['filename']), 0, 160) . '.' . $pi['extension'];
  }
  else {
    return substr(trim($pi['filename']), 0, 160);
  }
}

/**
 * Case insensitive fileexists(). Code from comments on php.net.
 *
 * @param string $filename
 *   Filename
 *
 * @return mixed
 *   False if file not found, case corrected filename if found.
 */
function _os2web_esdh_provider_similar_file_exists($filename) {
    if (file_exists($filename)) {
      return $filename;
    }
    
    $dir = dirname($filename);
    $files = glob($dir . '/*');
    $lcaseFilename = strtolower($filename);
    if (!empty($files)){
      foreach ($files as $file) {
	  if (strtolower($file) == $lcaseFilename) {
	      return $file;
	  }
      }
    }
    return FALSE;
}
