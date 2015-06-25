DESCRIPTION = "SRTP is a security profile for RTP that adds confidentiality, message authentication, and replay protection to that protocol."
LICENSE = "BSD"
HOMEPAGE = "http://srtp.sourceforge.net/srtp.html"
SECTION = "libs/network"

INC_PR = "r0"

PN = "libsrtp"
DEPENDS = ""
PROVIDES = "${PN} ${PN}-dev"
S = "${WORKDIR}/git"

inherit autotools pkgconfig