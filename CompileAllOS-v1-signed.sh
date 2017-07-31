
cd depends;
make download;make download-osx;make download-win;make download-linux;
make HOST=x86_64-pc-linux-gnu;
make HOST=i686-pc-linux-gnu;
make HOST=x86_64-w64-mingw32 -j4;
make HOST=i686-w64-mingw32 -j4;
make HOST=aarch64-linux-gnu;
make HOST=arm-linux-gnueabihf;
make HOST=x86_64-apple-darwin11;
make HOST=host-platform-triplet;

cd ..;
# x86_64-pc-linux-gnu
./autogen.sh;
./configure --prefix=`pwd`/depends/x86_64-pc-linux-gnu
make
mkdir -p build/v2.1.6.2/x86_64-pc-linux-gnu;
cp ./src/iond ./build/v2.1.6.2/x86_64-pc-linux-gnu/iond;
cp ./src/qt/ion-qt ./build/v2.1.6.2/x86_64-pc-linux-gnu/ion-qt;
strip ./build/v2.1.6.2/x86_64-pc-linux-gnu/iond
strip ./build/v2.1.6.2/x86_64-pc-linux-gnu/ion-qt
## created detached signatures
cd build/v2.1.6.2/x86_64-pc-linux-gnu;

gpg --detach-sign -o ion-qt.sig ion-qt
gpg --verify ion-qt.sig

gpg --armor --detach-sign -o iond.sig iond
gpg --verify iond.sig
cd ../../..;

make clean;cd src;make clean;cd ..;

# i686-pc-linux-gnu
./autogen.sh;
./configure --prefix=`pwd`/depends/i686-pc-linux-gnu
make
mkdir -p build/v2.1.6.2/i686-pc-linux-gnu;
cp ./src/iond ./build/v2.1.6.2/i686-pc-linux-gnu/iond;
cp ./src/qt/ion-qt ./build/v2.1.6.2/i686-pc-linux-gnu/ion-qt;
strip ./build/v2.1.6.2/i686-pc-linux-gnu/iond
strip ./build/v2.1.6.2/i686-pc-linux-gnu/ion-qt
# created detached signatures
cd build/v2.1.6.2/i686-pc-linux-gnu;

gpg --detach-sign -o ion-qt.sig ion-qt
gpg --verify ion-qt.sig

gpg --armor --detach-sign -o iond.sig iond
gpg --verify iond.sig
cd ../../..;

make clean;cd src;make clean;cd ..;

# x86_64-w64-mingw32
./autogen.sh;
./configure --prefix=`pwd`/depends/x86_64-w64-mingw32
make HOST=x86_64-w64-mingw32 -j4;

mkdir -p build/v2.1.6.2/x86_64-w64-mingw32;
cp ./src/iond.exe ./build/v2.1.6.2/x86_64-w64-mingw32/iond.exe;
cp ./src/qt/ion-qt.exe ./build/v2.1.6.2/x86_64-w64-mingw32/ion-qt.exe;
strip ./build/v2.1.6.2/x86_64-w64-mingw32/iond.exe
strip ./build/v2.1.6.2/x86_64-w64-mingw32/ion-qt.exe
## created detached signatures
cd build/v2.1.6.2/x86_64-w64-mingw32;


##/C= 	Country 	GB
##/ST= 	State 	London
##/L= 	Location 	London
##/O= 	Organization 	Global Security
##/OU= 	Organizational Unit 	IT Department
##/CN= 	Common Name 	example.com

openssl req -x509 -nodes -days 365 -newkey rsa:4096 -keyout ./ion-qt-selfsigned.key -out ./ion-qt-selfsigned.crt -subj "/C=AT/ST=Vienna/L=Vienna/O=Development/OU=Core Development/CN=eioncore.xyz";
openssl req -x509 -nodes -days 365 -newkey rsa:4096 -keyout ./iond-selfsigned.key -out ./iond-selfsigned.crt -subj "/C=AT/ST=Vienna/L=Vienna/O=Development/OU=Core Development/CN=eioncore.xyz";

