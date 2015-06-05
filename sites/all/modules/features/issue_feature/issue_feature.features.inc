<?php
/**
 * @file
 * issue_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function issue_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function issue_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function issue_feature_image_default_styles() {
  $styles = array();

  // Exported image style: issue_background.
  $styles['issue_background'] = array(
    'label' => 'issue_background',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: issue_title.
  $styles['issue_title'] = array(
    'label' => 'issue_title',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function issue_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'issue' => array(
      'name' => t('Выпуск'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
