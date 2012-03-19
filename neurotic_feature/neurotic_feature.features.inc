<?php
/**
 * @file
 * neurotic_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neurotic_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function neurotic_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function neurotic_feature_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'effects' => array(
      39 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '580',
          'height' => '244',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function neurotic_feature_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'text_banner' => array(
      'name' => t('text_banner'),
      'base' => 'node_content',
      'description' => t('Banner de tipo texto'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
