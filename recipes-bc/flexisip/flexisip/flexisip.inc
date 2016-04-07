DESCRIPTION = "General purpose SIP proxy with media capabilities from Belledonne Communications"
LICENSE = "AGPLv3"
HOMEPAGE = "http://www.linphone.org/technical-corner/flexisip/overview"
SECTION = "comm"

INC_PR = "r0"

DEPENDS = "libsofia-sip-ua-bc libortp"
RDEPENDS_${PN} = "lsb"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--enable-odbc=no \
				--enable-redis=no\
				 --enable-protobuf=no \
				 --enable-transcoder=no \
				 --enable-xsd=no \
				 --enable-snmp=no \
				 --enable-soci=no \
				 --prefix=${STAGING_DIR_HOST}/usr \
				--exec_prefix=${STAGING_DIR_HOST}/usr   \
				 --bindir=${STAGING_DIR_HOST}/usr/bin    \
				 --sbindir=${STAGING_DIR_HOST}/usr/sbin     \
				 --libexecdir=${STAGING_DIR_HOST}/usr/lib/flexisip          \
				 --datadir=${STAGING_DIR_HOST}/usr/share      \
				 --sysconfdir=${STAGING_DIR_HOST}/etc   \
				 --sharedstatedir=${STAGING_DIR_HOST}/com        \
				 --localstatedir=${STAGING_DIR_HOST}/var      \      
				 --libdir=${STAGING_DIR_HOST}/usr/lib        \
				 --includedir=${STAGING_DIR_HOST}/usr/include   \            
				 --oldincludedir=${STAGING_DIR_HOST}/usr/include \
				 --with-mysql=${STAGING_DIR_HOST}/usr/include/mysql/ "
				


INITSCRIPT_NAME = "flexisip"
INITSCRIPT_PARAMS = "defaults"

inherit autotools pkgconfig update-rc.d