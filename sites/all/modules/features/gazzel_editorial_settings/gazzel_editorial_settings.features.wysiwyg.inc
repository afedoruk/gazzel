<?php
/**
 * @file
 * gazzel_editorial_settings.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function gazzel_editorial_settings_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'TextColor' => 1,
          'Superscript' => 1,
          'Blockquote' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'FontSize' => 1,
          'Find' => 1,
          'Replace' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'none',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 1,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
