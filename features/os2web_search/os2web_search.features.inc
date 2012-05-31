<?php
/**
 * @file
 * os2web_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function os2web_search_default_search_api_server() {
  $items = array();
  $items['solr1'] = entity_import('search_api_server', '{
    "name" : "solr1",
    "machine_name" : "solr1",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "localhost",
      "port" : "8984",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0
    },
    "enabled" : "1"
  }');
  return $items;
}
