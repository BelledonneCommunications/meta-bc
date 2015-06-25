DESCRIPTION = "SSL/TLS library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/network"

INC_PR = "r0"

PN = "polarssl-bc"
PROVIDES = "libpolarssl-bc"
S = "${WORKDIR}/git"
ALLOW_EMPTY="1"

EXTRA_OECONF += " --enable-shared"

PACKAGES += " ${PN}-utils"

FILES_${PN}-utils += "${bindir}/polarssl_*"

inherit autotools pkgconfig

do_autoreconf () {
    ./autogen.sh
}
