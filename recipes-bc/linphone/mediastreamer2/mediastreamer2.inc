DESCRIPTION = "Powerful and lightweight streaming engine specialized for voice and video telephony applications"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/mediastreamer2/overview"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "intltool-native libortp speex alsa-lib spandsp libv4l"
PROVIDES += "libmediastreamer2"
S = "${WORKDIR}/git"

PACKAGECONFIG ??= "ffmpeg vpx opus srtp bzrtp ${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11', '', d)}"
PACKAGECONFIG[ffmpeg] = ",  -DENABLE_FFMPEG=NO, libav"
PACKAGECONFIG[vpx] = ", -DENABLE_VPX=NO, libvpx"
PACKAGECONFIG[opus] = ", -DENABLE_OPUS=NO, opus-bc"
PACKAGECONFIG[srtp] = ", -DENABLE_SRTP=NO, libsrtp-bc"
PACKAGECONFIG[bzrtp] = " -DENABLE_BZRTP=YES, -DENABLE_BZRTP=NO, libbzrtp"
PACKAGECONFIG[x11] = " -DENABLE_X11=YES -DENABLE_XV=YES,  -DENABLE_X11=NO -DENABLE_XV=NO, libxv"


EXTRA_OECMAKE += " -DENABLE_GLX_DEFAULT_VALUE=NO -DENABLE_PCAP=NO "

PACKAGES += "${PN}-bin"

FILES_${PN}-bin = "${bindir}/mediastream ${bindir}/msaudiocmp"
FILES_${PN} += " ${libdir}/mediastreamer/plugins ${datadir}/images/nowebcamCIF.jpg"

inherit cmake gettext pkgconfig
