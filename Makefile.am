SUBDIRS = lib

EXTRA_DIST = m4/gnulib-cache.m4

php/modules/strtotime.so: php/config.m4 php/php_strtotime.h php/strtotime.c
	cd php && $(PHPIZE)
	cd php && ./configure
	cd php && $(MAKE)

install-data-local-php: php/modules/strtotime.so
	cd php && $(MAKE) install INSTALL_ROOT=$(DESTDIR)

all-local: php/modules/strtotime.so
install-data-local: install-data-local-php
