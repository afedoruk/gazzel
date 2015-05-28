<?php
/**
 * @file
 * role.editor.inc
 */

$api = '2.0.0';

$data = (object) array(
  'name' => 'editor',
  'weight' => '3',
  'machine_name' => 'editor',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'role_export',
);
