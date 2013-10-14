<?php
/**
 * @file
 * codesnippets.features.inc
 */

/**
 * Implements hook_views_api().
 */
function codesnippets_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function codesnippets_node_info() {
  $items = array(
    'codesnippet' => array(
      'name' => t('Code snippet'),
      'base' => 'node_content',
      'description' => t('Post a code snippet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
