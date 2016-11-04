#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_strtotime.h"
#include "../lib/parse-datetime.h"

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
	char *time_s;
	size_t time_len;
	struct timespec time;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &time_s, &time_len) == FAILURE) {
		RETURN_FALSE;
	}

	if (parse_datetime(&time, time_s, NULL) == false) {
		RETURN_FALSE;
	}


	RETURN_LONG(time.tv_sec);
}
