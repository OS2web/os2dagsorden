<?php
/**
 * @file
 * os2dagsorden_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2dagsorden_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/acadre';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'none';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => 1,
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '0',
    'javascript' => '',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2dagsorden_import_committees_list';
  $strongarm->value = '3,Sammenlægningsudvalget;
28,Direktionsmøde;
29,MT-HSU;
31,Børn og Unge udvalg;
34,Hovedudvalget (HU);
36,Rådhus MED-udvalg;
40,Skoleledermøde;
44,Direktions- og afdelingschefmøde;
51,Byrådet;
52,Valgbestyrelse ved kommunale valg;
53,Ældrerådet;
54,Arbejdsmarkedsudvalget (AU);
55,Udvalget for familie og institutioner (FI);
56,Udvalget for natur, teknik og miljø (NTM);
57,Udvalget for plan, udvikling og kultur (PUK);
58,Udvalget for sundhed, ældre og social (SÆ);
59,Økonomiudvalget (ØK);
61,Børn- og Ungeudvalget;
62,Frivillighedsrådet;
63,Handicaprådet;
64,Byrådets temamøder;
66,Huslejenævnet;
67,Beboerklagenævnet;
68,Udvalget til revision af Handicappolitik;
69,Kommunalt lægelige udvalg;';
  $export['os2dagsorden_import_committees_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2dagsorden_pws_v_acadregroups_url';
  $strongarm->value = '706dwweb01.intern.syddjurs.dk/OS2DagsordenDataService/OS2DagsordenDataService.asmx/GetXMLView?viewName=V_web_acadreGroups';
  $export['os2dagsorden_pws_v_acadregroups_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2dagsorden_pws_v_meetinggroups_url';
  $strongarm->value = '706dwweb01.intern.syddjurs.dk/OS2DagsordenDataService/OS2DagsordenDataService.asmx/GetXMLView?viewName=V_web_MeetingGroups';
  $export['os2dagsorden_pws_v_meetinggroups_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2dagsorden_pws_v_meetings_url';
  $strongarm->value = '706dwweb01.intern.syddjurs.dk/OS2DagsordenDataService/OS2DagsordenDataService.asmx/GetXMLView?viewName=V_web_Meetings';
  $export['os2dagsorden_pws_v_meetings_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'OS2dagsorden';
  $export['site_name'] = $strongarm;

  return $export;
}
