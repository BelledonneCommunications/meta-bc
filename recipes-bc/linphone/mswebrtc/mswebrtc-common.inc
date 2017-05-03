
DESCRIPTION = "Mediastreamer2 plugin adding support for WebRTC features (iSAC codec, AEC...)"
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "GPLv2"
DEPENDS = "mediastreamer2"

#INHIBIT_PACKAGE_STRIP = "1"  
EXTRA_OECMAKE += " -DENABLE_ISAC=NO "

FILES_${PN} = "${libdir}/mediastreamer/plugins/*.so.*"
FILES_${PN}-dev = "${libdir}/mediastreamer/plugins/*.la ${libdir}/mediastreamer/plugins/*.so"
FILES_${PN}-dev += " ${libdir}/mediastreamer/plugins/*.a "
FILES_${PN}-dbg = "${libdir}/mediastreamer/plugins/.debug/*.so.* /usr/src/debug"

LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552"

inherit cmake pkgconfig
