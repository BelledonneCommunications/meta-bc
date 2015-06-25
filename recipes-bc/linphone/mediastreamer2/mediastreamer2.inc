DESCRIPTION = "Powerful and lightweight streaming engine specialized for voice and video telephony applications"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/mediastreamer2/overview"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "intltool-native libortp speex alsa-lib libvpx libv4l libav libsrtp"
PROVIDES += "libmediastreamer2"
S = "${WORKDIR}/git"

EXTRA_OECONF = "--disable-glx --enable-xv=no --enable-x11=no"

PACKAGES += "${PN}-bin"

FILES_${PN}-bin = "${bindir}/mediastream ${bindir}/msaudiocmp"
FILES_${PN} += " ${libdir}/mediastreamer/plugins ${datadir}/images/nowebcamCIF.jpg"

inherit autotools pkgconfig gettext