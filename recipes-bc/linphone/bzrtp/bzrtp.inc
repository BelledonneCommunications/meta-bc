DESCRIPTION = "Opensource implementation of ZRTP keys exchange protocol"
LICENSE = "GPLv2"
HOMEPAGE = "https://github.com/BelledonneCommunications/bzrtp"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "bctoolbox libxml2 zlib"
PROVIDES = "libbzrtp"
S = "${WORKDIR}/git"

EXTRA_OECONF = " --prefix=${STAGING_DIR_HOST}${layout_exec_prefix}/usr"

inherit autotools pkgconfig
