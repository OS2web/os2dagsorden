api = 2
core = 7.x

; Libraries

libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

libraries[jcycle][download][type] = "get"
libraries[jcycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"
libraries[jcycle][directory_name] = "jquery.cycle"
libraries[jcycle][destination] = "libraries"

libraries[jcarousel][download][type] = "get"
libraries[jcarousel][download][url] = "http://sorgalla.com/projects/download-zip.php?jcarousel"
libraries[jcarousel][directory_name] = "jquery.jcarousel"
libraries[jcarousel][destination] = "libraries"

libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/downloads/moxiecode/plupload/plupload_1_5_2.zip"
libraries[plupload][directory_name] = "plupload"
libraries[plupload][destination] = "libraries"

libraries[markitup][download][type] = "get"
libraries[markitup][download][url] = "http://markitup.jaysalvat.com/downloads/download.php?id=releases/latest"
libraries[markitup][directory_name] = "markitup"
libraries[markitup][destination] = "libraries"

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://cloud.github.com/downloads/tinymce/tinymce/tinymce_3.5b3.zip"
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][destination] = "libraries"

libraries[qtip][download][type] = "get"
libraries[qtip][download][url] = "https://raw.github.com/bellcom/qTip1/master/1.0.0-rc3/jquery.qtip-1.0.0-rc3.min.js"
libraries[qtip][directory_name] = "qtip"
libraries[qtip][destination] = "libraries"

; Removed for breaking IE
;libraries[poshytip][download][type] = "get"
;libraries[poshytip][download][url] = "http://vadikom.com/files/?file=poshytip/poshytip-1.1.zip"
;libraries[poshytip][directory_name] = "poshy_tip"
;libraries[poshytip][destination] = "libraries"

libraries[solr-php-client][download][type] = "get"
libraries[solr-php-client][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip"
libraries[solr-php-client][directory_name] = "SolrPhpClient"
libraries[solr-php-client][destination] = "libraries"

; Contrib modules

; Features + related
projects[features][subdir] = "contrib"
projects[features][version] = "1.0-rc2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0-rc1"

;Views
projects[views][subdir] = "contrib"
projects[views][version] = "3.3"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.0-rc1"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0"

projects[views_php][subdir] = "contrib"
projects[views_php][version] = "1.x-dev"

projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][version] = "3.0-beta1"

; Panels
projects[panels][subdir] = "contrib"
projects[panels][version] = "3.2"

projects[menu_minipanels][subdir] = "contrib"
projects[menu_minipanels][version] = "1.0-rc6"

; Media
projects[media][subdir] = "contrib"
projects[media][version] = "1.1"

projects[media_browser_plus][subdir] = "contrib"
projects[media_browser_plus][version] = "1.x-dev"

projects[multiform][subdir] = "contrib"
projects[multiform][version] = "1.0"

projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = "1.0-beta3"

; Files
projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources][version] = "1.4"

projects[filefield_sources_plupload][subdir] = "contrib"
projects[filefield_sources_plupload][version] = "1.x-dev"

; Workbench
projects[workbench][subdir] = "contrib"
projects[workbench][version] = "1.1"

projects[workbench_files][subdir] = "contrib"
projects[workbench_files][version] = "1.0"

projects[workbench_media][subdir] = "contrib"
projects[workbench_media][version] = "1.0"

projects[workbench_access][subdir] = "contrib"
projects[workbench_access][version] = "1.0"


; Basic
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[date][subdir] = "contrib"
projects[date][version] = "2.5"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-rc3"

projects[ldap][subdir] = "contrib"
projects[ldap][version] = "1.0-beta10"

projects[references][subdir] = "contrib"
projects[references][version] = "2.0"

projects[jquery_ui][subdir] = "contrib"
projects[jquery_ui][version] = "1.x-dev"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta3"

projects[admin][subdir] = "contrib"
projects[admin][version] = "2.0-beta3"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.1"

projects[print][subdir] = "contrib"
projects[print][version] = "1.1"

projects[calendar][subdir] = "contrib"
projects[calendar][version] = "3.3"

; Misc
projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.x-dev"

projects[jcarousel][subdir] = "contrib"
projects[jcarousel][version] = "2.6"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"

projects[field_slideshow][subdir] = "contrib"
projects[field_slideshow][version] = "1.6"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "1.0"

; projects[forward][subdir] = "contrib"
; projects[forward][version] = "1.3"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.17"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.1"

projects[plupload][subdir] = "contrib"
projects[plupload][version] = "1.0"

projects[image_url_formatter][subdir] = "contrib"
projects[image_url_formatter][version] = "1.0"

projects[content_taxonomy][subdir] = "contrib"
projects[content_taxonomy][version] = "1.0-beta1"

projects[autocomplete_deluxe][subdir] = "contrib"
projects[autocomplete_deluxe][version] = "1.0-beta5"

projects[menuux][subdir] = "contrib"
projects[menuux][version] = "1.0-beta2"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.1"

