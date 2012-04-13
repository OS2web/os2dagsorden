<?php
/**
 * @file
 * os2web_sovs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_sovs_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function os2web_sovs_views_api() {
  return array("version" => "3.0");
}
