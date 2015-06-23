DESCRIPTION = "General purpose SIP proxy with media capabilities from Belledonne Communications"
LICENSE = "AGPLv3"
HOMEPAGE = "http://www.linphone.org/technical-corner/flexisip/overview"
SECTION = "x11/network"

DEPENDS = "libsofia-sip-ua-bc libortp"
PROVIDES = "flexisip"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--enable-odbc=no --enable-redis=no --enable-protobuf=no --enable-transcoder=no"

inherit autotools pkgconfig gettext