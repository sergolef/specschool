<?php
/**
 * @file
 * lasy_news_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function lasy_news_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function lasy_news_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: last_news_style.
  $styles['last_news_style'] = array(
    'name' => 'last_news_style',
    'label' => 'last_news_style',
    'effects' => array(
      2 => array(
        'label' => 'Масштабування і кадрування',
        'help' => 'Масштабування і кадрування збереже співвідношення сторін вихідного зображення, обрізавши лише більший розмір. Це найкращий спосіб отримати квадратні мініатюри без спотворення зображення.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function lasy_news_carousel_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Новини'),
      'base' => 'node_content',
      'description' => t('Шкiльнi новини'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  return $items;
}
