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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
