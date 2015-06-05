<?php
/**
 * @file
 * content_type.article.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'article',
  'name' => 'Article',
  'description' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__article' => 'variable.field_bundle_settings_node__article',
  'variable.node_options_article' => 'variable.node_options_article',
  'variable.node_preview_article' => 'variable.node_preview_article',
  'variable.node_submitted_article' => 'variable.node_submitted_article',
);

$optional = array(
  'field.node.body.article' => 'field.node.body.article',
  'field.node.field_title_image.article' => 'field.node.field_title_image.article',
  'field.node.field_issue.article' => 'field.node.field_issue.article',
  'permission.create_article_content' => 'permission.create_article_content',
  'permission.edit_own_article_content' => 'permission.edit_own_article_content',
  'permission.edit_any_article_content' => 'permission.edit_any_article_content',
  'permission.delete_own_article_content' => 'permission.delete_own_article_content',
  'permission.delete_any_article_content' => 'permission.delete_any_article_content',
);

$modules = array(
  0 => 'node',
);
