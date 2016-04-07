DESCRIPTION = "Powerful and lightweight streaming engine specialized for voice and video telephony applications"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/mediastreamer2/overview"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "intltool-native libortp speex alsa-lib spandsp libv4l"
PROVIDES += "libmediastreamer2"
S = "${WORKDIR}/git"

PACKAGECONFIG ??= "ffmpeg vp8 opus srtp bzrtp ${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11', '', d)}"
PACKAGECONFIG[ffmpeg] = ", --disable-ffmpeg, libav"
PACKAGECONFIG[vp8] = ", --disable-vp8, libvpx"
PACKAGECONFIG[opus] = ", --disable-opus, opus-bc"
PACKAGECONFIG[srtp] = ", --with-srtp=none, libsrtp-bc"
PACKAGECONFIG[bzrtp] = "--enable-zrtp=yes, --enable-zrtp=no, libbzrtp"
PACKAGECONFIG[dtls] = "--enable-dtls=yes, --enable-dtls=no"
PACKAGECONFIG[x11] = "--enable-x11=yes --enable-xv=yes, --enable-x11=no --enable-xv=no, libxv"

EXTRA_OECONF += " --disable-glx"

PACKAGES += "${PN}-bin"

FILES_${PN}-bin = "${bindir}/mediastream ${bindir}/msaudiocmp"
FILES_${PN} += " ${libdir}/mediastreamer/plugins ${datadir}/images/nowebcamCIF.jpg"

inherit autotools pkgconfig gettext