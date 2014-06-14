<?php
/**
 * @file
 * recent_comments.features.inc
 */

/**
 * Implements hook_views_api().
 */
function recent_comments_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
