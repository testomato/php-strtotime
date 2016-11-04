PHP_ARG_WITH(strtotime, correct strtotime without bugs,
Make sure that the comment is aligned:
[  --with-strtotime             Include strtotime support])

if test "$PHP_STRTOTIME" != "no"; then
  AC_DEFINE(HAVE_STRTOTIME, 1, [ ])
  
  LDFLAGS="$LDFLAGS -L../lib -lgnu"
dnl LDFLAGS="$LDFLAGS -Wl,-whole-archive -Llib -lgnu -Wl,-no-whole-archive"

  PHP_NEW_EXTENSION(strtotime, strtotime.c, $ext_shared)
fi

AC_PROG_CC_C99
if test "${ac_cv_prog_cc_c99}" = "no"; then
    AC_MSG_ERROR([your compiler does not support ISO Standard C 99])
fi
