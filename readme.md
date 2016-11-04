# PHP strtotime

Replacement for buggy php function `strtotime`. It uses `parse-datetime` module from Gnulib.

## Build

```
./gnulib/gnulib-tool --import --libtool parse-datetime
autoreconf --install
./configure
make
```

Add following to `mods-available/strtotime.ini` and run `phpenmod strtotime`.

```
extension=".../modules/strtotime.so"
```
