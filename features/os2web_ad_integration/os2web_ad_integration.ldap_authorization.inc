<?php
/**
 * @file
 * os2web_ad_integration.ldap_authorization.inc
 */

/**
 * Implements hook_default_ldap_authorization().
 */
function os2web_ad_integration_default_ldap_authorization() {
  $export = array();

  $consumer_type = new stdClass;
  $consumer_type->disabled = FALSE; /* Edit this to true to make a default consumer_type disabled initially */
  $consumer_type->api_version = 1;
  $consumer_type->sid = 'ldap_syddjursnet';
  $consumer_type->consumer_type = 'drupal_role';
  $consumer_type->consumer_module = 'ldap_authorization_drupal_role';
  $consumer_type->description = 'Maps syddjurs active directory users to drupal roles';
  $consumer_type->status = TRUE;
  $consumer_type->only_ldap_authenticated = TRUE;
  $consumer_type->derive_from_dn = TRUE;
  $consumer_type->derive_from_dn_attr = 'ou';
  $consumer_type->derive_from_attr = TRUE;
  $consumer_type->derive_from_attr_attr = 'memberOf';
  $consumer_type->derive_from_attr_use_first_attr = TRUE;
  $consumer_type->derive_from_entry = FALSE;
  $consumer_type->derive_from_entry_entries = '';
  $consumer_type->derive_from_entry_attr = '';
  $consumer_type->derive_from_entry_search_all = FALSE;
  $consumer_type->mappings = 'DW_Dotnetnuke_Admins|Administrator
DW_Dotnetnuke_Admins|Webmaster
DW_Dotnetnuke_Admins|Editor
DW_Dotnetnuke_Admins|Kommunikation
DW_Dotnetnuke_Admins|Student
syddjurs|authenticated user
';
  $consumer_type->use_filter = TRUE;
  $consumer_type->synch_to_ldap = FALSE;
  $consumer_type->synch_on_logon = TRUE;
  $consumer_type->revoke_ldap_provisioned = TRUE;
  $consumer_type->create_consumers = TRUE;
  $consumer_type->regrant_ldap_provisioned = TRUE;
  $export['drupal_role'] = $consumer_type;

  return $export;
}
