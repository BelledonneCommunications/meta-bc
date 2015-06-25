DESCRIPTION = "Audio/video SIP-based IP phone (console edition)"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/linphone/overview"
SECTION = "x11/network"

INC_PR = "r0"

DEPENDS = "libbellesip-dev libortp-dev libmediastreamer2-dev libxml2"
PROVIDES = "${PN} ${PN}-dev"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--without-readline --enable-external-mediastreamer=yes --enable-external-ortp=yes --enable-gtk_ui=no"
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