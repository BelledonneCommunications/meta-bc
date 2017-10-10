DESCRIPTION = "Belledonne Communications G729 codec library and mediastreamer2 pluginc"
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "GPLv2"
INC_PR = "r0"

FILES_${PN} = "${libdir}/*.so.*"

EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON "
EXTRA_OECMAKE += "-DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib"
PROVIDES = "libbcg729"
S = "${WORKDIR}/git"


FILES_${PN}-dev = " \
    ${includedir} \
    ${libdir}/lib*.so \
    ${libdir}/*.a \
    ${prefix}/share/Bcg729*" 

inherit cmake
