api = 2
core = 7.x

defaults[projects][subdir] = "contrib"
defaults[projects][type] = "module"

projects[webform][version] = 4.12
projects[select_or_other][version] = 2.22
projects[honeypot][version] = 1.22

projects[og_webform][version] = 1.x-dev
projects[og_webform][download][type] = git
projects[og_webform][download][url] = https://git.drupal.org/project/og_webform.git
projects[og_webform][download][branch] = 7.x-1.x
; Unmaintained module, need to patch against HEAD.
projects[og_webform][download][revision] = b60f03a
; Update for OG 2.x access API.
projects[og_webform][patches][1946432] = https://www.drupal.org/files/og_webform_api2-1946432_0.patch
