<?php
/**
 * @file
 * os2web_webform_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_webform_downloads_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
