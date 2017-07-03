This is how I do:

    Unzip/untar an upstream tarball. Say foo-x.y.tar.gz

    Then put the debian/ directory inside that extracted directory

    Put an entry in the debian/changelog file(either manually or using dch -i. If the version number reads say x.y

    Rename that foo-x.y.tar.gz to foo_x.y.orig.tar.gz. Please see how the orig tarball should be named - sourcepackagename_x.y.orig.tar.gz

    Now change to the directory where you have debian/ directory

    Run debuild -S -k9E6622AB where 9E6622AB is my GPG key. You need to sign your packages.

If everything was fine, then three files are created - that .orig.tar.gz file, a .dsc file and a third is .changes file

I hope you would be using pbuilder/cowbuilder or any such builder of your choice to create the deb file.

Rest you have to do is

    dput ppa:yourusername/ppaname foo.changes

Ofcourse you need to create a PPA of that name