osslsigncode sign -certs ion-qt-selfsigned.crt -key ion-qt-selfsigned.key \
        -n "🗺️Ion Digital Currency ©️ 👯👯 👛 (by 🐼CEVAP🐼) CE source code (Community Edition)" -i http://www.ioncore.xyz/ \
        -t http://timestamp.verisign.com/scripts/timstamp.dll \
        -in ion-qt.exe -out ion-qt-signed.exe

osslsigncode sign -certs iond-selfsigned.crt -key iond-selfsigned.key \
        -n "🗺️Ion Digital Currency ©️ 👯👯 👛 (by 🐼CEVAP🐼) CE source code (Community Edition)" -i http://www.ioncore.xyz/ \
        -t http://timestamp.verisign.com/scripts/timstamp.dll \
        -in iond.exe -out iond-signed.exe

mv ion-qt-signed.exe ion-qt.exe;
mv iond-signed.exe iond.exe;

cd ../../..;
make clean;cd src;make clean;cd ..;

# i686-w64-mingw32
./autogen.sh;
./configure --prefix=`pwd`/depends/i686-w64-mingw32
make HOST=i686-w64-mingw32 -j4;

mkdir -p build/v2.1.6.2/i686-w64-mingw32;
cp ./src/iond.exe ./build/v2.1.6.2/i686-w64-mingw32/iond.exe;
cp ./src/qt/ion-qt.exe ./build/v2.1.6.2/i686-w64-mingw32/ion-qt.exe;
strip ./build/v2.1.6.2/i686-w64-mingw32/iond.exe
strip ./build/v2.1.6.2/i686-w64-mingw32/ion-qt.exe
## created detached signatures
cd build/v2.1.6.2/i686-w64-mingw32;

##/C= 	Country 	GB
##/ST= 	State 	London
##/L= 	Location 	London
##/O= 	Organization 	Global Security
##/OU= 	Organizational Unit 	IT Department
##/CN= 	Common Name 	example.com

openssl req -x509 -nodes -days 365 -newkey rsa:4096 -keyout ./ion-qt-selfsigned.key -out ./ion-qt-selfsigned.crt -subj "/C=AT/ST=Vienna/L=Vienna/O=Development/OU=Core Development/CN=eioncore.xyz";
openssl req -x509 -nodes -days 365 -newkey rsa:4096 -keyout ./iond-selfsigned.key -out ./iond-selfsigned.crt -subj "/C=AT/ST=Vienna/L=Vienna/O=Development/OU=Core Development/CN=eioncore.xyz";

osslsigncode sign -certs ion-qt-selfsigned.crt -key ion-qt-selfsigned.key \
        -n "🗺️Ion Digital Currency ©️ 👯👯 👛 (by 🐼CEVAP🐼) CE source code (Community Edition)" -i http://www.ioncore.xyz/ \
        -t http://timestamp.verisign.com/scripts/timstamp.dll \
        -in ion-qt.exe -out ion-qt-signed.exe

osslsigncode sign -certs iond-selfsigned.crt -key iond-selfsigned.key \
        -n "🗺️Ion Digital Currency ©️ 👯👯 👛 (by 🐼CEVAP🐼) CE source code (Community Edition)" -i http://www.ioncore.xyz/ \
        -t http://timestamp.verisign.com/scripts/timstamp.dll \
        -in iond.exe -out iond-signed.exe

mv ion-qt-signed.exe ion-qt.exe;
mv iond-signed.exe iond.exe;

cd ../../..;
make clean;cd src;make clean;cd ..;

./autogen.sh;
./configure --prefix=`pwd`/depends/arm-linux-gnueabihf
make HOST=arm-linux-gnueabihf;

mkdir -p build/v2.1.6.2/arm-linux-gnueabihf;
cp ./src/iond ./build/v2.1.6.2/arm-linux-gnueabihf/iond;
cp ./src/qt/ion-qt ./build/v2.1.6.2/arm-linux-gnueabihf/ion-qt;
strip ./build/v2.1.6.2/arm-linux-gnueabihf/iond
strip ./build/v2.1.6.2/arm-linux-gnueabihf/ion-qt
# created detached signatures
cd build/v2.1.6.2/arm-linux-gnueabihf;

