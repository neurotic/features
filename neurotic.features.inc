<?php
/**
 * @file
 * neurotic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function neurotic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function neurotic_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function neurotic_node_info() {
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
