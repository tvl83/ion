# strip binaries
strip iond
strip ion-qt

# create hash sums
sha1sum ./iond > sha1sum
sha256sum ./iond > sha256sum
sha512sum ./iond > sha512sum
md5sum ./iond > md5sum

sha1sum ./ion-qt >> sha1sum
sha256sum ./ion-qt >> sha256sum
sha512sum ./ion-qt >> sha512sum
md5sum ./ion-qt >> md5sum

