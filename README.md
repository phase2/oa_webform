# Atrium Webform

Provides Open Atrium integration for the [Webform module](https://www.drupal.org/project/webform).

## Functionality

* Webform content type exported as features configuration
* Fields necessary for Spaces & Sections integration
* Settings necessary for Panels integration on the Webform node
* Standard Atrium editor experience for content creation
* "Other" custom fill-in option for select/checkbox widgets
* [Honeypot module](https://www.drupal.org/project/honeypot) configured to provide basic form security.

## Compatibility

The Honeypot module introduces a field to all configured forms (for our purpose,
**all webforms**) to attract bots that blindly fill in the form. If this is done,
it blocks the form submission, acting as a low-impact CAPTCHA that users never see.

Validation is in place to avoid conflicts for new webform components matching
the currently configured honeypot element, which at the time of this writing is
`url`.

## Todos

* Add panelizer settings after the fashion of OA Events or OA Wiki.
* Check on general appearance of form elements.
* Check on general appearance of webform submissions.
* Configure honeypot.
