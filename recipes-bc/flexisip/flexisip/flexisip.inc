DESCRIPTION = "General purpose SIP proxy with media capabilities from Belledonne Communications"
LICENSE = "AGPLv3"
HOMEPAGE = "http://www.linphone.org/technical-corner/flexisip/overview"
SECTION = "comm"

INC_PR = "r0"

DEPENDS = "libsofia-sip-ua-bc libortp"
RDEPENDS_${PN} = "lsb python"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--enable-redis=no \
                --enable-protobuf=no \
                --enable-transcoder=no \
                --enable-xsd=no \
                --enable-snmp=no \
                --enable-soci=no \
		--enable-doc=no \
                --prefix=${D}${prefix} \
                --exec_prefix=${D}${exec_prefix} \
                --with-mysql=${D}${includedir}/mysql/ "
				


INITSCRIPT_NAME = "flexisip"
INITSCRIPT_PARAMS = "defaults"

inherit autotools pkgconfig update-rc.d

do_autoreconf () {
    ./autogen.sh
}
