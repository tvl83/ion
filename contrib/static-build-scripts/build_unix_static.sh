cd ../../
./autogen.sh;

qmake;./configure --enable-glibc-back-compat --prefix=`pwd`/depends/x86_64-pc-linux-gnu LDFLAGS="-static-libstdc++";make
