<?php
/**
 * @file
 * borger_dk_integration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function borger_dk_integration_taxonomy_default_vocabularies() {
  return array(
    'site_struktur' => array(
      'name' => 'Overordnet placering og sitestruktur',
      'machine_name' => 'site_struktur',
      'description' => 'Vælg de steder i hjemmesidens overordnede struktur hvor indholdet skal publiceres.',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-10',
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
