<?php
/**
* os2dagsorden_settings
*
* PHP version 5
*
* @category OS2dagsorden
* @package  OS2dagsorden_Settings
* @file     Admin page file 
* @author   Stanislav Kutasevits <stan@bellcom.dk>
* @license  http://www.gnu.org/licenses/gpl-2.0.html GNU General Public License, version 2
* @link     http://bellcom.dk
*/

define('ACADRE_MM_IMPORT_DIR', 'private://');
define('OS2DAGSORDEN_HIDDEN_AGENGA_COMMITTEE', '28');

/**
 * Implementation of settings form specifically for OS2dagsorden system.
 *
 * @param $form       the settings form
 * @param $form_state the state of the form
 *
 * @return settings form.
 */
function os2dagsorden_settings_settings_form($form, $form_state) {
  // SOFD Integration settings
  $form['os2dagsorden_pws_sofd_group'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#title' => t('SOFD Integration settings'),
  );
  $form['os2dagsorden_pws_sofd_group']['os2dagsorden_pws_use_local_copy'] = array(
      '#type' => 'checkbox',
      '#default_value' => variable_get('os2dagsorden_pws_use_local_copy'),
      '#title' => t('Use local XML files'), 
      '#description' => variable_get('os2dagsorden_pws_use_local_copy') ? 'Diselect and click save to enable the fields below' : 'Selecting and clicking save will disable the textfields below'
  );
  $form['os2dagsorden_pws_sofd_group']['os2dagsorden_pws_v_meetings_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2dagsorden_pws_v_meetings_url'),
      '#title' => t('Meeting (planned meetings) view url:'),
      '#maxlength' => 256, 
      '#disabled' => variable_get('os2dagsorden_pws_use_local_copy'),
  );
  $form['os2dagsorden_pws_sofd_group']['os2dagsorden_pws_v_meetinggroups_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2dagsorden_pws_v_meetinggroups_url'),
      '#title' => t('Meeting groups (is member of/follows/follows+) view url:'),
      '#maxlength' => 256, 
      '#disabled' => variable_get('os2dagsorden_pws_use_local_copy'),
  );
  $form['os2dagsorden_pws_sofd_group']['os2dagsorden_pws_v_acadregroups_url'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('os2dagsorden_pws_v_acadregroups_url'),
      '#title' => t('Acadre groups (committees) url:'),
      '#maxlength' => 256, 
      '#disabled' => variable_get('os2dagsorden_pws_use_local_copy'),
  );
  
  //cron frequencies
  $form['os2dagsorden_cron_job_freq'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#title' => t('Cron job frequencies settings'),
  );
  
  $options = array(
    '*/5 * * * *' => 'Every 5 min',
    '*/15 * * * *' => 'Every 15 min',
    '*/30 * * * *' => 'Every 30 min',
    '0 */1 * * *' => 'Every 1 hour',
    '0 */2 * * *' => 'Every 2 hours',
    '0 */3 * * *' => 'Every 3 hours',
    '0 */5 * * *' => 'Every 5 hours',
    '0 */10 * * *' => 'Every 10 hours',
  );
  $conf = ultimate_cron_get_settings("os2dagsorden_importer_cron");
  $form['os2dagsorden_cron_job_freq']['os2dagsorden_importer_cron'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => isset($conf['rules'])? implode(';', $conf['rules']) : variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE),
      '#title' => t('Frequency of SOFD import cron job'),
  );
  
  $conf = ultimate_cron_get_settings("os2web_esdh_provider_cron");
  $form['os2dagsorden_cron_job_freq']['os2web_esdh_provider_cron'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => isset($conf['rules'])? implode(';', $conf['rules']) : variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE),
      '#title' => t('Frequency of Acadre import cron job'),
  );
  
  $conf = ultimate_cron_get_settings("os2dagsorden_pdf2htmlex_cron");
  $form['os2dagsorden_cron_job_freq']['os2dagsorden_pdf2htmlex_cron'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => isset($conf['rules'])? implode(';', $conf['rules']) : variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE),
      '#title' => t('Frequency of PDF to HTML conversion cron job'), 
  );
  
  $conf = ultimate_cron_get_settings("os2dagsorden_adlib_api_cron");
  $form['os2dagsorden_cron_job_freq']['os2dagsorden_adlib_api_cron'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => isset($conf['rules'])? implode(';', $conf['rules']) : variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE),
      '#title' => t('Frequency of Adlib (* to PDF) conversion cron job'), 
  );
  
  $form['os2dagsorden_hidden_agenda_committee'] = array(
    '#type' => 'textfield',
    '#title' => 'List of committees which agenda is completely hidden to those without the rights',
    '#maxlength' => 200,
    '#description' => 'Comma-separated list of committees ID which agenda and the summary (samlet dokument) is hidden to those without the rights',
    '#default_value' => variable_get('os2dagsorden_hidden_agenda_committee', OS2DAGSORDEN_HIDDEN_AGENGA_COMMITTEE),
  );
  
  $form['#submit'][] = 'os2dagsorden_settings_cron_job_submit';
  
  return system_settings_form($form);
}

/**
 * Hook to system for submit. Stores the frequencies of the cronjob if they are different from the default provided by ultimate cron module
 *
 * @param $form       the settings form
 * @param $form_state the state of the form
 *
 * @return none.
 */
function os2dagsorden_settings_cron_job_submit($form, &$form_state){
  $input = $form_state['input'];
  
  //os2dagsorden_importer_cron
  $conf = _ultimate_cron_default_settings();
  if (!empty($input['os2dagsorden_importer_cron']) && $input['os2dagsorden_importer_cron'] !== variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE))
    $conf['rules'][0] = $input['os2dagsorden_importer_cron'];
  else
    unset($conf['rules']);
  $conf['service_group'] = "";
  ultimate_cron_set_settings('os2dagsorden_importer_cron', $conf);
  
  //os2web_esdh_provider_cron
  $conf = _ultimate_cron_default_settings();
  if (!empty($input['os2web_esdh_provider_cron']) && $input['os2web_esdh_provider_cron'] !== variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE))
    $conf['rules'][0] = $input['os2web_esdh_provider_cron'];
  else
    unset($conf['rules']);
  $conf['service_group'] = "";
  ultimate_cron_set_settings('os2web_esdh_provider_cron', $conf);
  
  //os2dagsorden_pdf2htmlex_cron
  $conf = _ultimate_cron_default_settings();
  if (!empty($input['os2dagsorden_pdf2htmlex_cron']) && $input['os2dagsorden_pdf2htmlex_cron'] !== variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE))
    $conf['rules'][0] = $input['os2dagsorden_pdf2htmlex_cron'];
  else
    unset($conf['rules']);
  $conf['service_group'] = "";
  ultimate_cron_set_settings('os2dagsorden_pdf2htmlex_cron', $conf);
  
  //os2dagsorden_adlib_api_cron
  $conf = _ultimate_cron_default_settings();
  if (!empty($input['os2dagsorden_adlib_api_cron']) && $input['os2dagsorden_adlib_api_cron'] !== variable_get('ultimate_cron_rule', ULTIMATE_CRON_RULE))
    $conf['rules'][0] = $input['os2dagsorden_adlib_api_cron'];
  else
    unset($conf['rules']);
  $conf['service_group'] = "";
  ultimate_cron_set_settings('os2dagsorden_adlib_api_cron', $conf);
}