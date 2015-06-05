<?php
/**
 * @file
 * permission.create_issue_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create issue content',
  'roles' => array(
    0 => 'editor',
  ),
);

$dependencies = array(
  'content_type.issue' => 'content_type.issue',
  'role.editor' => 'role.editor',
);

$optional = array();

$modules = array(
  0 => 'node',
);
