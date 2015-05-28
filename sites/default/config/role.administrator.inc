<?php
/**
 * @file
 * role.administrator.inc
 */

$api = '2.0.0';

$data = (object) array(
  'name' => 'administrator',
  'weight' => '2',
  'machine_name' => 'administrator',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'role_export',
);
