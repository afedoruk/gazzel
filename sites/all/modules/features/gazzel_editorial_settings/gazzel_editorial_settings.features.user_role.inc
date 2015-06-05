<?php
/**
 * @file
 * gazzel_editorial_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gazzel_editorial_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    'machine_name' => 'administrator',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
    'machine_name' => 'editor',
  );

  return $roles;
}
