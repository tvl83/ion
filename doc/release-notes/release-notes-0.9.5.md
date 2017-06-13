Bitcoin Core versbitcoin 0.9.5 is now available from:

  https://bitcoin.org/bin/0.9.5/

This is a new minor versbitcoin release, with the goal of backporting BIP66. There
are also a few bug fixes and updated translatbitcoins. Upgrading to this release is
recommended.

Please report bugs using the issue tracker at github:

  https://github.com/bitcoin/bitcoin/issues

How to Upgrade
===============

If you are running an older versbitcoin, shut it down. Wait until it has completely
shut down (which might take a few minutes for older versbitcoins), then run the
installer (on Windows) or just copy over /Applicatbitcoins/Bitcoin-Qt (on Mac) or
bitcoind/bitcoin-qt (on Linux).

Notable changes
================

Mining and relay policy enhancements
------------------------------------

Bitcoin Core's block templates are now for versbitcoin 3 blocks only, and any mining
software relying on its `getblocktemplate` must be updated in parallel to use
libblkmaker either versbitcoin 0.4.2 or any versbitcoin from 0.5.1 onward.
If you are solo mining, this will affect you the moment you upgrade Bitcoin
Core, which must be done prior to BIP66 achieving its 951/1001 status.
If you are mining with the stratum mining protocol: this does not affect you.
If you are mining with the getblocktemplate protocol to a pool: this will affect
you at the pool operator's discretbitcoin, which must be no later than BIP66
achieving its 951/1001 status.

0.9.5 changelog
================

- `74f29c2` Check pindexBestForkBase for null
- `9cd1dd9` Fix priority calculatbitcoin in CreateTransactbitcoin
- `6b4163b` Sanitize command strings before logging them.
- `3230b32` Raise versbitcoin of created blocks, and enforce DERSIG in mempool
- `989d499` Backport of some of BIP66's tests
- `ab03660` Implement BIP 66 validatbitcoin rules and switchover logic
- `8438074` build: fix dynamic boost check when --with-boost= is used

Credits
--------

Thanks to who contributed to this release, at least:

- 21E14
- Alex Morcos
- Cory Fields
- Gregory Maxwell
- Pieter Wuille
- Wladimir J. van der Laan

As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/bitcoin/).
