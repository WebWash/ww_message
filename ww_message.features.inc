<?php
/**
 * @file
 * ww_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ww_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ww_message_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function ww_message_default_message_type() {
  $items = array();
  $items['log_new_content'] = entity_import('message_type', '{
    "name" : "log_new_content",
    "description" : "Log new content",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:field-message-content:title] has been added by [message:user:name].",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:field-message-content:title] has been added by [message:user:name].\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function ww_message_node_info() {
  $items = array(
    'ww_blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Example blog content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
