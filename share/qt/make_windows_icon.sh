#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/ion.ico

convert ../../src/qt/res/icons/ion-16.png ../../src/qt/res/icons/ion-32.png ../../src/qt/res/icons/ion-48.png ${ICON_DST}
