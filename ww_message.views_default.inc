<?php
/**
 * @file
 * ww_message.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ww_message_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'recent_logs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Recent logs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent logs';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_message_content_target_id']['id'] = 'field_message_content_target_id';
  $handler->display->display_options['relationships']['field_message_content_target_id']['table'] = 'field_data_field_message_content';
  $handler->display->display_options['relationships']['field_message_content_target_id']['field'] = 'field_message_content_target_id';
  $handler->display->display_options['relationships']['field_message_content_target_id']['required'] = 1;
  /* Field: Message: Render message (Get text) */
  $handler->display->display_options['fields']['message_render']['id'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['table'] = 'message';
  $handler->display->display_options['fields']['message_render']['field'] = 'message_render';
  $handler->display->display_options['fields']['message_render']['label'] = '';
  $handler->display->display_options['fields']['message_render']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['external'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['message_render']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['message_render']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['message_render']['alter']['html'] = 0;
  $handler->display->display_options['fields']['message_render']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message_render']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['message_render']['hide_empty'] = 0;
  $handler->display->display_options['fields']['message_render']['empty_zero'] = 0;
  $handler->display->display_options['fields']['message_render']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['message_render']['partials'] = 0;
  $handler->display->display_options['fields']['message_render']['partials_delta'] = '0';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_message_content_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['recent_logs'] = $view;

  return $export;
}
