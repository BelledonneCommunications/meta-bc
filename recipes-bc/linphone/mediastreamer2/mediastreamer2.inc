DESCRIPTION = "Powerful and lightweight streaming engine specialized for voice and video telephony applications"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/mediastreamer2/overview"
SECTION = "libs/network"

INC_PR = "r0"

DEPENDS = "libortp speex alsa-lib spandsp libv4l virtual/gettext"
PROVIDES += "libmediastreamer2"
S = "${WORKDIR}/git"

PACKAGECONFIG ??= "ffmpeg vpx opus srtp bzrtp gsm ${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11', '', d)}"
PACKAGECONFIG[ffmpeg] = ",  -DENABLE_FFMPEG=NO, libav"
PACKAGECONFIG[vpx] = ", -DENABLE_VPX=NO, libvpx"
PACKAGECONFIG[opus] = ", -DENABLE_OPUS=NO, opus-bc"
PACKAGECONFIG[srtp] = ", -DENABLE_SRTP=NO, libsrtp-bc"
PACKAGECONFIG[bzrtp] = " -DENABLE_BZRTP=YES, -DENABLE_BZRTP=NO, libbzrtp"
PACKAGECONFIG[gsm] = " -DENABLE_GSM=YES, -DENABLE_GSM=NO, libgsm"
PACKAGECONFIG[x11] = " -DENABLE_X11=YES -DENABLE_XV=YES,  -DENABLE_X11=NO -DENABLE_XV=NO, libxv"

inherit  cmake lib_package pkgconfig pythonnative 
EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON -DENABLE_GLX=ON -DENABLE_GL=NO -DENABLE_GLX_DEFAULT_VALUE=NO -DENABLE_PCAP=NO -DENABLE_BV16=NO -DENABLE_DOC=NO"
EXTRA_OECMAKE += "-DCMAKE_INSTALL_DATAROOTDIR=share -DCMAKE_INSTALL_LIBDIR=lib -DENABLE_UNIT_TESTS=NO"

CFLAGS += "-Wno-type-limits -Wno-stringop-truncation -Wno-cast-function-type"
#PACKAGES += "${PN}-bin"

#FILES_${PN}-bin = "${bindir}/mediastream ${bindir}/msaudiocmp"
FILES:${PN} += " ${libdir}/mediastreamer/plugins ${datadir}/images/nowebcamCIF.jpg"

FILES:${PN}-dev += " \
    ${includedir} \
    ${libdir}/lib*.so \
    ${libdir}/*.la \
    ${libdir}/*.a \
    ${libdir}/pkgconfig \
    ${prefix}/share/Mediastreamer2 \
    ${prefix}/share/mediastreamer2_tester"

#inherit autotools pkgconfig gettext

