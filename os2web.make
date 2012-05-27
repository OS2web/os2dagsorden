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

libraries[poshytip][download][type] = "get"
libraries[poshytip][download][url] = "http://vadikom.com/files/?file=poshytip/poshytip-1.1.zip"
libraries[poshytip][directory_name] = "poshy_tip"
libraries[poshytip][destination] = "libraries"

libraries[solr-php-client][download][type] = "get"
libraries[solr-php-client][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.zip"
libraries[solr-php-client][directory_name] = "SolrPhpClient"
libraries[solr-php-client][destination] = "libraries"

; Contrib modules
projects[features][subdir] = "contrib"
;projects[features][version] = "1.0-rc1"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0-rc1"

projects[jcarousel][subdir] = "contrib"
projects[jcarousel][version] = "2.6"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0"

projects[views][subdir] = "contrib"
projects[views][version] = "3.3"


; TODO: Mangler versionslås
projects[ldap][subdir] = "contrib"
projects[job_scheduler][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[field_slideshow][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[forward][subdir] = "contrib"
projects[webform][subdir] = "contrib"

projects[media][subdir] = "contrib"
;projects[media][version] = "2.0-unstable3"
projects[media_browser_plus][subdir] = "contrib"
projects[media_browser_plus][version] = "1.0-beta3"

projects[media_youtube][subdir] = "contrib"

projects[panels][subdir] = "contrib"
projects[references][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"
;projects[wsclient][subdir] = "contrib"
projects[plupload][subdir] = "contrib"
projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources_plupload][subdir] = "contrib"
projects[image_url_formatter][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[content_taxonomy][subdir] = "contrib"
projects[autocomplete_deluxe][subdir] = "contrib"
projects[menuux][subdir] = "contrib"

projects[workbench][subdir] = "contrib"
projects[workbench_files][subdir] = "contrib"
projects[workbench_media][subdir] = "contrib"
projects[workbench_access][subdir] = "contrib"

; Fra Franz:
projects[wysiwyg][subdir] = "contrib"
projects[skinr][subdir] = "contrib"
projects[ckeditor][subdir] = "contrib"
projects[menu_block][subdir] = "contrib"
projects[delta][subdir] = "contrib"
projects[float_filter][subdir] = "contrib"
projects[omega_tools][subdir] = "contrib"
projects[jquery_ui][subdir] = "contrib"
projects[megamenu][subdir] = "contrib"
projects[better_formats][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[rel][subdir] = "contrib"

projects[job_scheduler][subdir] = "contrib"
;projects[job_scheduler][version] = "2.0-alpha2"

projects[admin][subdir] = "contrib"
projects[context_menu_block][subdir] = "contrib"
projects[disable_messages][subdir] = "contrib"
projects[ds][subdir] = "contrib"
projects[globalredirect][subdir] = "contrib"
projects[i18n][subdir] = "contrib"
projects[job_scheduler][subdir] = "contrib"
projects[l10n_client][subdir] = "contrib"
projects[l10n_update][subdir] = "contrib"
projects[menu_minipanels][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[print][subdir] = "contrib"
projects[taxonomy_menu][subdir] = "contrib"
projects[token][subdir] = "contrib"

projects[prepopulate][subdir] = "contrib"
projects[calendar][subdir] = "contrib"
projects[calendar][version] = "3.3"

projects[imagefield_crop][subdir] = "contrib"
projects[linkit][subdir] = "contrib"

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
projects[file_entity][subdir] = "contrib"

projects[computed_field][subdir] = "contrib"

projects[better_exposed_filters][subdir] = "contrib"
projects[poshy_tip][subdir] = "contrib"
projects[views_php][subdir] = "contrib"

projects[search_log][subdir] = "contrib"

projects[fontyourface][subdir] = "contrib"
projects[nice_menus][subdir] = "contrib"
projects[special_menu_items][subdir] = "contrib"

; Morten, Rolr
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][version] = "1.0-beta19"
projects[apachesolr_autocomplete][subdir] = "contrib"
projects[apachesolr_autocomplete][version] = "1.2"
projects[apachesolr_attachments][subdir] = "contrib"
projects[apachesolr_attachments][version] = "1.0"

; Themes

projects[rubik][version] = "4.0-beta8"
projects[tao][version] = "3.0-beta4"

