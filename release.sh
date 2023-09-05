#!/bin/bash
VERSION=1.2.1
DIR=stacer-$VERSION
export VERSION=$VERSION

rm -rf release build
mkdir release build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER=g++ -DCMAKE_PREFIX_PATH=/opt/qt515 ..
make -j $(nproc)
cd ..

mkdir release/$DIR/stacer -p
cp -r icons applications debian release/$DIR
cp -r build/output/* release/$DIR/stacer

# translations
lupdate stacer/stacer.pro -no-obsolete
lrelease stacer/stacer.pro
mkdir release/$DIR/stacer/translations
mv translations/*.qm release/$DIR/stacer/translations

# linuxdeployqt
wget -qcO lqt https://github.com/probonopd/linuxdeployqt/releases/download/continuous/linuxdeployqt-continuous-x86_64.AppImage
chmod +x lqt
unset QTDIR
unset QT_PLUGIN_PATH
unset LD_LIBRARY_PATH
cp release/$DIR/icons/hicolor/256x256/apps/stacer.png release/$DIR/stacer/stacer.png
./lqt release/$DIR/applications/stacer.desktop -unsupported-allow-new-glibc
./lqt release/$DIR/stacer/stacer -bundle-non-qt-libs -no-translations -unsupported-allow-new-glibc -appimage
mv Stacer-*.AppImage release
rm lqt

if [ "$1" == "deb" ]; then
    cd release/$DIR
    dh_make --createorig --indep --yes
    debuild --no-lintian -us -uc
fi
