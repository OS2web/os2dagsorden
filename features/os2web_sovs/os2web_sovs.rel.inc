<?php
/**
 * @file
 * os2web_sovs.rel.inc
 */

/**
 * Implements hook_rel_build_info().
 */
function os2web_sovs_rel_build_info() {
  $export = array();

  $rel = new stdClass();
  $rel->api_version = 1;
  $rel->build_id = 'contentpage_node_form';
  $rel->label = 'contentpage_node_form';
  $rel->entity_type = 'node';
  $rel->bundle = 'contentpage';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/structure/types/manage/contentpage/fields';
  $rel->elements = array(
    'title' => array(
      'owner' => 'drupal',
      'label' => 'Overskrift',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => -5,
      'element_type' => 'textfield',
    ),
    'additional_settings' => array(
      'owner' => 'rel',
      'label' => 'Additional settings',
      'parent' => '',
      'group_info' => array(
        'format_type' => 'tabs',
        'format_settings' => array(),
        'label' => 'Vertikal fane-gruppe',
        'description' => 'Denne feltgruppe renderer undergrupper i deres egen vertikale fane-wrapper.',
        'instance_settings' => array(
          'classes' => '',
        ),
      ),
      'weight' => 99,
      'element_type' => 'vertical_tabs',
    ),
    'revision_information' => array(
      'owner' => 'rel',
      'label' => 'Versioner',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'node-form-revision-information',
          ),
          'formatter' => 'collapsible',
        ),
        'label' => 'Vertikal fane',
        'description' => 'Denne feltgruppe renderer indholdet i et fieldset, som del af en vertikal fanegruppe.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 20,
      'element_type' => 'fieldset',
    ),
    'author' => array(
      'owner' => 'rel',
      'label' => 'Forfatter',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'node-form-author',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertikal fane',
        'description' => 'Denne feltgruppe renderer indholdet i et fieldset, som del af en vertikal fanegruppe.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 90,
      'element_type' => 'fieldset',
    ),
    'options' => array(
      'owner' => 'rel',
      'label' => 'Udgivelse',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'node-form-options',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertikal fane',
        'description' => 'Denne feltgruppe renderer indholdet i et fieldset, som del af en vertikal fanegruppe.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 95,
      'element_type' => 'fieldset',
    ),
    'status' => array(
      'owner' => 'rel',
      'label' => 'Udgivet',
      'parent' => 'options',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'checkbox',
    ),
    'actions' => array(
      'owner' => 'rel',
      'label' => 'Actions',
      'parent' => '',
      'group_info' => array(
        'format_type' => 'div',
        'format_settings' => array(
          'formatter' => 'open',
          'instance_settings' => array(
            'show_label' => FALSE,
          ),
        ),
        'label' => 'Div',
        'description' => 'Denne feltgruppe renderer det inderste indhold i en simpel div med titlen som etiket.',
        'format_types' => array(
          0 => 'open',
          1 => 'collapsible',
          2 => 'collapsed',
        ),
        'instance_settings' => array(
          'description' => '',
          'show_label' => 1,
          'label_element' => 'h3',
          'effect' => 'none',
          'speed' => 'fast',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'open',
      ),
      'weight' => 100,
      'element_type' => 'actions',
    ),
    'path' => array(
      'owner' => 'drupal',
      'label' => 'Alternativ URL',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'path-form',
          ),
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertikal fane',
        'description' => 'Denne feltgruppe renderer indholdet i et fieldset, som del af en vertikal fanegruppe.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 30,
      'element_type' => 'fieldset',
    ),
    'fmenu' => array(
      'owner' => 'rel',
      'label' => 'Add to menu',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'formatter' => 'collapsed',
        ),
        'label' => 'Vertikal fane',
        'description' => 'Denne feltgruppe renderer indholdet i et fieldset, som del af en vertikal fanegruppe.',
        'format_types' => array(
          0 => 'open',
          1 => 'closed',
        ),
        'instance_settings' => array(
          'description' => '',
          'classes' => '',
          'required_fields' => 1,
        ),
        'default_formatter' => 'closed',
      ),
      'weight' => 1,
      'element_type' => 'fieldset',
    ),
  );
  $rel->duplicate = array();
  $export['contentpage_node_form'] = $rel;

  $rel = new stdClass();
  $rel->api_version = 1;
  $rel->build_id = 'file_entity_edit';
  $rel->label = 'file_entity_edit';
  $rel->entity_type = 'file';
  $rel->bundle = 'image';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/config/media/file-types/manage/image/fields';
  $rel->elements = array(
    'field_folder' => array(
      'owner' => 'rel',
      'label' => 'Field folder',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => -1,
      'element_type' => '',
    ),
  );
  $rel->duplicate = array();
  $export['file_entity_edit'] = $rel;

  $rel = new stdClass();
  $rel->api_version = 1;
  $rel->build_id = 'linkit_dashboard_form';
  $rel->label = 'linkit_dashboard_form';
  $rel->entity_type = 'rel_build';
  $rel->bundle = 'linkit_dashboard_form';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/structure/rel/manage/linkit_dashboard_form';
  $rel->elements = array(
    'linkit_search' => array(
      'owner' => 'rel',
      'label' => 'Søg indhold',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => -10,
      'element_type' => 'textfield',
    ),
    'linkit_path' => array(
      'owner' => 'rel',
      'label' => 'Target path',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => -1,
      'element_type' => 'textfield',
    ),
    'linkit_insert' => array(
      'owner' => 'rel',
      'label' => 'Insert link',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => 100,
      'element_type' => 'button',
    ),
  );
  $rel->duplicate = array();
  $export['linkit_dashboard_form'] = $rel;

  $rel = new stdClass();
  $rel->api_version = 1;
  $rel->build_id = 'media_add_upload';
  $rel->label = 'media_add_upload';
  $rel->entity_type = 'rel_build';
  $rel->bundle = 'media_add_upload';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/structure/rel/manage/media_add_upload';
  $rel->elements = array(
    'submit' => array(
      'owner' => 'rel',
      'label' => 'Indsend',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'submit',
    ),
  );
  $rel->duplicate = array();
  $export['media_add_upload'] = $rel;

  $rel = new stdClass();
  $rel->api_version = 1;
  $rel->build_id = 'media_internet_add';
  $rel->label = 'media_internet_add';
  $rel->entity_type = 'rel_build';
  $rel->bundle = 'media_internet_add';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/structure/rel/manage/media_internet_add';
  $rel->elements = array(
    'embed_code' => array(
      'owner' => 'rel',
      'label' => 'URL eller embed-kode',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'textfield',
    ),
  );
  $rel->duplicate = array();
  $export['media_internet_add'] = $rel;

  $rel = new stdClass();
  $rel->api_version = 1;
  $rel->build_id = 'news_node_form';
  $rel->label = 'news_node_form';
  $rel->entity_type = 'node';
  $rel->bundle = 'news';
  $rel->view_mode = 'form';
  $rel->context = 'form';
  $rel->path = 'admin/structure/types/manage/news/fields';
  $rel->elements = array(
    'field_lead_image' => array(
      'owner' => 'drupal',
      'label' => 'Field lead image',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '4',
      'element_type' => 'container',
    ),
  );
  $rel->duplicate = array();
  $export['news_node_form'] = $rel;

  return $export;
}
