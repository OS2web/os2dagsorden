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

/**
 * Implements hook_fontyourface_features_default_font().
 */
function os2web_sovs_fontyourface_features_default_font() {
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

/**
 * Implements hook_image_default_styles().
 */
function os2web_sovs_image_default_styles() {
  $styles = array();

  // Exported image style: news_big
  $styles['news_big'] = array(
    'name' => 'news_big',
    'effects' => array(
      14 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '214',
          'height' => '116',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: rotating_image_tall
  $styles['rotating_image_tall'] = array(
    'name' => 'rotating_image_tall',
    'effects' => array(
      13 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '460',
          'height' => '335',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: sektion-160
  $styles['sektion-160'] = array(
    'name' => 'sektion-160',
    'effects' => array(
      15 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '230',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
