#!/bin/bash
# Run this to generate all the initial makefiles, etc.
srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

PKG_NAME="Tenes Empanadas Graciela"

(test -f $srcdir/configure.ac \
  && test -f $srcdir/ChangeLog \
  && test -d $srcdir/client) || {
    echo -n "**Error**: Directory "\`$srcdir\'" does not look like the"
    echo " top-level $PKG_NAME directory"
    exit 1
}

rm -f po/Makefile.in*
autoreconf --verbose --install
glib-gettextize --force
