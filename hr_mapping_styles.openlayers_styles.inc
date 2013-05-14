<?php
/**
 * @file
 * hr_mapping_styles.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function hr_mapping_styles_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'humanitarianresponse_default';
  $openlayers_styles->title = 'Humanitarianresponse Default';
  $openlayers_styles->description = 'Humanitarianresponse Default Style';
  $openlayers_styles->data = array(
    'pointRadius' => 6,
    'fillColor' => '#B82938',
    'strokeColor' => '#FFFFFF',
    'strokeWidth' => 1,
    'fillOpacity' => 0.25,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['humanitarianresponse_default'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'humanitarianresponse_select';
  $openlayers_styles->title = 'Humanitarianresponse Select';
  $openlayers_styles->description = 'Humanitarianresponse Select Style';
  $openlayers_styles->data = array(
    'pointRadius' => 6,
    'fillColor' => '#880C17',
    'strokeColor' => '#E6E7E8',
    'strokeWidth' => 1,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['humanitarianresponse_select'] = $openlayers_styles;

  return $export;
}
