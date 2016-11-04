AC_PREREQ([2.69])
AC_INIT([php-strtotime], [1.0.0])
AM_INIT_AUTOMAKE([foreign subdir-objects])
AC_CONFIG_HEADERS([lib/config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_PROG_CC
gl_EARLY
LT_INIT
gl_INIT

AC_PATH_PROG([PHPIZE], [phpize])
AS_IF([test x"$PHPIZE" = x],
	  [AC_MSG_ERROR([cannot build PHP extension without phpize])])

AC_CONFIG_FILES([Makefile lib/Makefile])
AC_OUTPUT
