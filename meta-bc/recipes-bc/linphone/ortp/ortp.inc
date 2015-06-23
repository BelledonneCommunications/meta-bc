DESCRIPTION = "Real-time transport protocol (RFC 3550) library"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/ortp/overview"
SECTION = "libs/network"

PN = "libortp"
DEPENDS = ""
PROVIDES = "${PN} ${PN}-dev"
S = "${WORKDIR}/git"

inherit autotools pkgconfig