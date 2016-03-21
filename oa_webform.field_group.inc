<?php
/**
 * @file
 * oa_webform.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function oa_webform_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oa_access|node|webform|form';
  $field_group->group_name = 'group_oa_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '6',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'oa_section_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Access',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-oa-access field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_oa_access|node|webform|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');

  return $field_groups;
}