gpg --detach-sign -o ion-qt.sig ion-qt
gpg --verify ion-qt.sig

gpg --armor --detach-sign -o iond.sig iond
gpg --verify iond.sig
cd ../../..;


make clean;cd src;make clean;cd ..;

# aarch64-linux-gnu
./autogen.sh;
./configure --prefix=`pwd`/depends/aarch64-linux-gnu
make HOST=aarch64-linux-gnu;

mkdir -p build/v2.1.6.2/aarch64-linux-gnu;
cp ./src/iond ./build/v2.1.6.2/aarch64-linux-gnu/iond;
cp ./src/qt/ion-qt ./build/v2.1.6.2/aarch64-linux-gnu/ion-qt;
strip ./build/v2.1.6.2/aarch64-linux-gnu/iond
strip ./build/v2.1.6.2/aarch64-linux-gnu/ion-qt
# created detached signatures
cd build/v2.1.6.2/aarch64-linux-gnu;

gpg --detach-sign -o ion-qt.sig ion-qt
gpg --verify ion-qt.sig

gpg --armor --detach-sign -o iond.sig iond
gpg --verify iond.sig
cd ../../..;

# arm-linux-gnueabihf
./autogen.sh;
./configure --prefix=`pwd`/depends/arm-linux-gnueabihf
make
mkdir -p build/v2.1.6.2/arm-linux-gnueabihf;
cp ./src/iond ./build/v2.1.6.2/arm-linux-gnueabihf/iond;
cp ./src/qt/ion-qt ./build/v2.1.6.2/arm-linux-gnueabihf/ion-qt;
strip ./build/v2.1.6.2/arm-linux-gnueabihf/iond
strip ./build/v2.1.6.2/arm-linux-gnueabihf/ion-qt
## created detached signatures
cd build/v2.1.6.2/arm-linux-gnueabihf;

gpg --detach-sign -o ion-qt.sig ion-qt
gpg --verify ion-qt.sig

gpg --armor --detach-sign -o iond.sig iond
gpg --verify iond.sig
cd ../../..;

make clean;cd src;make clean;cd ..;

# host-platform-triplet
./autogen.sh;
./configure --prefix=`pwd`/depends/host-platform-triplet
make
mkdir -p build/v2.1.6.2/host-platform-triplet;
cp ./src/iond ./build/v2.1.6.2/host-platform-triplet/iond;
cp ./src/qt/ion-qt ./build/v2.1.6.2/host-platform-triplet/ion-qt;
strip ./build/v2.1.6.2/host-platform-triplet/iond
strip ./build/v2.1.6.2/host-platform-triplet/ion-qt
## created detached signatures
cd build/v2.1.6.2/host-platform-triplet;

gpg --detach-sign -o ion-qt.sig ion-qt
gpg --verify ion-qt.sig

gpg --armor --detach-sign -o iond.sig iond
gpg --verify iond.sig
cd ../../..;

make clean;cd src;make clean;cd ..;

# x86_64-apple-darwin11
./autogen.sh;
./configure --prefix=`pwd`/depends/x86_64-apple-darwin11
make HOST=x86_64-apple-darwin11;

#mkdir -p build/v2.1.6.2/x86_64-apple-darwin11;
#cp ./src/iond ./build/v2.1.6.2/x86_64-apple-darwin11/iond;
#cp ./src/qt/ion-qt ./build/v2.1.6.2/x86_64-apple-darwin11/ion-qt;
#strip ./build/v2.1.6.2/x86_64-apple-darwin11/iond
#strip ./build/v2.1.6.2/x86_64-apple-darwin11/ion-qt
# created detached signatures
#cd build/v2.1.6.2/x86_64-apple-darwin11;

#gpg --detach-sign -o ion-qt.sig ion-qt
#gpg --verify ion-qt.sig

#gpg --armor --detach-sign -o iond.sig iond
#gpg --verify iond.sig
#cd ../../..;


#make clean;cd src;make clean;cd ..;