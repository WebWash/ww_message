<?php
/**
 * @file
 * ww_message.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ww_message_default_rules_configuration() {
  $items = array();
  $items['rules_log_new_content'] = entity_import('rules_config', '{ "rules_log_new_content" : {
      "LABEL" : "Log new content",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "ww_blog" : "ww_blog" } } } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "log_new_content",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "message" : "Message" } }
          }
        },
        { "data_set" : { "data" : [ "message:field-message-content" ], "value" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
