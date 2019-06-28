DESCRIPTION = "General purpose SIP proxy with media capabilities from Belledonne Communications"
LICENSE = "AGPLv3"
HOMEPAGE = "http://www.linphone.org/technical-corner/flexisip/overview"
SECTION = "comm"

INC_PR = "r0"

PROVIDES = "flexisip flexisip-proxy flexisip-presence flexisip-conference"

DEPENDS = "libsofia-sip-ua-bc linphone-sdk mariadb redis"
RDEPENDS_${PN} = "lsb"
S = "${WORKDIR}/git"

inherit cmake systemd

PACKAGECONFIG ??= "presence conference"
PACKAGECONFIG[presence] = "-DENABLE_PRESENCE=ON,-DENABLE_PRESENCE=NO"
PACKAGECONFIG[conference] = "-DENABLE_CONFERENCE=ON,-DENABLE_CONFERENCE=NO"
PACKAGECONFIG[mdns]= "-DENABLE_MDNS=YES,-DENABLE_MDNS=NO,libbellesip"

BUILD_INSTALL_PREFIX = "${WORKDIR}/git"

INSTALL_PATH = "/opt/belledonne-communications"

BUILD_INSTALL_PATH = "${BUILD_INSTALL_PREFIX}${INSTALL_PATH}"

OECMAKE_EXTRA_ROOT_PATH = "${INSTALL_PATH}"

EXTRA_OECMAKE += " -DCMAKE_CROSSCOMPILING=YES"
EXTRA_OECMAKE += " -DCMAKE_TOOLCHAIN_FILE=${WORKDIR}/toolchain.cmake"

EXTRA_OECMAKE += " -DCMAKE_PREFIX_PATH=${STAGING_DIR_HOST}/${OECMAKE_EXTRA_ROOT_PATH}"

EXTRA_OECMAKE += " -DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib"
EXTRA_OECMAKE += "  	-DENABLE_REDIS=NO \
			-DENABLE_PROTOBUF=NO \
			-DENABLE_TRANSCODER=YES \
			-DENABLE_SNMP=NO \
			-DENABLE_SOCI=YES \
			-DENABLE_DOC=NO"

#The actual target installation prefix when cross-compiling
EXTRA_OECMAKE += " -DCMAKE_INSTALL_PREFIX=${INSTALL_PATH}"

EXTRA_OECMAKE += " -DCMAKE_SKIP_RPATH=YES"
EXTRA_OECMAKE += " -DCMAKE_EXE_LINKER_FLAGS='-Wl,-rpath-link=${STAGING_DIR_HOST}${INSTALL_PATH}/lib -Wl,-rpath=${INSTALL_PATH}/lib'"

EXTRA_OECMAKE += " -DCMAKE_C_IMPLICIT_INCLUDE_DIRECTORIES=${STAGING_INCDIR}"
EXTRA_OECMAKE += " -DCMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES=${STAGING_INCDIR}"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

FILES_${PN} += "${INSTALL_PATH}/lib/*.so"
FILES_${PN} += "${INSTALL_PATH}/bin/flexisip"
FILES_${PN} += "${INSTALL_PATH}/bin/flexisip_tester"
FILES_${PN} += "${INSTALL_PATH}/share/*"
FILES_${PN} += "/lib/systemd/system/"

FILES_${PN}-dev = "${INSTALL_PATH}/bin/flexisip_pusher"
FILES_${PN}-dev += "${INSTALL_PATH}/bin/flexisip_serializer"
FILES_${PN}-dev += "${INSTALL_PATH}/include/*"

SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE_${PN} = "flexisip-proxy.service flexisip-proxy@.service flexisip-conference.service flexisip-conference@.service flexisip-presence.service flexisip-presence@.service"
