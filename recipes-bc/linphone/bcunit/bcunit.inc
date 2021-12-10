DESCRIPTION = "BCunit library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/"

INC_PR = "r0"

PN = "bcunit"
PROVIDES = "bcunit"
S = "${WORKDIR}/git"

EXTRA_OECMAKE += " -DENABLE_SHARED=ON "
FILES:${PN} += "${datadir}/BCUnit \
		${datadir}/BCunit \
		/usr/doc"


inherit cmake pkgconfig

