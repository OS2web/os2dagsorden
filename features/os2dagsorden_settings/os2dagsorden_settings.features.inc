<?php
/**
* os2dagsorden_settings
*
* PHP version 5
*
* @category OS2Dagsorden
* @package  OS2Dagsorden_Importer
* @file     os2dagsorden_settings.features.inc
* @author   Stanislav Kutasevits <stan@bellcom.dk>
* @license  http://www.gnu.org/licenses/gpl-2.0.html GNU General Public License, version 2
* @link     http://bellcom.dk
*/

/**
 * Implements hook_ctools_plugin_api().
 */
function os2dagsorden_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}