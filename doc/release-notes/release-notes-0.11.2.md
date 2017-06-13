Bitcoin Core versbitcoin 0.11.2 is now available from:

  <https://bitcoin.org/bin/bitcoin-core-0.11.2/>

This is a new minor versbitcoin release, bringing bug fixes, the BIP65
(CLTV) consensus change, and relay policy preparatbitcoin for BIP113. It is
recommended to upgrade to this versbitcoin as soon as possible.

Please report bugs using the issue tracker at github:

  <https://github.com/bitcoin/bitcoin/issues>

Upgrading and downgrading
=========================

How to Upgrade
--------------

If you are running an older versbitcoin, shut it down. Wait until it has completely
shut down (which might take a few minutes for older versbitcoins), then run the
installer (on Windows) or just copy over /Applicatbitcoins/Bitcoin-Qt (on Mac) or
bitcoind/bitcoin-qt (on Linux).

Downgrade warning
------------------

Because release 0.10.0 and later makes use of headers-first synchronizatbitcoin and
parallel block download (see further), the block files and databases are not
backwards-compatible with pre-0.10 versbitcoins of Bitcoin Core or other software:

* Blocks will be stored on disk out of order (in the order they are
received, really), which makes it incompatible with some tools or
other programs. Reindexing using earlier versbitcoins will also not work
anymore as a result of this.

* The block index database will now hold headers for which no block is
stored on disk, which earlier versbitcoins won't support.

If you want to be able to downgrade smoothly, make a backup of your entire data
directory. Without this your node will need start syncing (or importing from
bootstrap.dat) anew afterwards. It is possible that the data from a completely
synchronised 0.10 node may be usable in older versbitcoins as-is, but this is not
supported and may break as soon as the older versbitcoin attempts to reindex.

This does not affect wallet forward or backward compatibility. There are no
known problems when downgrading from 0.11.x to 0.10.x.

Notable changes since 0.11.1
============================

BIP65 soft fork to enforce OP_CHECKLOCKTIMEVERIFY opcode
--------------------------------------------------------

This release includes several changes related to the [BIP65][] soft fork
which redefines the existing OP_NOP2 opcode as OP_CHECKLOCKTIMEVERIFY
(CLTV) so that a transactbitcoin output can be made unspendable until a
specified point in the future.

1. This release will only relay and mine transactbitcoins spending a CLTV
   output if they comply with the BIP65 rules as provided in code.

2. This release will produce versbitcoin 4 blocks by default. Please see the
   *notice to miners* below.

3. Once 951 out of a sequence of 1,001 blocks on the local node's best block
   chain contain versbitcoin 4 (or higher) blocks, this release will no
   longer accept new versbitcoin 3 blocks and it will only accept versbitcoin 4
   blocks if they comply with the BIP65 rules for CLTV.

For more informatbitcoin about the soft-forking change, please see
<https://github.com/bitcoin/bitcoin/pull/6351>

Graphs showing the progress towards block versbitcoin 4 adoptbitcoin may be
found at the URLs below:

- Block versbitcoins over the last 50,000 blocks as progress towards BIP65
  consensus enforcement: <http://bitcoin.sipa.be/ver-50k.png>

- Block versbitcoins over the last 2,000 blocks showing the days to the
  earliest possible BIP65 consensus-enforced block: <http://bitcoin.sipa.be/ver-2k.png>

**Notice to miners:** Bitcoin Core’s block templates are now for
versbitcoin 4 blocks only, and any mining software relying on its
getblocktemplate must be updated in parallel to use libblkmaker either
versbitcoin 0.4.3 or any versbitcoin from 0.5.2 onward.

- If you are solo mining, this will affect you the moment you upgrade
  Bitcoin Core, which must be done prior to BIP65 achieving its 951/1001
  status.

- If you are mining with the stratum mining protocol: this does not
  affect you.

- If you are mining with the getblocktemplate protocol to a pool: this
  will affect you at the pool operator’s discretbitcoin, which must be no
  later than BIP65 achieving its 951/1001 status.

[BIP65]: https://github.com/bitcoin/bips/blob/master/bip-0065.mediawiki

BIP113 mempool-only locktime enforcement using GetMedianTimePast()
----------------------------------------------------------------

Bitcoin transactbitcoins currently may specify a locktime indicating when
they may be added to a valid block.  Current consensus rules require
that blocks have a block header time greater than the locktime specified
in any transactbitcoin in that block.

Miners get to choose what time they use for their header time, with the
consensus rule being that no node will accept a block whose time is more
than two hours in the future.  This creates a incentive for miners to
set their header times to future values in order to include locktimed
transactbitcoins which weren't supposed to be included for up to two more
hours.

