DESCRIPTION = "SIP stack from Belledonne Communications"
LICENSE = "GPLv2"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "libpolarssl-bc"
PROVIDES = "bctoolbox"
S = "${WORKDIR}/git"


INSANE_SKIP_${PN} += "dev-deps"

inherit cmake pkgconfig

EXTRA_OECMAKE += "-DENABLE_TESTS=OFF"

do_autoreconf () {
    ./autogen.sh
}
