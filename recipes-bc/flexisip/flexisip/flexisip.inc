DESCRIPTION = "General purpose SIP proxy with media capabilities from Belledonne Communications"
LICENSE = "AGPLv3"
HOMEPAGE = "http://www.linphone.org/technical-corner/flexisip/overview"
SECTION = "comm"

INC_PR = "r0"

DEPENDS = "libsofia-sip-ua-bc libortp"
RDEPENDS_${PN} = "lsb"
S = "${WORKDIR}/git"

inherit  cmake update-rc.d


EXTRA_OECMAKE += "-DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib"
EXTRA_OECMAKE += "	-DCMAKE_SKIP_INSTALL_RPATH=ON \
		  	-DENABLE_REDIS=NO \
			-DENABLE_PROTOBUF=NO \
			-DENABLE_TRANSCODER=NO \
			-DENABLE_SNMP=NO \
			-DENABLE_SOCI=NO \
			-DENABLE_DOC=NO "
FILES_${PN} += "${libdir}/*.so"
FILES_${PN} += "${bindir}/flexisip"
FILES_${PN}-dev = "${bindir}/flexisip_pusher"
FILES_${PN}-dev += "${bindir}/flexisip_serializer"

#EXTRA_OECONF = "--enable-redis=no \
#                --enable-protobuf=no \
#                --enable-transcoder=no \
#                --enable-xsd=no \
#                --enable-snmp=no \
#                --enable-soci=no \
#		--enable-doc=no \
#                --prefix=${D}${prefix} \
#                --exec_prefix=${D}${exec_prefix} \
#                --with-mysql=${D}${includedir}/mysql/ "
				


INITSCRIPT_NAME = "flexisip"
INITSCRIPT_PARAMS = "defaults"