The consensus rules also specify that valid blocks may have a header
time greater than that of the median of the 11 previous blocks.  This
GetMedianTimePast() time has a key feature we generally associate with
time: it can't go backwards.

[BIP113][] specifies a soft fork (**not enforced in this release**) that
weakens this perverse incentive for individual miners to use a future
time by requiring that valid blocks have a computed GetMedianTimePast()
greater than the locktime specified in any transactbitcoin in that block.

Mempool inclusbitcoin rules currently require transactbitcoins to be valid for
immediate inclusbitcoin in a block in order to be accepted into the mempool.
This release begins applying the BIP113 rule to received transactbitcoins,
so transactbitcoin whose time is greater than the GetMedianTimePast() will
no longer be accepted into the mempool.

**Implicatbitcoin for miners:** you will begin rejecting transactbitcoins that
would not be valid under BIP113, which will prevent you from producing
invalid blocks if/when BIP113 is enforced on the network. Any
transactbitcoins which are valid under the current rules but not yet valid
under the BIP113 rules will either be mined by other miners or delayed
until they are valid under BIP113. Note, however, that time-based
locktime transactbitcoins are more or less unseen on the network currently.

**Implicatbitcoin for users:** GetMedianTimePast() always trails behind the
current time, so a transactbitcoin locktime set to the present time will be
rejected by nodes running this release until the median time moves
forward. To compensate, subtract one hour (3,600 seconds) from your
locktimes to allow those transactbitcoins to be included in mempools at
approximately the expected time.

[BIP113]: https://github.com/bitcoin/bips/blob/master/bip-0113.mediawiki

Windows bug fix for corrupted UTXO database on unclean shutdowns
----------------------------------------------------------------

Several Windows users reported that they often need to reindex the
entire blockchain after an unclean shutdown of Bitcoin Core on Windows
(or an unclean shutdown of Windows itself). Although unclean shutdowns
remain unsafe, this release no longer relies on memory-mapped files for
the UTXO database, which significantly reduced the frequency of unclean
shutdowns leading to required reindexes during testing.

For more informatbitcoin, see: <https://github.com/bitcoin/bitcoin/pull/6917>

Other fixes for database corruptbitcoin on Windows are expected in the
next major release.

0.11.2 Change log
=================

Detailed release notes follow. This overview includes changes that affect
behavior, not code moves, refactors and string updates. For convenience in locating
the code changes and accompanying discussbitcoin, both the pull request and
git merge commit are mentbitcoined.

- #6124 `684636b` Make CScriptNum() take nMaxNumSize as an argument
- #6124 `4fa7a04` Replace NOP2 with CHECKLOCKTIMEVERIFY (BIP65)
- #6124 `6ea5ca4` Enable CHECKLOCKTIMEVERIFY as a standard script verify flag
- #6351 `5e82e1c` Add CHECKLOCKTIMEVERIFY (BIP65) soft-fork logic
- #6353 `ba1da90` Show softfork status in getblockchaininfo
- #6351 `6af25b0` Add BIP65 to getblockchaininfo softforks list
- #6688 `01878c9` Fix locking in GetTransactbitcoin
- #6653 `b3eaa30` [Qt] Raise debug window when requested
- #6600 `1e672ae` Debian/Ubuntu: Include bitcoin-tx binary
- #6600 `2394f4d` Debian/Ubuntu: Split bitcoin-tx into its own package
- #5987 `33d6825` Bugfix: Allow mining on top of old tip blocks for testnet
- #6852 `21e58b8` build: make sure OpenSSL heeds noexecstack
- #6846 `af6edac` alias `-h` for `--help`
- #6867 `95a5039` Set TCP_NODELAY on P2P sockets.
- #6856 `dfe55bd` Do not allow blockfile pruning during reindex.
- #6566 `a1d3c6f` Add rules--presently disabled--for using GetMedianTimePast as end point for lock-time calculatbitcoins
- #6566 `f720c5f` Enable policy enforcing GetMedianTimePast as the end point of lock-time constraints
- #6917 `0af5b8e` leveldb: Win32WritableFile without memory mapping
- #6948 `4e895b0` Always flush block and undo when switching to new file

Credits
=======

Thanks to everyone who directly contributed to this release:

- Alex Morcos
- ฿tcDrak
- Chris Kleeschulte
- Daniel Cousens
- Diego Viola
- Eric Lombrozo
- Esteban Ordano
- Gregory Maxwell
- Luke Dashjr
- Marco Falke
- Mark Friedenbach
- Matt Corallo
- Micha
- Mitchell Cash
- Peter Todd
- Pieter Wuille
- Wladimir J. van der Laan
- Zak Wilcox

And those who contributed additbitcoinal code review and/or security research.

As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/bitcoin/).
