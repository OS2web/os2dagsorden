<?php
/**
 * @file
 * ballerup_kultunaut.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ballerup_kultunaut_taxonomy_default_vocabularies() {
  return array(
    'aktivitetstype' => array(
      'name' => 'Aktivitetstype',
      'machine_name' => 'aktivitetstype',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-6',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
