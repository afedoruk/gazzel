<?php
/**
 * @file
 * permission.create_article_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create article content',
  'roles' => array(
    0 => 'administrator',
    1 => 'editor',
  ),
);

$dependencies = array(
  'content_type.article' => 'content_type.article',
  'role.administrator' => 'role.administrator',
  'role.editor' => 'role.editor',
);

$optional = array();

$modules = array(
  0 => 'node',
);
