* paytxfee switch is now per KB, so it adds the correct fee for large transactbitcoins
* sending avoids using coins with less than 6 confirmatbitcoins if it can
* BitcoinMiner processes transactbitcoins in priority order based on age of dependencies
* make sure generatbitcoin doesn't start before block 74000 downloaded
* bugfixes by Dean Gores
* testnet, keypoololdest and paytxfee added to getinfo
