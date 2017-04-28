DESCRIPTION = "SIP stack from Belledonne Communications"
LICENSE = "GPLv2"
SECTION = "libs/network"

INC_PR = "r0"


DEPENDS = "mbedtls bcunit"
PROVIDES = "bctoolbox"
S = "${WORKDIR}/git"


INSANE_SKIP_${PN} += "dev-deps "

PACKAGES = "${PN}-dbg ${PN} ${PN}-doc ${PN}-dev "

inherit cmake  pkgconfig

EXTRA_OECMAKE += " -DENABLE_STATIC=NO -DENABLE_TESTS=OFF -DENABLE_TESTS_COMPONENT=OFF -DCMAKE_SKIP_INSTALL_RPATH=ON"

FILES_${PN} += "\
    ${bindir}/* \
    ${sbindir}/* \
    ${libexecdir}/* \
    ${libdir}/lib*.so.* \
    ${sysconfdir} \
    ${sharedstatedir} \
    ${localstatedir} \
    /bin/* \
    /sbin/* \
    /lib/*.so* \
    ${datadir}/${PN} \
    ${libdir}/${PN}/* "

FILES_${PN}-dev += " \
    ${includedir} \
    ${libdir}/lib*.so \
    ${libdir}/*.la \
    ${libdir}/*.a \
    ${libdir}/*.o \
    ${libdir}/pkgconfig \
    ${prefix}/share/bctoolbox/ 
