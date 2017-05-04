DESCRIPTION = "Mediastreamer2 plugin adding support for H264 codec"
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "GPLv3"


LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552"


DEPENDS = "linphone openh264"

inherit cmake pkgconfig

EXTRA_OECMAKE += " -DCMAKE_SKIP_INSTALL_RPATH=ON"

PACKAGES = " ${PN}-dbg ${PN} ${PN}-doc ${PN}-dev ${PN}-staticdev"

FILES_${PN} = "${libdir}/mediastreamer/plugins/*.so \
    ${libdir}/lib*.so "

FILES_${PN}-dbg += "\
        ${libdir}/.debug/ \
		${libdir}/mediastreamer/plugins/.debug"

FILES_${PN}-dev = "${libdir}/mediastreamer/plugins/*.la "

FILES_${PN}-staticdev = "${libdir}/mediastreamer/plugins/*.a "


