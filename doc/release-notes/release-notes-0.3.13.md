Versbitcoin 0.3.13 is now available.  You should upgrade to prevent potential problems with 0/unconfirmed transactbitcoins.  Note: 0.3.13 prevents problems if you haven't already spent a 0/unconfirmed transactbitcoin, but if that already happened, you need 0.3.13.2.

Changes:
* Don't count or spend payments until they have 1 confirmatbitcoin.
* Internal versbitcoin number from 312 to 31300.
* Only accept transactbitcoins sent by IP address if -allowreceivebyip is specified.
* Dropped DB_PRIVATE Berkeley DB flag.
* Fix problem sending the last cent with sub-cent fractbitcoinal change.
* Auto-detect whether to use 128-bit 4-way SSE2 on Linux.
Gavin Andresen:
* Optbitcoin -rpcallowip= to accept json-rpc connectbitcoins from another machine.
* Clean shutdown on SIGTERM on Linux.

Download:
http://sourceforge.net/projects/bitcoin/files/Bitcoin/bitcoin-0.3.13/

(Thanks Laszlo for the Mac OSX build!)

Note:
The SSE2 auto-detect in the Linux 64-bit versbitcoin doesn't work with AMD in 64-bit mode.  Please try this instead and let me know if it gets it right:
http://www.bitcoin.org/download/bitcoin-0.3.13.1-specialbuild-linux64.tar.gz

You can still control the SSE2 use manually with -4way and -4way=0.

Versbitcoin 0.3.13.2 (SVN rev 161) has improvements for the case where you already had 0/unconfirmed transactbitcoins that you might have already spent.  Here's a Windows build of it:
http://www.bitcoin.org/download/bitcoin-0.3.13.2-win32-setup.exe
