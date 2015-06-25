DESCRIPTION = "Linphone version of sofia-sip"
LICENSE = "LGPLv2.1"
HOMEPAGE = "http://sofia-sip.sourceforge.net/"
SECTION = "libs/network"

INC_PR = "r0"

PN = "libsofia-sip-ua"
DEPENDS = "openssl"
PROVIDES = "${PN}-bc"
S = "${WORKDIR}/git"

PACKAGES += "${PN}-common"

FILES_${PN}-common = "${datadir}/sofia-sip/tag_dll.awk ${datadir}/sofia-sip/msg_parser.awk"

inherit autotools pkgconfig lib_package

do_autoreconf () {
    ./autogen.sh
}