DESCRIPTION = "Plugins for linphone to have additional codecs."
LICENSE = "MIT"

inherit packagegroup

PROVIDES = "linphone-plugins"
DEPENDS_${PN} = "libmediastreamer2"
RDEPENDS_${PN} = " libvpx msopenh264"

