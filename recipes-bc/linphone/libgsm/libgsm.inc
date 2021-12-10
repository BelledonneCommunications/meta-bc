DESCRIPTION = "GSM Audio Library"
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "libgsm"

INC_PR = "r2"

inherit cmake pkgconfig

PROVIDES = "libgsm"
PACKAGES = " ${PN}-dbg ${PN} ${PN}-doc ${PN}-dev "

#EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON"

do_install:append () {
    mv ${D}/${libdir}/libgsm.so ${D}/${libdir}/libgsm.so.0
    cd ${D}/${libdir}
    ln -s libgsm.so.0 libgsm.so
}
  
