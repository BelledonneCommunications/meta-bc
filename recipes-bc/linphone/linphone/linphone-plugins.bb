DESCRIPTION = "Plugins for linphone to have additional codecs."
LICENSE = "GPLv2"

inherit packagegroup

PROVIDES = "linphone-plugins"
DEPENDS_${PN} = "libmediastreamer2"
RDEPENDS_${PN} = " libvpx msopenh264"

