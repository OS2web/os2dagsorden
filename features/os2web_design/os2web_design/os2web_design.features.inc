<?php
/**
 * @file
 * os2web_design.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_design_ctools_plugin_api() {
  return array("version" => "3");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function os2web_design_fontyourface_features_default_font() {
  return array(
    'Myriad Pro Bold' => array(
      'name' => 'Myriad Pro Bold',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/myriad-pro#n7',
      'provider' => 'typekit_api',
      'css_selector' => NULL,
      'css_family' => 'myriad-pro',
      'css_style' => 'normal',
      'css_weight' => '700',
      'css_fallbacks' => '',
      'foundry' => 'Adobe',
      'foundry_url' => 'http://typekit.com/foundries/adobe',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"cbym:n7";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"xnl5bws";}',
    ),
    'Myriad Pro Light' => array(
      'name' => 'Myriad Pro Light',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/myriad-pro#n3',
      'provider' => 'typekit_api',
      'css_selector' => NULL,
      'css_family' => 'myriad-pro',
      'css_style' => 'normal',
      'css_weight' => '300',
      'css_fallbacks' => '',
      'foundry' => 'Adobe',
      'foundry_url' => 'http://typekit.com/foundries/adobe',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"cbym:n3";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"xnl5bws";}',
    ),
    'Myriad Pro Regular' => array(
      'name' => 'Myriad Pro Regular',
      'enabled' => '1',
      'url' => 'http://typekit.com/fonts/myriad-pro#n4',
      'provider' => 'typekit_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'myriad-pro',
      'css_style' => 'normal',
      'css_weight' => '400',
      'css_fallbacks' => '',
      'foundry' => 'Adobe',
      'foundry_url' => 'http://typekit.com/foundries/adobe',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:3:{s:10:"typekit_id";s:7:"cbym:n4";s:7:"variant";s:6:"normal";s:3:"kit";s:7:"xnl5bws";}',
    ),
  );
}
