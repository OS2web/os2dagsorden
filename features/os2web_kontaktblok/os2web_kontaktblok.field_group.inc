<?php
/**
 * @file
 * os2web_kontaktblok.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_kontaktblok_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aabningstider|node|kontaktblok|form';
  $field_group->group_name = 'group_aabningstider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kontaktblok';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Åbningstider',
    'weight' => '10',
    'children' => array(
      0 => 'field_kontaktblok_aa_manaa',
      1 => 'field_kontaktblok_aa_manlk',
      2 => 'field_kontaktblok_aa_tiraa',
      3 => 'field_kontaktblok_aa_tirlk',
      4 => 'field_kontaktblok_aa_onsaa',
      5 => 'field_kontaktblok_aa_onslk',
      6 => 'field_kontaktblok_aa_toraa',
      7 => 'field_kontaktblok_aa_torlk',
      8 => 'field_kontaktblok_aa_freaa',
      9 => 'field_kontaktblok_aa_frelk',
      10 => 'field_kontaktblok_aa_loeaa',
      11 => 'field_kontaktblok_aa_loelk',
      12 => 'field_kontaktblok_aa_soeaa',
      13 => 'field_kontaktblok_aa_soelk',
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
  $export['group_aabningstider|node|kontaktblok|form'] = $field_group;

  return $export;
}
