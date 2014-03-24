
(function ($) {

Drupal.manageMultipleTerms = Drupal.manageMultipleTerms || {};

Drupal.behaviors.manageMultipleTerms = {
  attach: function (context, settings) {
    $('.collapse-button').click(function() {
      var self = $(this);
      var tbody = $(this).closest('.manage-multiple-terms-table').find('tbody');
      if(tbody.hasClass('collapsed')) {
        tbody.slideDown(500, function() {
          $(this).removeClass('collapsed');
          self.html('Collapse');
        });
      }
      else {
        tbody.slideUp(500, function() {
          $(this).addClass('collapsed');
          self.html('Expand');
        });
      }
    });
    $('.add-term-button').click(function() {
      var closest_table = $(this).closest('table');
      var new_tr = closest_table.find('.term-row-template').clone();
      new_tr.removeClass('term-row-template');
      new_tr.addClass('draggable').addClass('vocabulary-items-table');
      new_tr.show();
      new_tr.find('.delete-term-button').click(function() {
        var tr = $(this).closest('tr').remove();
        return false;
      });      
      closest_table.append(new_tr);
      return false;
    });
    $('.delete-term-button').click(function() {
      var tr = $(this).closest('tr');
      var term_id = tr.find('input.term-id');
      var term_parent = tr.find('input.term-parent').val();
      var tid = term_id.val();
      tr.hide();
      tr.find('input.deletable-field').val('');
      var children = tr.closest('.manage-multiple-terms-table').find('input.term-parent[value="' + tid + '"]');
      var new_children = [];
      children.each(function() {
        $(this).val(term_parent);
        $(this).closest('td').find('.indentation:first-child').remove();
        $(this).closest('td').find('input.term-depth').each(function() {
          $(this).val($(this).val() - 1); 
        });
        var _tid = $(this).closest('td').find('input.term-id').val();
        var ch = tr.closest('.manage-multiple-terms-table').find('input.term-parent[value="' + _tid + '"]');
        ch.each(function() {
          new_children.push($(this));
        });
      });
      children = new_children;
      new_children = [];
      while(children.length) {
        $(children).each(function() {
          $(this).closest('td').find('.indentation:first-child').remove();
          $(this).closest('td').find('input.term-depth').each(function() {
            $(this).val($(this).val() - 1); 
          });
          var _tid = $(this).closest('td').find('input.term-id').val();
          var ch = tr.closest('.manage-multiple-terms-table').find('input.term-parent[value="' + _tid + '"]');
          ch.each(function() {
            new_children.push($(this));
          });
        });
        children = new_children;
        new_children = [];          
      };
      return false;
    });
  }
};
})(jQuery);
