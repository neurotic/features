<?php
/**
 * @file
 * neurotic.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function neurotic_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sections
  $menus['menu-sections'] = array(
    'menu_name' => 'menu-sections',
    'title' => 'Sections',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sections');


  return $menus;
}
