DESCRIPTION = "SSL/TLS library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/network"

INC_PR = "r0"

PN = "polarssl-bc"
PROVIDES = "libpolarssl-bc"
S = "${WORKDIR}/git"

EXTRA_OECMAKE += "-DENABLE_SHARED=ON"

PACKAGES += " ${PN}-utils"

FILES_${PN}-utils += "${bindir}/polarssl_*"

inherit cmake

