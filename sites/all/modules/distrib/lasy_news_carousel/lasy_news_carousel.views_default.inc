<?php
/**
 * @file
 * lasy_news_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lasy_news_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'test_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'test_carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Останнi новини';
  $handler->display->display_options['css_class'] = 'item-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скинути';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '4';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 0;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Поле: Матеріал: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Матеріал: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Матеріал: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  /* Filter criterion: Матеріал: Опубліковано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Матеріал: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Матеріал: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Матеріал: зображення для новини */
  $handler->display->display_options['fields']['field_news_picture']['id'] = 'field_news_picture';
  $handler->display->display_options['fields']['field_news_picture']['table'] = 'field_data_field_news_picture';
  $handler->display->display_options['fields']['field_news_picture']['field'] = 'field_news_picture';
  $handler->display->display_options['fields']['field_news_picture']['label'] = '';
  $handler->display->display_options['fields']['field_news_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_picture']['alter']['text'] = '<div class="item-content">
<div class="link-holder">
                                    <div class="portfolio-item-holder">
                                        <div class="portfolio-item-hover-content">
    
                                            <a href="/specschool/sites/all/themes/simplecorp/images/sampleimages/portfolio-img-1.jpg" title="title" data-rel="prettyPhoto" class="zoom" style="top: 150%;">View Image</a>
                                            
                                           [field_news_picture]  
                                            
                                            <div class="hover-options" style="opacity: 0;"></div>
                                        </div>
                                    </div>
                                    <div class="description">
                                        <p>
                                            <a href="#" title="title">[title]</a>
                                        </p>
                                    </div>
                                </div>
</div>';
  $handler->display->display_options['fields']['field_news_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_picture']['settings'] = array(
    'image_style' => 'last_news_style',
    'image_link' => '',
  );
  /* Поле: Матеріал: Посилання */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Матеріал: Опубліковано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Матеріал: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Матеріал: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-5 days';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $translatables['test_carousel'] = array(
    t('Master'),
    t('Останнi новини'),
    t('more'),
    t('Apply'),
    t('Скинути'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Все'),
    t('Block'),
    t('<div class="item-content">
<div class="link-holder">
                                    <div class="portfolio-item-holder">
                                        <div class="portfolio-item-hover-content">
    
                                            <a href="/specschool/sites/all/themes/simplecorp/images/sampleimages/portfolio-img-1.jpg" title="title" data-rel="prettyPhoto" class="zoom" style="top: 150%;">View Image</a>
                                            
                                           [field_news_picture]  
                                            
                                            <div class="hover-options" style="opacity: 0;"></div>
                                        </div>
                                    </div>
                                    <div class="description">
                                        <p>
                                            <a href="#" title="title">[title]</a>
                                        </p>
                                    </div>
                                </div>
</div>'),
    t('Посилання'),
    t('Updated date'),
  );
  $export['test_carousel'] = $view;

  return $export;
}
