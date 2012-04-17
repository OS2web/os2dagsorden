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

libraries[markitdown][download][type] = "get"
libraries[markitdown][download][url] = "http://markitup.jaysalvat.com/downloads/download.php?id=releases/latest"
libraries[markitdown][directory_name] = "markitdown"
libraries[markitdown][destination] = "libraries"

libraries[qtip][download][type] = "get"
libraries[qtip][download][url] = "http://craigsworks.com/projects/qtip/download/package/development/"
libraries[qtip][directory_name] = "qtip"
libraries[qtip][destination] = "libraries"

; Contrib modules
projects[features][subdir] = "contrib"
projects[features][version] = "1.0-rc1"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0-beta5"

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
projects[media][subdir] = "contrib"
projects[media_youtube][subdir] = "contrib"
projects[panels][subdir] = "contrib"
projects[references][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"
;projects[wsclient][subdir] = "contrib"
projects[plupload][subdir] = "contrib"
projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources_plupload][subdir] = "contrib"
projects[workbench][subdir] = "contrib"
projects[workbench_files][subdir] = "contrib"
projects[workbench_access][subdir] = "contrib"
projects[image_url_formatter][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[content_taxonomy][subdir] = "contrib"
projects[autocomplete_deluxe][subdir] = "contrib"

; Fra Franz:
projects[wysiwyg][subdir] = "contrib"
projects[skinr][subdir] = "contrib"
projects[ckeditor][subdir] = "contrib"
projects[menu_block][subdir] = "contrib"
projects[delta][subdir] = "contrib"
projects[float_filter][subdir] = "contrib"
projects[omega_tools][subdir] = "contrib"
projects[jquery_ui][subdir] = "contrib"
projects[multistep][subdir] = "contrib"
projects[megamenu][subdir] = "contrib"
projects[better_formats][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[rel][subdir] = "contrib"
projects[job_scheduler][subdir] = "contrib"

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



projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha4"
; Patch to support import of hierarchical taxonomy terms
projects[feeds][patch][] = "http://drupal.org/files/issues/feeds_hierarchical_term_processor-1152940-23.patch"
; Patch to support text format (eg. html) when importing to custom taxonomy term fields
projects[feeds][patch][] = "http://drupal.org/files/feeds-taxonomy-text-format-1466170-1.patch"

projects[feeds_xpathparser][subdir] = "contrib"
projects[feeds_xpathparser][version] = "1.0-beta3"

; Themes

projects[rubik][version] = "4.0-beta8"
projects[tao][version] = "3.0-beta4"

