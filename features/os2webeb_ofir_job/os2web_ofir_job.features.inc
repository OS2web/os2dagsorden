<?php
/**
 * @file
 * os2web_ofir_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_ofir_job_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
