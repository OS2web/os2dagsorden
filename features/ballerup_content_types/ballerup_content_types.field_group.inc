<?php
/**
 * @file
 * ballerup_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ballerup_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_commitees|node|politician|form';
  $field_group->group_name = 'group_commitees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'politician';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_memberships';
  $field_group->data = '';
  $export['group_commitees|node|politician|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|politician|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'politician';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_deprecated|node|politician|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_memberships|node|politician|form';
  $field_group->group_name = 'group_memberships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'politician';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_memberships|node|politician|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|iframe_selvbetjeningsl_sning_mm|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'iframe_selvbetjeningsl_sning_mm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '8',
    'children' => array(
      0 => 'field_termref_kle',
      1 => 'field_editortags',
      2 => 'field_organization',
      3 => 'field_termref_sted',
      4 => 'field_politics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taksonomi|node|iframe_selvbetjeningsl_sning_mm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|webform|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '6',
    'children' => array(
      0 => 'field_site_structure',
      1 => 'field_termref_kle',
      2 => 'field_organization',
      3 => 'field_termref_sofd',
      4 => 'field_termref_sted',
      5 => 'field_editortags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taksonomi|node|webform|form'] = $field_group;

  return $export;
}
