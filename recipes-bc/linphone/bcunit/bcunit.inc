DESCRIPTION = "Cunit library"
LICENSE = "GPLv2"
SECTION = "libs/"

INC_PR = "r0"

PN = "bcunit"
PROVIDES = "bcunit"
S = "${WORKDIR}/git"

EXTRA_OECONF += " --enable-shared"
FILES_${PN} += "${datadir}/BCUnit "
FILES_${PN}-doc += "		/usr/doc"

inherit autotools pkgconfig

do_autoreconf () {
    ./autogen.sh
}
