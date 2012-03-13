<?php
/**
 * @file
 * borger_dk_integration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function borger_dk_integration_default_rules_configuration() {
  $items = array();
  $items['rules_borger_dk_lookup_by_url'] = entity_import('rules_config', '{ "rules_borger_dk_lookup_by_url" : {
      "LABEL" : "Borger.dk lookup by permalink",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "wsclient" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_borger_permalink" } }
      ],
      "DO" : [
        { "data_create" : {
            "USING" : {
              "type" : "wsclient_borger_dk_GetArticleIDByUrl",
              "param_url" : "[node:field-borger-permalink]"
            },
            "PROVIDE" : { "data_created" : { "artikel_id_fra_url" : "Artikel ID fra URL" } }
          }
        },
        { "php_eval" : { "code" : "borgerdk_permalink_true($artikel_id_fra_url);" } },
        { "wsclient_borger_dk_GetArticleIDByUrl" : {
            "USING" : { "param_parameters" : [ "artikel-id-fra-url" ] },
            "PROVIDE" : { "result" : { "artikel_id_fra_url_resultat" : "Artikel ID fra URL resultat" } }
          }
        },
        { "data_create" : {
            "USING" : {
              "type" : "wsclient_borger_dk_GetArticleByID",
              "param_articleID" : [ "artikel-id-fra-url-resultat:GetArticleIDByUrlResult:ArticleID" ],
              "param_municipalityCode" : "101"
            },
            "PROVIDE" : { "data_created" : { "artikel_id" : "Artikel ID" } }
          }
        },
        { "wsclient_borger_dk_GetArticleByID" : {
            "USING" : { "param_parameters" : [ "artikel-id" ] },
            "PROVIDE" : { "result" : { "artikel_id_resultat" : "Artikel ID resultat" } }
          }
        },
        { "php_eval" : { "code" : "\\/\\/ drupal_set_message(\'S\\u00e5 spiller vi bolden videre til borgerdk_add_as_node($artikel_id_resultat), FALSE, $node\');\\r\\nborgerdk_add_as_node($artikel_id_resultat, FALSE, $node);" } }
      ]
    }
  }');
  $items['rules_update_borger_dk_derived_articles'] = entity_import('rules_config', '{ "rules_update_borger_dk_derived_articles" : {
      "LABEL" : "Update borger.dk derived articles",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "wsclient", "php" ],
      "ON" : [ "watchdog" ],
      "IF" : [
        { "data_is" : {
            "data" : [ "log-entry:type" ],
            "value" : "fetch_borgerdk_article_by_permalink"
          }
        }
      ],
      "DO" : [
        { "data_create" : {
            "USING" : {
              "type" : "wsclient_borger_dk_GetArticleIDByUrl",
              "param_url" : [ "log-entry:message" ]
            },
            "PROVIDE" : { "data_created" : { "artikel_id_fra_url" : "Artikel ID fra URL" } }
          }
        },
        { "wsclient_borger_dk_GetArticleIDByUrl" : {
            "USING" : { "param_parameters" : [ "artikel-id-fra-url" ] },
            "PROVIDE" : { "result" : { "artikel_id_fra_url_resultat" : "Artikel ID fra URL resultat" } }
          }
        },
        { "data_create" : {
            "USING" : {
              "type" : "wsclient_borger_dk_GetArticleByID",
              "param_articleID" : [ "artikel-id-fra-url-resultat:GetArticleIDByUrlResult:ArticleID" ],
              "param_municipalityCode" : "101"
            },
            "PROVIDE" : { "data_created" : { "artikel_id" : "Artikel ID" } }
          }
        },
        { "wsclient_borger_dk_GetArticleByID" : {
            "USING" : { "param_parameters" : [ "artikel-id" ] },
            "PROVIDE" : { "result" : { "artikel_id_resultat" : "Artikel ID resultat" } }
          }
        },
        { "php_eval" : { "code" : "\\/\\/ drupal_set_message(\'S\\u00e5 spiller vi bolden videre til borgerdk_add_as_node($artikel_id_resultat), TRUE\');\\r\\nborgerdk_add_as_node($artikel_id_resultat, TRUE);" } }
      ]
    }
  }');
  return $items;
}
