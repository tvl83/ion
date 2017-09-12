# Copyright (c) 2013-2016 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.cpppensource.org/licenses/mit-license.php.

DIST_SUBDIRS = secp256k1 univalue

AM_LDFLAGS = $(PTHREAD_CFLAGS) $(LIBTOOL_LDFLAGS) $(HARDENED_LDFLAGS)
AM_CXXFLAGS = $(HARDENED_CXXFLAGS) $(ERROR_CXXFLAGS)
AM_CPPFLAGS = $(HARDENED_CPPFLAGS)
EXTRA_LIBRARIES = 

if EMBEDDED_UNIVALUE
LIBUNIVALUE = univalue/libunivalue.la

$(LIBUNIVALUE): $(wildcard univalue/lib/*) $(wildcard univalue/include/*)
	$(AM_V_at)$(MAKE) $(AM_MAKEFLAGS) -C $(@D) $(@F)
else
LIBUNIVALUE = $(UNIVALUE_LIBS)
endif

ION_CONFIG_INCLUDES=-I$(builddir)/config
ION_INCLUDES=-I$(builddir) -I$(builddir)/obj $(BDB_CPPFLAGS) $(BOOST_CPPFLAGS) $(LEVELDB_CPPFLAGS) $(CRYPTO_CFLAGS) $(SSL_CFLAGS)

ION_INCLUDES += -I$(srcdir)/secp256k1/include
ION_INCLUDES += $(UNIVALUE_CFLAGS)

LIBION_SERVER=libion_server.a
LIBION_COMMON=libion_common.a
LIBION_CONSENSUS=libion_consensus.a
LIBION_CLI=libion_cli.a
LIBION_UTIL=libion_util.a
LIBION_CRYPTO=crypto/libion_crypto.a
LIBIONQT=qt/libionqt.a
LIBSECP256K1=secp256k1/libsecp256k1.la

# if ENABLE_ZMQ
# LIBION_ZMQ=libion_zmq.a
# endif
if BUILD_ION_LIBS
LIBIONCONSENSUS=libionconsensus.la
endif
if ENABLE_WALLET
LIBION_WALLET=libion_wallet.a
endif

$(LIBSECP256K1): $(wildcard secp256k1/src/*) $(wildcard secp256k1/include/*)
	$(AM_V_at)$(MAKE) $(AM_MAKEFLAGS) -C $(@D) $(@F)

# Make is not made aware of per-object dependencies to avoid limiting building parallelization
# But to build the less dependent modules first, we manually select their order here:
EXTRA_LIBRARIES += \
  $(LIBION_CRYPTO) \
  $(LIBION_UTIL) \
  $(LIBION_COMMON) \
  $(LIBION_CONSENSUS) \
  $(LIBION_SERVER) \
  $(LIBION_CLI) \
  $(LIBION_WALLET) \
  $(LIBION_ZMQ)

lib_LTLIBRARIES = $(LIBIONCONSENSUS)

bin_PROGRAMS =
noinst_PROGRAMS =
TESTS =
BENCHMARKS =

if BUILD_IOND
  bin_PROGRAMS += iond
endif

if BUILD_ION_UTILS
  bin_PROGRAMS += ion-cli ion-tx
#  bin_PROGRAMS += ion-cli
endif

.PHONY: FORCE check-symbols check-security
# ion core #
ION_CORE_H = \
  activemasternode.h \
  addrman.h \
  alert.h \
  allocators.h \
  amount.h \
  arith_uint256.h \
  base58.h \
  chainparams.h  \
  chainparamsseeds.h \
  checkpoints.h \
  clientversion.h \
  coincontrol.h \
  compat.h \
  core.h \
  core_io.h  \
  core_memusage.h \
  crypter.h \
  cuckoocache.h \
  db.h \
  ecwrapper.h \
  hash.h \
  indirectmap.h \
  init.h \
  instantx.h \
  key.h \
  keystore.h \
  limitedmap.h  \
  main.h \
  masternode-payments.h \
  masternode-pos.h \
  masternode.h \
  masternodeconfig.h \
  masternodeman.h \
  miner.h \
  mruset.h \
  net.h \
  netbase.h \
  prevector.h \
  proofs.h \
  protocol.h \
  pubkey.h \
  reverselock.h \
  rpcclient.h \
  rpcprotocol.h \
  rpcserver.h \
  script.h \
  serialize.h \
  spork.h \
  stake.h \
  stashedsend-relay.h \
  stashedsend.h \
  stealth.h \
  strlcpy.h \
  support/cleanse.h	\
  sync.h \
  threadsafety.h \
  tinyformat.h \
  torcontrol.h \
  txdb-leveldb.h \
  txdb.h \
  txmempool.h \
  ui_interface.h \
  uint256.h \
  util.h \
  utilstrencodings.h  \
  validation.h \
  version.h	\
  wallet.h \
  walletdb.h 

# TODO: check if it's a problem that this could be build after iond.o
obj/build.h: FORCE
	@$(MKDIR_P) $(builddir)/obj
	/bin/sh ../share/genbuild.sh obj/build.h
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
	checkpoints.cpp \
	core.cpp \
	crypter.cpp \
	ecwrapper.cpp \
	hash.cpp \
	init.cpp \
	instantx.cpp \
	json/json_spirit.h \
	json/json_spirit_error_position.h \
	json/json_spirit_reader.cpp \
	json/json_spirit_reader.h \
	json/json_spirit_reader_template.h \
	json/json_spirit_stream_reader.h \
	json/json_spirit_utils.h \
	json/json_spirit_value.cpp \
	json/json_spirit_value.h \
	json/json_spirit_writer.cpp \
	json/json_spirit_writer.h \
	json/json_spirit_writer_template.h \
	main.cpp \
	masternode-payments.cpp \
	masternode.cpp \
	masternodeconfig.cpp \
	masternodeman.cpp \
	net.cpp \
	noui.cpp \
	proofs.cpp \
	pubkey.cpp \
	rpcblockchain.cpp \
	rpcmisc.cpp \
	rpcnet.cpp \
	rpcrawtransaction.cpp \
	rpcserver.cpp \
	rpcstashedsend.cpp \
	script.cpp \
	spork.cpp \
	stake.cpp \
	stashedsend-relay.cpp \
	stashedsend.cpp \
	txdb-leveldb.cpp \
	txmempool.cpp \
	uint256.cpp \
	version.cpp \
	$(ION_CORE_H)

# if ENABLE_ZMQ
# libion_zmq_a_CPPFLAGS = $(ION_INCLUDES) $(ZMQ_CFLAGS)
# libion_zmq_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
# libion_zmq_a_SOURCES = \
#   zmq/zmqabstractnotifier.cpp \
#   zmq/zmqnotificationinterface.cpp \
#   zmq/zmqpublishnotifier.cpp
# endif

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

# crypto primitives library
crypto_libion_crypto_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_CONFIG_INCLUDES)
crypto_libion_crypto_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
crypto_libion_crypto_a_SOURCES = \
  crypto/common.h \
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
  crypto/sha512.h 

# consensus: shared between all executables that validate any consensus rules.
libion_consensus_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES)
libion_consensus_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libion_consensus_a_SOURCES = 

# common: shared between iond, and ion-qt and non-server tools
libion_common_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES)
libion_common_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libion_common_a_SOURCES = \
	base58.cpp \
	chainparams.cpp \
	key.cpp \
	keystore.cpp \
	netbase.cpp \
	protocol.cpp \
	$(ION_CORE_H)

# util: shared between all executables.
# This library *must* be included to make sure that the glibc
# backward-compatibility objects and their sanity checks are linked.
libion_util_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES)
libion_util_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
libion_util_a_SOURCES = \
  compat/glibc_sanity.cpp \
  compat/glibcxx_sanity.cpp \
  compat/strnlen.cpp \
  rpcprotocol.cpp \
  support/cleanse.cpp \
  sync.cpp \
  util.cpp \
  utilstrencodings.cpp \
  $(ION_CORE_H)

if GLIBC_BACK_COMPAT
libion_util_a_SOURCES += compat/glibc_compat.cpp
endif

# cli: shared between ion-cli and ion-qt
libion_cli_a_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES) 
libion_cli_a_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
# libion_cli_a_SOURCES = \
#  rpc/client.cpp \
#  $(ION_CORE_H)
libion_cli_a_SOURCES = \
  rpcclient.cpp \
  $(ION_CORE_H)

nodist_libion_util_a_SOURCES = $(srcdir)/obj/build.h

# iond binary #
iond_SOURCES = iond.cpp 
iond_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES) $(MINIUPNPC_CPPFLAGS) $(EVENT_CFLAGS) $(EVENT_PTHREADS_CFLAGS)
iond_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
iond_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)

if TARGET_WINDOWS
iond_SOURCES += iond-res.rc
endif

iond_LDADD = \
  $(LIBION_SERVER) \
  $(LIBION_COMMON) \
  $(LIBION_UTIL) \
  $(LIBION_WALLET) \
  $(LIBION_CONSENSUS) \
  $(LIBION_CRYPTO) \
  $(LIBLEVELDB) \
  $(LIBMEMENV) \
  $(LIBSECP256K1)

iond_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS) $(EVENT_PTHREADS_LIBS) $(EVENT_LIBS) $(ZMQ_LIBS)

# ion-cli binary #
ion_cli_SOURCES = ion-cli.cpp 
ion_cli_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES) $(MINIUPNPC_CPPFLAGS) $(EVENT_CFLAGS) $(EVENT_PTHREADS_CFLAGS)
ion_cli_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
ion_cli_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)

if TARGET_WINDOWS
ion_cli_SOURCES += ion-cli-res.rc
endif

ion_cli_LDADD = \
  $(LIBION_CLI) \
  $(LIBION_SERVER) \
  $(LIBION_COMMON) \
  $(LIBION_UTIL) \
  $(LIBION_CRYPTO) \
  $(LIBION_WALLET) \
  $(LIBLEVELDB) \
  $(LIBSECP256K1) \
  $(LIBMEMENV) 

ion_cli_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS) $(EVENT_PTHREADS_LIBS) $(EVENT_LIBS) $(ZMQ_LIBS)
#ion_cli_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS) $(EVENT_PTHREADS_LIBS) $(EVENT_LIBS) $(ZMQ_LIBS)

# ion-tx binary #
ion_tx_SOURCES = ion-tx.cpp 
ion_tx_CPPFLAGS = $(AM_CPPFLAGS) $(ION_INCLUDES) $(MINIUPNPC_CPPFLAGS) $(EVENT_CFLAGS) $(EVENT_PTHREADS_CFLAGS)
ion_tx_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)
ion_tx_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS) $(LIBTOOL_APP_LDFLAGS)

if TARGET_WINDOWS
ion_tx_SOURCES += ion-tx-res.rc
endif

ion_tx_LDADD = \
  $(LIBUNIVALUE) \
  $(LIBION_SERVER) \
  $(LIBION_COMMON) \
  $(LIBION_UTIL) \
  $(LIBION_WALLET) \
  $(LIBION_CONSENSUS) \
  $(LIBION_CRYPTO) \
  $(LIBLEVELDB) \
  $(LIBMEMENV) \
  $(LIBSECP256K1)

ion_tx_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS) $(EVENT_PTHREADS_LIBS) $(EVENT_LIBS) $(ZMQ_LIBS)

# ionconsensus library #
if BUILD_ION_LIBS
# include_HEADERS = script/ionconsensus.h
include_HEADERS = 
libionconsensus_la_SOURCES = $(crypto_libion_crypto_a_SOURCES) $(libion_consensus_a_SOURCES)

if GLIBC_BACK_COMPAT
  libionconsensus_la_SOURCES += compat/glibc_compat.cpp
endif

libionconsensus_la_LDFLAGS = $(AM_LDFLAGS) -no-undefined $(RELDFLAGS)
libionconsensus_la_LIBADD = $(LIBSECP256K1)
libionconsensus_la_CPPFLAGS = $(AM_CPPFLAGS) -I$(builddir)/obj -I$(srcdir)/secp256k1/include -DBUILD_ION_INTERNAL
libionconsensus_la_CXXFLAGS = $(AM_CXXFLAGS) $(PIE_FLAGS)

endif
#

CLEANFILES = $(EXTRA_LIBRARIES)

CLEANFILES += *.gcda *.gcno
CLEANFILES += compat/*.gcda compat/*.gcno
CLEANFILES += consensus/*.gcda consensus/*.gcno
CLEANFILES += crypto/*.gcda crypto/*.gcno
CLEANFILES += policy/*.gcda policy/*.gcno
CLEANFILES += primitives/*.gcda primitives/*.gcno
CLEANFILES += script/*.gcda script/*.gcno
CLEANFILES += support/*.gcda support/*.gcno
CLEANFILES += univalue/*.gcda univalue/*.gcno
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
	-$(MAKE) -C univalue clean
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

