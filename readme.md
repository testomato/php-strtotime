# PHP strtotime

Replacement of buggy php function `strtotime` [1] [2]. It uses `parse-datetime` module from Gnulib.

## Usage

```php
<?php
$tommorow = strtotime2('+1 day');
```

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

## References

 - [1] PHP function strtotime http://php.net/strtotime
 - [2] PHP bug #73138 https://bugs.php.net/bug.php?id=73138 https://3v4l.org/b6jOH
 - [3] Demonstration of `DateTime::add` bugs https://3v4l.org/uXf8d
