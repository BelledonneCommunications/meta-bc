DESCRIPTION = "General purpose SIP proxy with media capabilities from Belledonne Communications"
LICENSE = "AGPLv3"
HOMEPAGE = "http://www.linphone.org/technical-corner/flexisip/overview"
SECTION = "comm"

INC_PR = "r0"

DEPENDS = "libsofia-sip-ua-bc libortp"
RDEPENDS_${PN} = "lsb"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--enable-odbc=no --enable-redis=no --enable-protobuf=no --enable-transcoder=no"

INITSCRIPT_NAME = "flexisip"
INITSCRIPT_PARAMS = "defaults"

inherit autotools pkgconfig gettext update-rc.d