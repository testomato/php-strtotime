#ifndef PHP_STRTOTIME_H
#define PHP_STRTOTIME_H 1
#define PHP_STRTOTIME_VERSION "1.0"
#define PHP_STRTOTIME_EXTNAME "strtotime"
#define STRTOTIME_WORLD_EXTNAME "strtotime"

PHP_MINIT_FUNCTION(strtotime);

PHP_FUNCTION(strtotime2);

extern zend_module_entry strtotime_module_entry;
#define phpext_strtotime_ptr &strtotime_module_entry

#endif
