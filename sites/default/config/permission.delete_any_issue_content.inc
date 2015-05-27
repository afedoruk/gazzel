<?php
/**
 * @file
 * permission.delete_any_issue_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any issue content',
  'roles' => array(
    0 => 'editor',
  ),
);

$dependencies = array(
  'content_type.issue' => 'content_type.issue',
);

$optional = array();

$modules = array(
  0 => 'node',
);
