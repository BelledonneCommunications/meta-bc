DESCRIPTION = "Powerful and lightweight streaming engine specialized for voice and video telephony applications"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/mediastreamer2/overview"
SECTION = "libs/network"

PN = "libmediastreamer2"
DEPENDS = "intltool-native libortp-dev speex alsa-lib libvpx libv4l"
PROVIDES = "${PN} ${PN}-dev"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--disable-ffmpeg --disable-glx"

PACKAGES += "${PN}-common ${PN}-bin"

FILES_${PN}-common = "${datadir}/images/nowebcamCIF.jpg"
FILES_${PN}-bin = "${bindir}/mediastream ${bindir}/msaudiocmp"
FILES_${PN} += " ${libdir}/mediastreamer/plugins"

inherit autotools pkgconfig gettext