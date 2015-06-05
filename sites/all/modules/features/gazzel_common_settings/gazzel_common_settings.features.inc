<?php
/**
 * @file
 * gazzel_common_settings.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function gazzel_common_settings_image_default_styles() {
  $styles = array();

  // Exported image style: gazzel_logo.
  $styles['gazzel_logo'] = array(
    'label' => 'gazzel_logo',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
