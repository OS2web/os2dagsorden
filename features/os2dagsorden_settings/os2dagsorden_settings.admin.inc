<?php
/**
* os2dagsorden_settings
*
* PHP version 5
*
* @category OS2Dagsorden
* @package  OS2Dagsorden_Settings
* @file     Admin page file 
* @author   Stanislav Kutasevits <stan@bellcom.dk>
* @license  http://www.gnu.org/licenses/gpl-2.0.html GNU General Public License, version 2
* @link     http://bellcom.dk
*/

/**
 * Implementation of settings form specifically for OS2Dagsorden system.
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
      '#weight' => 11,
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
  
  return system_settings_form($form);
}
