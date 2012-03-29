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

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_commitees|node|politician|form';
  $field_group->group_name = 'group_commitees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'politician';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_memberships';
  $field_group->data = array(
    'label' => 'Udvalg',
    'weight' => '21',
    'children' => array(
      0 => 'field_role_in_kfu',
      1 => 'field_role_in_sfu',
      2 => 'field_role_in_su',
      3 => 'field_role_in_suu',
      4 => 'field_role_in_tmu',
      5 => 'field_role_in_ku',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Udvalg',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_commitees|node|politician|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|politician|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'politician';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Udgår',
    'weight' => '16',
    'children' => array(
      0 => 'field_udvalg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Udgår',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_deprecated|node|politician|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_memberships|node|politician|form';
  $field_group->group_name = 'group_memberships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'politician';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Medlemsskaber',
    'weight' => '14',
    'children' => array(
      0 => 'field_member',
      1 => 'field_role_in_kb',
      2 => 'group_commitees',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Medlemsskaber',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_memberships|node|politician|form'] = $field_group;

  return $export;
}
