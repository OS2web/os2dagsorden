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
  $field_group->identifier = 'group_borgerdk|node|contentpage|form';
  $field_group->group_name = 'group_borgerdk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Borger.dk',
    'weight' => '0',
    'children' => array(
      0 => 'field_borger_url',
      1 => 'field_local_title',
      2 => 'field_local_intro',
      3 => 'field_local_coda',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Borger.dk',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Ekstra felter. Især relevante i forbindelse med artikler importeret fra Borger.dk',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_borgerdk|node|contentpage|form'] = $field_group;

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

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column_unique|node|contentpage|form';
  $field_group->group_name = 'group_right_column_unique';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Højrespalte unik',
    'weight' => '9',
    'children' => array(
      0 => 'field_related',
      1 => 'field_additional_info',
      2 => 'field_related_person',
      3 => 'field_related_tema',
      4 => 'field_right_column',
      5 => 'field_mediafile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Højrespalte unik',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_right_column_unique|node|contentpage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column_unique|node|news|form';
  $field_group->group_name = 'group_right_column_unique';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Højrespalte unik',
    'weight' => '9',
    'children' => array(
      0 => 'field_related',
      1 => 'field_additional_info',
      2 => 'field_related_person',
      3 => 'field_related_tema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Højrespalte unik',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_right_column_unique|node|news|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|contentpage|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Højrespalte Genbrug',
    'weight' => '10',
    'children' => array(
      0 => 'field_inherit_right_column',
      1 => 'field_parent_node',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Højrespalte Genbrug',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'For at nedarve en højrespalte fra forældrepunktet skal du først markere feltet "Nedarv højrespalte", derefter indsætte overskriften af forældrepunktet i feltet "Forældre-menupunkt". DET SKAL DU ALTID, HVIS DENNE SIDE BOR I HØJRESPALTE! ',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_right_column|node|contentpage|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|news|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Højrespalte Genbrug',
    'weight' => '10',
    'children' => array(
      0 => 'field_right_column',
      1 => 'field_inherit_right_column',
      2 => 'field_parent_node',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Højrespalte Genbrug',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_right_column|node|news|form'] = $field_group;

  return $export;
}
