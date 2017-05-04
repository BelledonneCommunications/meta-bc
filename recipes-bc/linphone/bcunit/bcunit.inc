DESCRIPTION = "Cunit library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/"

INC_PR = "r0"

PN = "bcunit"
PROVIDES = "bcunit"
S = "${WORKDIR}/git"

EXTRA_OECMAKE += " -DENABLE_SHARED=ON"
FILES_${PN} += "${datadir}/CUnit \
		/usr/doc"

inherit cmake pkgconfig

