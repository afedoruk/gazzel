<?php
/**
 * @file
 * permission.edit_own_issue_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own issue content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.issue' => 'content_type.issue',
);

$optional = array();

$modules = array(
  0 => 'node',
);
