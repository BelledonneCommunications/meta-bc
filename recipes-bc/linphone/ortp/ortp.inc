DESCRIPTION = "Real-time transport protocol (RFC 3550) library"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/ortp/overview"
SECTION = "libs/network"

INC_PR = "r0"

PROVIDES = "libortp"
DEPENDS= "bctoolbox"
S = "${WORKDIR}/git"

inherit autotools pkgconfig