; projects[skinr][subdir] = "contrib"
; projects[skinr][version] = "2.0-beta1"

projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = "2.3"

projects[delta][subdir] = "contrib"
projects[delta][version] = "3.0-beta9"

projects[float_filter][subdir] = "contrib"
projects[float_filter][version] = "1.0"

projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = "3.0-rc4"

; projects[megamenu][subdir] = "contrib"
; projects[megamenu][version] = "1.x-dev"

projects[rel][subdir] = "contrib"
projects[rel][version] = "1.0-alpha1"

projects[context_menu_block][subdir] = "contrib"
projects[context_menu_block][version] = "3.1-beta2"

projects[disable_messages][subdir] = "contrib"
projects[disable_messages][version] = "1.0"

projects[ds][subdir] = "contrib"
projects[ds][version] = "1.5"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.4"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.5"

projects[l10n_client][subdir] = "contrib"
projects[l10n_client][version] = "1.1"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.0-beta3"

projects[taxonomy_menu][subdir] = "contrib"
projects[taxonomy_menu][version] = "1.2"

projects[token][subdir] = "contrib"
projects[token][version] = "1.1"

projects[prepopulate][subdir] = "contrib"
projects[prepopulate][version] = "2.x-dev"

projects[imagefield_crop][subdir] = "contrib"
projects[imagefield_crop][version] = "1.0"

projects[linkit][subdir] = "contrib"
projects[linkit][version] = "2.5"

; projects[hierarchical_select][subdir] = "contrib"
; projects[hierarchical_select][version] = "3.0-alpha5"

; projects[subdomain][subdir] = "contrib"
; projects[subdomain][version] = "2.0-beta2"

projects[multistep][subdir] = "contrib"
projects[multistep][version] = "1.x-dev"
; patch from fix in http://drupal.org/node/1065458
projects[multistep][patch][] = "http://drupal.org/files/multistep_limit_validations2.patch"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha4"
; Patch to support import of hierarchical taxonomy terms
projects[feeds][patch][] = "http://drupal.org/files/issues/feeds_hierarchical_term_processor-1152940-23.patch"
; Patch to support text format (eg. html) when importing to custom taxonomy term fields
projects[feeds][patch][] = "http://drupal.org/files/feeds-taxonomy-text-format-1466170-1.patch"

projects[feeds_xpathparser][subdir] = "contrib"
projects[feeds_xpathparser][version] = "1.0-beta3"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.0-rc1"

projects[computed_field][subdir] = "contrib"
projects[computed_field][version] = "1.0-beta1"

; Removed for breaking IE
; projects[poshy_tip][subdir] = "contrib"
; projects[poshy_tip][version] = "1.0-beta1"

projects[search_api][subdir] = "contrib"
projects[search_api][version] = "1.1"

projects[search_log][subdir] = "contrib"
projects[search_log][version] = "1.0"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.3"

projects[nice_menus][subdir] = "contrib"
projects[nice_menus][version] = "2.1"

projects[special_menu_items][subdir] = "contrib"
projects[special_menu_items][version] = "1.0"

projects[cookiecontrol][subdir] = "contrib"
projects[cookiecontrol][version] = "1.5"



; Solr and search
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][version] = "1.0-beta19"

projects[apachesolr_views][subdir] = "contrib"
projects[apachesolr_views][version] = "1.0-beta1"

; projects[apachesolr_autocomplete][subdir] = "contrib"
; projects[apachesolr_autocomplete][version] = "1.2"

projects[apachesolr_attachments][subdir] = "contrib"
projects[apachesolr_attachments][version] = "1.0"

projects[facetapi][subdir] = "contrib"
projects[facetapi][version] = "1.0-rc4"

projects[facetapi_pretty_paths][subdir] = "contrib"
projects[facetapi_pretty_paths][version] = "1.0-alpha3"

projects[facetapi_slider][subdir] = "contrib"
projects[facetapi_slider][version] = "1.x-dev"

projects[inline_ajax_search][subdir] = "contrib"
projects[inline_ajax_search][version] = "1.x-dev"

projects[search_api_autocomplete][subdir] = "contrib"
projects[search_api_autocomplete][version] = "1.x-dev"

projects[search_api_live_results][subdir] = "contrib"
projects[search_api_live_results][version] = "1.x-dev"

projects[search_api_page][subdir] = "contrib"
projects[search_api_page][version] = "1.0-beta2"

projects[search_api_solr][subdir] = "contrib"
projects[search_api_solr][version] = "1.0-rc1"

projects[search_facetapi][subdir] = "contrib"
projects[search_facetapi][version] = "1.0-beta1"

projects[custom_search][subdir] = "contrib"
projects[custom_search][version] = "1.9"

projects[chart][subdir] = "contrib"
projects[chart][version] = "1.1"

; Themes

projects[rubik][version] = "4.0-beta8"
projects[tao][version] = "3.0-beta4"
