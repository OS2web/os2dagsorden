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
      'label' => 'Titel',
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
    'revision' => array(
      'owner' => 'rel',
      'label' => 'Opret ny version',
      'parent' => 'revision_information',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'checkbox',
    ),
    'log' => array(
      'owner' => 'rel',
      'label' => 'Logbesked',
      'parent' => 'revision_information',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'textarea',
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
    'name' => array(
      'owner' => 'rel',
      'label' => 'Skrevet af',
      'parent' => 'author',
      'group_info' => FALSE,
      'weight' => -1,
      'element_type' => 'textfield',
    ),
    'date' => array(
      'owner' => 'rel',
      'label' => 'Skrevet den',
      'parent' => 'author',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'textfield',
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
    'promote' => array(
      'owner' => 'rel',
      'label' => 'Forfremmet til forside',
      'parent' => 'options',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'checkbox',
    ),
    'sticky' => array(
      'owner' => 'rel',
      'label' => 'Klæbrig',
      'parent' => 'options',
      'group_info' => FALSE,
      'weight' => 2,
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
    'submit' => array(
      'owner' => 'rel',
      'label' => 'Gem',
      'parent' => 'actions',
      'group_info' => FALSE,
      'weight' => 5,
      'element_type' => 'submit',
    ),
    'preview' => array(
      'owner' => 'rel',
      'label' => 'Gennemse',
      'parent' => 'actions',
      'group_info' => FALSE,
      'weight' => 10,
      'element_type' => 'submit',
    ),
    'save' => array(
      'owner' => 'rel',
      'label' => 'Gem',
      'parent' => 'actions',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'submit',
    ),
    'next' => array(
      'owner' => 'rel',
      'label' => 'Næste >',
      'parent' => 'actions',
      'group_info' => FALSE,
      'weight' => 999,
      'element_type' => 'submit',
    ),
    'body' => array(
      'owner' => 'drupal',
      'label' => 'Body',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '-3',
      'element_type' => 'container',
    ),
    'field_additional_info' => array(
      'owner' => 'drupal',
      'label' => 'Field additional info',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '1',
      'element_type' => 'container',
    ),
    'field_case' => array(
      'owner' => 'drupal',
      'label' => 'Field case',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '2',
      'element_type' => 'container',
    ),
    'field_doc' => array(
      'owner' => 'drupal',
      'label' => 'Field doc',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '3',
      'element_type' => 'container',
    ),
    'field_lead_image' => array(
      'owner' => 'drupal',
      'label' => 'Field lead image',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '-2',
      'element_type' => 'container',
    ),
    'field_mediafile' => array(
      'owner' => 'drupal',
      'label' => 'Field mediafile',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '2',
      'element_type' => 'container',
    ),
    'field_resume_long' => array(
      'owner' => 'drupal',
      'label' => 'Field resume long',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '-4',
      'element_type' => 'container',
    ),
    'field_site_structure' => array(
      'owner' => 'drupal',
      'label' => 'Field site structure',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '5',
      'element_type' => 'container',
    ),
    'field_source_id' => array(
      'owner' => 'drupal',
      'label' => 'Field source id',
      'parent' => '',
      'group_info' => FALSE,
      'weight' => '6',
      'element_type' => 'container',
    ),
    'menu' => array(
      'owner' => 'rel',
      'label' => 'Menu',
      'parent' => 'additional_settings',
      'group_info' => array(
        'format_type' => 'tab',
        'format_settings' => array(
          'instance_settings' => array(
            'classes' => 'menu-link-form',
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
      'weight' => -2,
      'element_type' => 'fieldset',
    ),
    'enabled' => array(
      'owner' => 'rel',
      'label' => 'Tilbyder et menu-link',
      'parent' => 'menu',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'checkbox',
    ),
    'link' => array(
      'owner' => 'rel',
      'label' => 'Link',
      'parent' => 'menu',
      'group_info' => array(
        'format_type' => 'div',
        'format_settings' => array(
          'formatter' => 'open',
          'instance_settings' => array(
            'show_label' => FALSE,
            'id' => 'edit-menu--2',
            'classes' => 'form-wrapper',
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
      'weight' => 1,
      'element_type' => 'container',
    ),
    'link_title' => array(
      'owner' => 'rel',
      'label' => 'Titel',
      'parent' => 'link',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'textfield',
    ),
    'description' => array(
      'owner' => 'rel',
      'label' => 'Beskrivelse',
      'parent' => 'link',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'textarea',
    ),
    'parent' => array(
      'owner' => 'rel',
      'label' => 'Overordnet menupunkt',
      'parent' => 'link',
      'group_info' => FALSE,
      'weight' => 2,
      'element_type' => 'select',
    ),
    'weight' => array(
      'owner' => 'rel',
      'label' => 'Vægt',
      'parent' => 'link',
      'group_info' => FALSE,
      'weight' => 3,
      'element_type' => 'weight',
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
    'alias' => array(
      'owner' => 'rel',
      'label' => 'Alternativ URL',
      'parent' => 'path',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'textfield',
    ),
    'pathauto' => array(
      'owner' => 'rel',
      'label' => 'Opret automatisk URL alias',
      'parent' => 'path',
      'group_info' => FALSE,
      'weight' => -1,
      'element_type' => 'checkbox',
    ),
    'print' => array(
      'owner' => 'rel',
      'label' => 'Printer, e-mail and PDF versions',
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
      'weight' => 30,
      'element_type' => 'fieldset',
    ),
    'label' => array(
      'owner' => 'rel',
      'label' => 'Label',
      'parent' => 'print',
      'group_info' => FALSE,
      'weight' => 0,
      'element_type' => 'markup',
    ),
    'print_display' => array(
      'owner' => 'rel',
      'label' => 'Show link',
      'parent' => 'print',
      'group_info' => FALSE,
      'weight' => 1,
      'element_type' => 'checkbox',
    ),
    'print_display_comment' => array(
      'owner' => 'rel',
      'label' => 'Show link in individual comments',
      'parent' => 'print',
      'group_info' => FALSE,
      'weight' => 2,
      'element_type' => 'checkbox',
    ),
    'print_display_urllist' => array(
      'owner' => 'rel',
      'label' => 'Show Printer-friendly URLs list',
      'parent' => 'print',
      'group_info' => FALSE,
      'weight' => 3,
      'element_type' => 'checkbox',
    ),
  );
  $rel->duplicate = array();
  $export['contentpage_node_form'] = $rel;

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
