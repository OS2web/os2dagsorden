<?php

// $Id$
/*
 * 
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

function os2web_settings_settings_form($form, $form_state) {
  $form['dummy'] = array(
      '#type' => 'markup',
      '#value' => 'Placeholder until more settings are needed.',
  );
  $form['themesettings'] = array(
      '#type' => 'fieldset',
      '#collapsible' => FALSE,
      '#title' => 'Display settings',
      '#description' => 'Settings for theme and layout',
  );
  $form['themesettings']['os2web_default_menu'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_default_menu','navigation'),
      '#title' => t('Default menu for first sidebar'),
      '#description' => t('Machine name for the menu to be inserted in blank left sidebars'),
  );
  
  // Proxy setups
  $form['os2web_pws_proxy_group'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => !variable_get('os2web_pws_proxy'),
      '#title' => t('Proxy configuration'),
      '#weight' => 10,
  );
  $form['os2web_pws_proxy_group']['os2web_pws_proxy'] = array(
      '#type' => 'checkbox',
      '#default_value' => variable_get('os2web_pws_proxy'),
      '#title' => t('Use proxy?'),
  );
  $form['os2web_pws_proxy_group']['os2web_pws_proxy_host'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_proxy_host'),
      '#title' => t('Proxy hostname or IP'),
  );
  $form['os2web_pws_proxy_group']['os2web_pws_proxy_port'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_proxy_port'),
      '#title' => t('Proxy port number.'),
  );

  // SOFD Integration settings
  $form['os2web_pws_sofd_group'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#title' => t('SOFD Integration settings'),
      '#weight' => 11,
  );
  $form['os2web_pws_sofd_group']['os2web_pws_v_meetings_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_v_meetings_url'),
      '#title' => t('Meeting (planned meetings) view url:'),
  );
  $form['os2web_pws_sofd_group']['os2web_pws_v_meetinggroups_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_v_meetinggroups_url'),
      '#title' => t('Meeting groups (is member of/follows/follows+) view url:'),
  );
  $form['os2web_pws_sofd_group']['os2web_pws_v_acadregroups_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_v_acadregroups_url'),
      '#title' => t('Acadre groups (committees) url:'),
  );
  return system_settings_form($form);
}
