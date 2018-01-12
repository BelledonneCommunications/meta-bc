DESCRIPTION = "Belr is Belledonne Communications' language recognition library."
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/"
SECTION = "libs/network"

INC_PR = "r0"
DEPENDS = "bctoolbox"
EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON "
EXTRA_OECMAKE += "-DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib"
PROVIDES = "libbelr"
S = "${WORKDIR}/git"

inherit cmake

FILES_${PN}-dev = " \
    ${includedir} \
    ${libdir}/lib*.so \
    ${libdir}/*.a \
    ${prefix}/share/Belr \
    ${datadir}/belr-tester/res \
    ${datadir}/belr-tester/res/sipgrammar.txt \
    ${datadir}/belr-tester/res/response.txt \
    ${datadir}/belr-tester/res/vcardgrammar.txt \
    ${datadir}/belr-tester/res/basicgrammar.txt \
    ${datadir}/belr-tester/res/register.txt"
