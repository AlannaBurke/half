<?php
/**
 * @file
 * media_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function media_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
