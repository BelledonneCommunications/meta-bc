DESCRIPTION = "Audio/video SIP-based IP phone (console edition)"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/linphone/overview"
SECTION = "comm"

INC_PR = "r0"

DEPENDS = "libbellesip libortp libmediastreamer2 libxml2"
PROVIDES = "liblinphone"
S = "${WORKDIR}/git"

PACKAGECONFIG ??= "sqlite zlib ${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11', '', d)}"
PACKAGECONFIG[sqlite] = "--enable-msg-storage=yes, --enable-msg-storage=no, sqlite3"
PACKAGECONFIG[zlib] = ", --disable-zlib, zlib"
PACKAGECONFIG[x11] = "--enable-gtk_ui=yes, --enable-gtk_ui=no, gtk+"

EXTRA_OECONF += " --without-readline --enable-external-mediastreamer=yes --enable-external-ortp=yes"
INSANE_SKIP_${PN} += "dev-deps"

PACKAGES += "${PN}-common ${PN}-utils"

FILES_${PN} += "${bindir}/lp-autoanswer ${bindir}/linphonec ${bindir}/linphonecsh"
FILES_${PN}-common = "\
            ${bindir}/lp-gen-wrappers \
            ${datadir}/pixmaps \
            ${datadir}/applications \
            ${datadir}/gnome \
            ${datadir}/tutorials \
            ${datadir}/linphone \
            ${datadir}/sounds/linphone/hello8000.wav \
            ${datadir}/sounds/linphone/hello16000.wav \
            ${datadir}/sounds/linphone/incoming_chat.wav \
            ${datadir}/sounds/linphone/ringback.wav \
            ${datadir}/images/nowebcamCIF.jpg \
            ${datadir}/appdata/linphone.appdata.xml \
            ${datadir}/sounds/linphone/rings \
            ${datadir}/icons"
FILES_${PN}-utils = "${bindir}/test_ecc ${bindir}/test_lsd ${bindir}/xml2lpc_test ${bindir}/lpc2xml_test"

inherit autotools pkgconfig gettext

do_configure_prepend() {
    #!/bin/sh
    echo 'Deleting mediastreamer2 and oRTP'
    rm -rf ${S}/mediastreamer2
    rm -rf ${S}/oRTP
    echo 'mediastreamer2 and oRTP have been removed'
}