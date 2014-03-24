<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
    <?php $toolClass = ( ($id+1)%2 == 0) ? "last" : ""; ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] . ' ' .$toolClass . '"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>