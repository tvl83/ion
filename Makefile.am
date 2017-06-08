# Copyright (c) 2013-2016 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

ACLOCAL_AMFLAGS = -I build-aux/m4
SUBDIRS = src
if ENABLE_MAN
	SUBDIRS += doc/man
endif

.PHONY: deploy FORCE

GZIP_ENV="-9n"
export PYTHONPATH

IOND_BIN=$(top_builddir)/src/$(ION_DAEMON_NAME)$(EXEEXT)
ION_QT_BIN=$(top_builddir)/src/qt/$(ION_GUI_NAME)$(EXEEXT)

$(IOND_BIN): FORCE
	$(MAKE) -C src $(@F)

