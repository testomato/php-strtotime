#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_strtotime.h"

static zend_function_entry strtotime_functions[] = {
    PHP_FE(strtotime2, NULL)
    PHP_FE_END
};

zend_module_entry strtotime_module_entry = {
    STANDARD_MODULE_HEADER,
    STRTOTIME_WORLD_EXTNAME,
    strtotime_functions,
    PHP_MINIT(strtotime),
    NULL,//PHP_MSHUTDOWN(strtotime)
    NULL,
    NULL,
    NULL,//PHP_MINFO(strtotime)
    PHP_STRTOTIME_VERSION,
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_STRTOTIME
ZEND_GET_MODULE(strtotime)
#endif

PHP_MINIT_FUNCTION(strtotime)
{
	return SUCCESS;
}

PHP_FUNCTION(strtotime2)
{
	char *time;
	size_t time_len;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &time, &time_len) == FAILURE) {
		RETURN_FALSE;
	}

	RETURN_FALSE;
}
