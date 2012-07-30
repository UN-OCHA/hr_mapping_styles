<?php
/**
 * @file
 * hr_mapping_styles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_mapping_styles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_default_map';
  $strongarm->value = 'humanitarianresponse_default';
  $export['openlayers_default_map'] = $strongarm;

  return $export;
}
