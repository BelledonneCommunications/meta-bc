DESCRIPTION = "Linphone version of sofia-sip"
LICENSE = "LGPLv2.1"
HOMEPAGE = "http://sofia-sip.sourceforge.net/"
SECTION = "libs/network"

PN = "libsofia-sip-ua"
PROVIDES = "libsofia-sip-ua-bc"
S = "${WORKDIR}/git"

inherit autotools pkgconfig lib_package

do_autoreconf () {
    ./autogen.sh
}