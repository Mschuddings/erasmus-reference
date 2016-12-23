<?php
/**
 * @file
 * erasmus_30_year_anniversary_partner.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function erasmus_30_year_anniversary_partner_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_erasmus_30_year_anniversary_part';
  $strongarm->value = '0';
  $export['comment_anonymous_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_erasmus_30_year_anniversary_part';
  $strongarm->value = 1;
  $export['comment_default_mode_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_erasmus_30_year_anniversary_part';
  $strongarm->value = '50';
  $export['comment_default_per_page_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_erasmus_30_year_anniversary_part';
  $strongarm->value = '1';
  $export['comment_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_erasmus_30_year_anniversary_part';
  $strongarm->value = 1;
  $export['comment_form_location_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_erasmus_30_year_anniversary_part';
  $strongarm->value = '1';
  $export['comment_preview_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_erasmus_30_year_anniversary_part';
  $strongarm->value = 1;
  $export['comment_subject_field_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__erasmus_30_year_anniversary_part';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'newsroom_event' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'workbench_access' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_erasmus_30_year_anniversary_part';
  $strongarm->value = '4';
  $export['language_content_type_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_erasmus_30_year_anniversary_part';
  $strongarm->value = array();
  $export['menu_options_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_erasmus_30_year_anniversary_part';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_erasmus_30_year_anniversary_part';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_erasmus_30_year_anniversary_part';
  $strongarm->value = '1';
  $export['node_preview_erasmus_30_year_anniversary_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_erasmus_30_year_anniversary_part';
  $strongarm->value = 0;
  $export['node_submitted_erasmus_30_year_anniversary_part'] = $strongarm;

  return $export;
}