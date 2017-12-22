DESCRIPTION = "SIP stack from Belledonne Communications"
LICENSE = "GPLv2"
SECTION = "libs/network"

INC_PR = "r0"


DEPENDS = "libpolarssl-bc bcunit"
PROVIDES = "libbctoolbox"
S = "${WORKDIR}/git"


INSANE_SKIP_${PN} += "dev-deps "

inherit  distutils-base cmake  pkgconfig

#PACKAGES = "${PN}-dbg ${PN} ${PN}-doc ${PN}-dev "

#-DCMAKE_BUILD_TYPE=Release
EXTRA_OECMAKE += " -DENABLE_STATIC=NO -DENABLE_TESTS=NO -DENABLE_TESTS_COMPONENT=ON -DCMAKE_SKIP_INSTALL_RPATH=ON "
EXTRA_OECMAKE += "-DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib"


