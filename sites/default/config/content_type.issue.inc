<?php
/**
 * @file
 * content_type.issue.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'issue',
  'name' => 'Выпуск',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__issue' => 'variable.field_bundle_settings_node__issue',
  'variable.node_options_issue' => 'variable.node_options_issue',
  'variable.node_preview_issue' => 'variable.node_preview_issue',
  'variable.node_submitted_issue' => 'variable.node_submitted_issue',
);

$optional = array(
  'field.node.field_image.issue' => 'field.node.field_image.issue',
  'permission.create_issue_content' => 'permission.create_issue_content',
  'permission.edit_own_issue_content' => 'permission.edit_own_issue_content',
  'permission.edit_any_issue_content' => 'permission.edit_any_issue_content',
  'permission.delete_own_issue_content' => 'permission.delete_own_issue_content',
  'permission.delete_any_issue_content' => 'permission.delete_any_issue_content',
);

$modules = array(
  0 => 'node',
);
