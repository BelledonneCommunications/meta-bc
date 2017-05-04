DESCRIPTION = "GSM Audio Library"
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "libgsm"

INC_PR = "r2"

inherit cmake pkgconfig

PROVIDES = "libgsm"
PACKAGES = " ${PN}-dbg ${PN} ${PN}-doc ${PN}-dev "

#EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON"
FILES_${PN} += " \
    ${libdir}/lib*.so "    

FILES_${PN}-dbg += "\
 	${libdir}/.debug/ \"
