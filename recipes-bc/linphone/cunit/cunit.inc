DESCRIPTION = "Cunit library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"
SECTION = "libs/"

INC_PR = "r0"

PN = "cunit-bc"
PROVIDES = "cunit-bc"
S = "${WORKDIR}/git"

EXTRA_OECONF += " --enable-shared"


inherit autotools pkgconfig

do_autoreconf () {
    ./autogen.sh
}
