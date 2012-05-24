<?php
/**
 * @file
 * os2web_menuer_og_blokke.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_menuer_og_blokke_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_views_api().
 */
function os2web_menuer_og_blokke_views_api() {
  return array("version" => "3.0");
}
