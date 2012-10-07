<?php
/**
 * @file
 * os2dagsorden_blocks_positioning.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2dagsorden_blocks_positioning_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_calendar_block';
  $context->description = 'Sidepane and the calendar block. Will be shown everywhere except the month view of a big calendar, and the pages with text (attachments).';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~calendar-field-date/month*' => '~calendar-field-date/month*',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu-menu-sidepane-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sidepane-menu',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-user_committee-block_1' => array(
          'module' => 'views',
          'delta' => 'user_committee-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-user_follow_committees-block_1' => array(
          'module' => 'views',
          'delta' => 'user_follow_committees-block_1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views--exp-meetings_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-meetings_search-page',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sidepane and the calendar block. Will be shown everywhere except the month view of a big calendar, and the pages with text (attachments).');
  $export['os2dagsorden_calendar_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_content';
  $context->description = 'content is shown everywhere';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content is shown everywhere');
  $export['os2dagsorden_content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_front_page';
  $context->description = 'Front page blocks positioning';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-bae826754ab8812775bd594878d7fdb1' => array(
          'module' => 'views',
          'delta' => 'bae826754ab8812775bd594878d7fdb1',
          'region' => 'content',
          'weight' => '-21',
        ),
        'views-c8c6c91b397acf23018fcefd40a1fa29' => array(
          'module' => 'views',
          'delta' => 'c8c6c91b397acf23018fcefd40a1fa29',
          'region' => 'content',
          'weight' => '-20',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page blocks positioning');
  $export['os2dagsorden_front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_login_block';
  $context->description = 'shown only to the unauthorized users';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('shown only to the unauthorized users');
  $export['os2dagsorden_login_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_show_hide_menu';
  $context->description = 'show or hides the side pane';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('show or hides the side pane');
  $export['os2dagsorden_show_hide_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_sidepane';
  $context->description = 'Will be shown on calendar month view only. Other time os2web_calendar (sidepane included will be shown))';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'calendar-field-date/month*' => 'calendar-field-date/month*',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-sidepane-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sidepane-menu',
          'region' => 'sidebar_second',
          'weight' => '-22',
        ),
        'views-user_committee-block_1' => array(
          'module' => 'views',
          'delta' => 'user_committee-block_1',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'views-user_follow_committees-block_1' => array(
          'module' => 'views',
          'delta' => 'user_follow_committees-block_1',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
        'views--exp-meetings_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-meetings_search-page',
          'region' => 'sidebar_second',
          'weight' => '-19',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Will be shown on calendar month view only. Other time os2web_calendar (sidepane included will be shown))');
  $export['os2dagsorden_sidepane'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2dagsorden_user_logout';
  $context->description = 'Modified log out menu';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_logout_menu-block' => array(
          'module' => 'views',
          'delta' => 'user_logout_menu-block',
          'region' => 'menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Modified log out menu');
  $export['os2dagsorden_user_logout'] = $context;

  return $export;
}
