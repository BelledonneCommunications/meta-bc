DESCRIPTION = "SIP stack from Belledonne Communications"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/belle-sip/overview"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "libantlr3c-bc bctoolbox libpolarssl-bc zlib"
PROVIDES = "libbellesip"
S = "${WORKDIR}/git"

EXTRA_OECONF += "--disable-strict --with-antlr=${STAGING_DIR_HOST}${layout_exec_prefix}/usr "
INSANE_SKIP_${PN} += "dev-deps"

inherit autotools pkgconfig

do_autoreconf () {
    ./autogen.sh
}




