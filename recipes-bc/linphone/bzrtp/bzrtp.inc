DESCRIPTION = "Opensource implementation of ZRTP keys exchange protocol"
LICENSE = "GPLv2"
HOMEPAGE = "https://github.com/BelledonneCommunications/bzrtp"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "bctoolbox libxml2 zlib polarssl-bc"
PROVIDES = "libbzrtp"
S = "${WORKDIR}/git"

EXTRA_OECMAKE += " -DENABLE_STATIC=NO  -DENABLE_TESTS=OFF"
EXTRA_OECMAKE += "-DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib"

inherit cmake
