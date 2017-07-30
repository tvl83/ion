#!/bin/bash

cd ../depends
make HOST=x86_64-pc-linux-gnu
cd ..
./autogen.sh
./configure --enable-glibc-back-compat --prefix=`pwd`/depends/x86_64-pc-linux-gnu LDFLAGS="-static-libstdc++"
make
