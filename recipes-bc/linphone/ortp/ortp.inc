DESCRIPTION = "Real-time transport protocol (RFC 3550) library"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/ortp/overview"
SECTION = "libs/network"

INC_PR = "r0"

EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON "
PROVIDES = "libortp"
S = "${WORKDIR}/git"

inherit cmake

FILES_${PN}-dev = " \
    ${includedir} \
    ${libdir}/lib*.so \
    ${libdir}/*.la \
    ${libdir}/*.a \
    ${libdir}/*.o \
    ${libdir}/pkgconfig \
    ${prefix}/share/oRTP/" 

