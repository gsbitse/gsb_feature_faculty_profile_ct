<?php
/**
 * @file
 * gsb_feature_faculty_profile_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_faculty_profile_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_faculty_profile_ct_node_info() {
  $items = array(
    'faculty_profile' => array(
      'name' => t('Faculty Profile'),
      'base' => 'node_content',
      'description' => t('The GSB Public Faculty Profile content type is used for faculty profile on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
