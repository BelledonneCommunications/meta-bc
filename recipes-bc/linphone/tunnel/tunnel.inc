DESCRIPTION = "Linphone tunnel library"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/tunnel/overview"
SECTION = "libs/network"

INC_PR = "r0"
DEPENDS = "bctoolbox openssl"
DEPENDS_${PN} = "bctoolbox openssl"
PROVIDES = "tunnel
S = "${WORKDIR}/git"

inherit autotools pkgconfig