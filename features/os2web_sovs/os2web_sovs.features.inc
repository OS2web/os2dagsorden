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

  return $styles;
}
