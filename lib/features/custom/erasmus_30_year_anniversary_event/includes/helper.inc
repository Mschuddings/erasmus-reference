<?php
/**
 * @file
 * Helper file.
 */

/**
 * Will count the participants and add them.
 */
function _erasmus_30_year_anniversary_event_count_participants_per_country($results) {
  $participants = 0;
  $events = count($results);
  foreach ($results as $result) {
    $nid = $result->nid;
    $field_value = db_select('field_data_field_30ya_expected_participants', 'f')
      ->fields('f', array('field_30ya_expected_participants_value'))
      ->condition('entity_id', $nid)
      ->condition('deleted', 0)
      ->execute()
      ->fetchField();
    $participants += $field_value;
  }

  return theme('erasmus_30_year_anniversary_event_header',
    [
      'countries' => NULL,
      'events' => $events,
      'participants' => $participants,
    ]
  );
}

/**
 * Counts all the events and participants of all events.
 */
function _erasmus_30_year_anniversary_event_retrieve_global_event_block_content() {
  $participants = 0;
  $query = db_select('field_data_field_30ya_expected_participants', 'u')
    ->fields('u', array('field_30ya_expected_participants_value'));
  $result = $query->execute();
  foreach ($result as $record) {
    $participants += $record->field_30ya_expected_participants_value;
  }

  $query_event = db_select('node', 'n')
    ->condition('n.type', 'erasmus_30ya_event')
    ->condition('n.status', 1);
  $amount_of_events = $query_event->countQuery()->execute()->fetchField();

  return theme('erasmus_30_year_anniversary_event_header',
    [
      'countries' => '33',
      'events' => $amount_of_events,
      'participants' => $participants,
    ]
  );
}