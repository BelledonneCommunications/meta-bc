DESCRIPTION = "Cunit library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/"

INC_PR = "r0"

PN = "bcunit"
PROVIDES = "bcunit"
S = "${WORKDIR}/git"

EXTRA_OECONF += " --enable-shared"
FILES_${PN} += "${datadir}/CUnit \
		/usr/doc"

inherit autotools pkgconfig

do_autoreconf () {
    ./autogen.sh
}
