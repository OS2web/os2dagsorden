<?php

// $Id$
/*
 * 
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */


function os2web_pws_config_form($form, &$form_state) {
  $form['os2web_pws_config_group'] = array(
      '#type' => 'fieldset',
      '#title' => t('PWS Endpoint configuration'),
  );
  $form['os2web_pws_config_group']['os2web_pws_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_url'),
      '#title' => t('PWS URL for V4'),
      '#description' => t('URL to the PWS webservice endpoint.'),
  );
  $form['os2web_pws_config_group']['os2web_pws_url_v6'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_url_v6'),
      '#title' => t('PWS URL for  V6'),
      '#description' => t('URL to the PWSv6 webservice endpoint.'),
  );
  $form['os2web_pws_config_group']['os2web_pws_url_search'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_url_search'),
      '#title' => t('PWS URL for Search service'),
      '#description' => t('URL to the webservice endpoint that runs the search service.'),
  );
  $form['os2web_pws_config_group']['os2web_pws_user'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_user'),
      '#title' => t('PWS login user'),
      '#description' => t('PWS HTTP authentification user.'),
  );
  $form['os2web_pws_config_group']['os2web_pws_password'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_pws_password'),
      '#title' => t('PWS password'),
      '#description' => t('PWS HTTP authentification password.'),
  );

  $form['os2web_pws_adlib_group'] = array(
      '#type' => 'fieldset',
      '#title' => t('Adlib Endpoint configuration'),
  );
  $form['os2web_pws_adlib_group']['os2web_adlib_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2web_adlib_url','http://706CAR01/ExponentWSA/ExponentWSA.asmx?wsdl'),
      '#title' => t('URL for Adlib service endpoint'),
      '#description' => t('URL to the webservice endpoint that runs the Adlib service.'),
  );


  $form['os2web_pws_proxy_group'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => !variable_get('os2web_pws_proxy'),
      '#title' => t('Proxy configuration'),
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

  return system_settings_form($form);
}

