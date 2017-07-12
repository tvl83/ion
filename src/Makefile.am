# Copyright (c) 2013-2016 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.cpppensource.org/licenses/mit-license.php.

DIST_SUBDIRS = secp256k1

AM_LDFLAGS = $(PTHREAD_CFLAGS) $(LIBTOOL_LDFLAGS) $(HARDENED_LDFLAGS)
AM_CXXFLAGS = $(HARDENED_CXXFLAGS) $(ERROR_CXXFLAGS)
AM_CPPFLAGS = $(HARDENED_CPPFLAGS)
EXTRA_LIBRARIES = 

ION_CONFIG_INCLUDES=-I$(builddir)/config
ION_INCLUDES=-I$(builddir) -I$(builddir)/obj $(BDB_CPPFLAGS) $(BOOST_CPPFLAGS) $(LEVELDB_CPPFLAGS) $(CRYPTO_CFLAGS) $(SSL_CFLAGS)

ION_INCLUDES += -I$(srcdir)/secp256k1/include

LIBION_SERVER=libion_server.a
LIBIONQT=qt/libionqt.a
LIBSECP256K1=secp256k1/libsecp256k1.la

if ENABLE_WALLET
LIBION_WALLET=libion_wallet.a
endif

$(LIBSECP256K1): $(wildcard secp256k1/src/*) $(wildcard secp256k1/include/*)
	$(AM_V_at)$(MAKE) $(AM_MAKEFLAGS) -C $(@D) $(@F)

# Make is not made aware of per-object dependencies to avoid limiting building parallelization
# But to build the less dependent modules first, we manually select their order here:
EXTRA_LIBRARIES += \
  $(LIBION_SERVER) \
  $(LIBION_WALLET) 

lib_LTLIBRARIES =

bin_PROGRAMS =
noinst_PROGRAMS =
TESTS =
BENCHMARKS =

if BUILD_IOND
  bin_PROGRAMS += iond
endif

.PHONY: FORCE check-symbols check-security
# ion core #
ION_CORE_H = \
activemasternode.h  chainparams.h       core_io.h         ecwrapper.h    limitedmap.h           miner.h      pubkey.h       spork.h         torcontrol.h    utilstrencodings.h  \
addrman.h           chainparamsseeds.h  core_memusage.h   hash.h         main.h                 mruset.h     reverselock.h  stake.h         txdb.h          version.h		\
alert.h             checkpoints.h       crypter.h         indirectmap.h  masternodeconfig.h     netbase.h    rpcclient.h    stealth.h       txdb-leveldb.h  walletdb.h		\
allocators.h        clientversion.h     cuckoocache.h     init.h         masternode.h           net.h        rpcprotocol.h  strlcpy.h       txmempool.h     wallet.h		\
amount.h            coincontrol.h       stashedsend.h        instantx.h     masternodeman.h        prevector.h  rpcserver.h    sync.h          ui_interface.h			\
arith_uint256.h     compat.h            stashedsend-relay.h  key.h          masternode-payments.h  proofs.h     script.h       threadsafety.h  uint256.h				\
base58.h            core.h              db.h              keystore.h     masternode-pos.h       protocol.h   serialize.h    tinyformat.h    util.h			support/cleanse.h	\
validation.h

# TODO: check if it's a problem that this could be build after iond.o
obj/build.h: FORCE
	@$(MKDIR_P) $(builddir)/obj
	/bin/sh ../share/genbuild.sh obj/build.h
#	@$(top_srcdir)/share/genbuild.sh "(abs_top_builddir)/src/obj/build.h" 
version.cpp: obj/build.h

# server: shared between iond and ion-qt
libion_server_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES) $(MINIUPNPC_CPPFLAGS) $(EVENT_CFLAGS) $(EVENT_PTHREADS_CFLAGS)
libion_server_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libion_server_a_SOURCES = \
	activemasternode.cpp \
	addrman.cpp \
	alert.cpp \
	allocators.cpp \
	amount.cpp \
	base58.cpp \
	chainparams.cpp \
	checkpoints.cpp \
	core.cpp \
	crypter.cpp \
	crypto/hmac_sha256.cpp \
	crypto/hmac_sha256.h \
	crypto/hmac_sha512.cpp \
	crypto/hmac_sha512.h \
	crypto/ripemd160.cpp \
	crypto/ripemd160.h \
	crypto/sha1.cpp \
	crypto/sha1.h \
	crypto/sha256.cpp \
	crypto/sha256.h \
	crypto/sha512.cpp \
	crypto/sha512.h \
	crypto/common.h \
	ecwrapper.cpp \
	hash.cpp \
	init.cpp \
	instantx.cpp \
	main.cpp \
	masternode.cpp \
	masternodeconfig.cpp \
	masternodeman.cpp \
	masternode-payments.cpp \
	net.cpp \
	netbase.cpp \
	key.cpp \
	keystore.cpp \
	noui.cpp \
	proofs.cpp \
	protocol.cpp \
	pubkey.cpp \
	script.cpp \
	sync.cpp \
	txmempool.cpp \
	rpcblockchain.cpp \
	rpcclient.cpp \
	rpcprotocol.cpp \
	rpcmisc.cpp \
	rpcnet.cpp \
	rpcserver.cpp \
	rpcstashedsend.cpp \
	rpcrawtransaction.cpp \
	stake.cpp \
	util.cpp \
	spork.cpp \
	stashedsend.cpp \
	stashedsend-relay.cpp \
	support/cleanse.cpp \
	txdb-leveldb.cpp \
	uint256.cpp \
	version.cpp \
	json_spirit_error_position.h \
	json_spirit.h \
	json_spirit_reader.cpp \
	json_spirit_reader.h \
	json_spirit_reader_template.h \
	json_spirit_stream_reader.h \
	json_spirit_utils.h \
	json_spirit_value.cpp \
	json_spirit_value.h \
	json_spirit_writer.cpp \
	json_spirit_writer.h \
	json_spirit_writer_template.h \
	$(ION_CORE_H)


# wallet: shared between iond and ion-qt, but only linked
# when wallet enabled
libion_wallet_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES)
libion_wallet_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libion_wallet_a_SOURCES = \
	db.cpp \
	miner.cpp \
	rpcdump.cpp \
	rpcmining.cpp \
	rpcwallet.cpp \
	stealth.cpp \
	wallet.cpp \
	walletdb.cpp \
	$(ION_CORE_H)

iond_SOURCES = iond.cpp 

iond_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES) $(MINIUPNPC_CPPFLAGS) $(EVENT_CFLAGS) $(EVENT_PTHREADS_CFLAGS)
iond_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
iond_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)

if TARGET_WINDOWS
iond_SOURCES += iond-res.rc
endif

iond_LDADD = \
  $(LIBION_SERVER) \
  $(LIBION_WALLET) \
  $(LIBLEVELDB) \
  $(LIBMEMENV) \
  $(LIBSECP256K1)
# iond_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS) $(EVENT_PTHREADS_LIBS) $(EVENT_LIBS) $(ZMQ_LIBS)
# TODO: CHECK IF THESE LIBS ARE PRESENT AND NECESSARY
iond_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(MINIUPNPC_LIBS) $(CRYPTO_LIBS) $(EVENT_LIBS)
CLEANFILES = $(EXTRA_LIBRARIES)

CLEANFILES += *.gcda *.gcno
CLEANFILES += compat/*.gcda compat/*.gcno

CLEANFILES += crypto/*.gcda crypto/*.gcno
CLEANFILES += policy/*.gcda policy/*.gcno
CLEANFILES += primitives/*.gcda primitives/*.gcno
CLEANFILES += script/*.gcda script/*.gcno
CLEANFILES += support/*.gcda support/*.gcno
CLEANFILES += wallet/*.gcda wallet/*.gcno
CLEANFILES += wallet/test/*.gcda wallet/test/*.gcno
CLEANFILES += zmq/*.gcda zmq/*.gcno

DISTCLEANFILES = obj/build.h

EXTRA_DIST = \
  validation.cpp \
  validationinterface.cpp \
  validationinterface.h

config/ion-config.h: config/stamp-h1
	@$(MAKE) -C $(top_builddir) $(subdir)/$(@)
config/stamp-h1: $(top_srcdir)/$(subdir)/config/ion-config.h.in $(top_builddir)/config.status
	$(AM_V_at)$(MAKE) -C $(top_builddir) $(subdir)/$(@)
$(top_srcdir)/$(subdir)/config/ion-config.h.in:  $(am__configure_deps)
	$(AM_V_at)$(MAKE) -C $(top_srcdir) $(subdir)/config/ion-config.h.in

clean-local:
	-$(MAKE) -C secp256k1 clean
	-rm -f leveldb/*/*.gcda leveldb/*/*.gcno leveldb/helpers/memenv/*.gcda leveldb/helpers/memenv/*.gcno
	-rm -f config.h
	-rm -rf test/__pycache__

.rc.o:
	@test -f $(WINDRES)
	## FIXME: How to get the appropriate modulename_CPPFLAGS in here?
	$(AM_V_GEN) $(WINDRES) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(CPPFLAGS) -DWINDRES_PREPROC -i $< -o $@

.mm.o:
	$(AM_V_CXX) $(OBJCXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	  $(CPPFLAGS) $(AM_CXXFLAGS) $(QT_INCLUDES) $(AM_CXXFLAGS) $(PIE_FLAGS) $(CXXFLAGS) -c -o $@ $<

check-symbols: $(bin_PROGRAMS)
if GLIBC_BACK_COMPAT
	@echo "Checking glibc back compat..."
	$(AM_V_at) READELF=$(READELF) CPPFILT=$(CPPFILT) $(top_srcdir)/contrib/devtools/symbol-check.py < $(bin_PROGRAMS)
endif

check-security: $(bin_PROGRAMS)
if HARDEN
	@echo "Checking binary security..."
	$(AM_V_at) READELF=$(READELF) OBJDUMP=$(OBJDUMP) $(top_srcdir)/contrib/devtools/security-check.py < $(bin_PROGRAMS)
endif

%.pb.cc %.pb.h: %.proto
	@test -f $(PROTOC)
	$(AM_V_GEN) $(PROTOC) --cpp_out=$(@D) --proto_path=$(<D) $<



if EMBEDDED_LEVELDB
include Makefile.leveldb.include
endif

if ENABLE_QT
include Makefile.qt.include
endif

