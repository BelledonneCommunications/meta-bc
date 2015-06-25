DESCRIPTION = "SSL/TLS library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/network"

PN = "libpolarssl"
PROVIDES = "${PN}-bc ${PN}-bc-dev ${PN}-utils"
S = "${WORKDIR}/git"

EXTRA_OECONF += " --enable-shared"

PACKAGES += " ${PN}-bc-dev ${PN}-utils"

FILES_${PN}-utils += "${bindir}/polarssl_*"

inherit autotools pkgconfig

do_autoreconf () {
    ./autogen.sh
}
