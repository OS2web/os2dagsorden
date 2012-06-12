<?php
/**
 * @file
 * os2web_sovs.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function os2web_sovs_field_default_fields() {
  $fields = array();

  // Exported field: 'taxonomy_term-site_struktur-field_attached_node'
  $fields['taxonomy_term-site_struktur-field_attached_node'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_attached_node',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'borger_dk_permalink' => 0,
          'contentpage' => 'contentpage',
          'esdh_dokument' => 0,
          'esdh_sag' => 0,
          'files' => 0,
          'galleri' => 0,
          'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
          'institution' => 0,
          'knactivity' => 0,
          'kontaktblok' => 0,
          'local_plan' => 0,
          'media' => 0,
          'news' => 0,
          'ofir_job' => 0,
          'panel' => 0,
          'person' => 0,
          'politician' => 0,
          'referat' => 0,
          'right_column' => 0,
          'rotating_image' => 0,
          'selvbetjeningslinks' => 0,
          'spotbox' => 0,
          'tema' => 0,
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site_struktur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Vælg de spotboxe der skal vises nederst på siden.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_attached_node',
      'label' => 'Spotboxe Bund',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '120',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-site_struktur-field_attached_node_fokus'
  $fields['taxonomy_term-site_struktur-field_attached_node_fokus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_attached_node_fokus',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'borger_dk_permalink' => 0,
          'contentpage' => 0,
          'esdh_dokument' => 0,
          'esdh_sag' => 0,
          'files' => 0,
          'galleri' => 0,
          'iframe_selvbetjeningsl_sning_mm' => 0,
          'institution' => 0,
          'knactivity' => 0,
          'local_plan' => 0,
          'media' => 0,
          'news' => 0,
          'ofir_job' => 0,
          'panel' => 0,
          'person' => 0,
          'politician' => 0,
          'referat' => 0,
          'right_column' => 0,
          'rotating_image' => 0,
          'selvbetjeningslinks' => 0,
          'spotbox' => 'spotbox',
          'tema' => 0,
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'site_struktur',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_attached_node_fokus',
      'label' => 'Spotbox fokus',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '120',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '7',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Spotbox fokus');
  t('Spotboxe Bund');
  t('Vælg de spotboxe der skal vises nederst på siden.');

  return $fields;
}
