# PHP strtotime

Replacement for buggy php function `strtotime`. It uses `parse-date` module from Gnulib.

## Build

```
phpize
./configure
make
```

Add following to `mods-available/strtotime.ini` and run `phpenmod strtotime`.

```
extension=".../modules/strtotime.so"
```
