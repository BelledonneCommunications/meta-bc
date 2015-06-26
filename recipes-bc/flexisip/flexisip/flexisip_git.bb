require flexisip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "e04e61193062d567a1410087d5b515058a8f22ee"
SRC_URI = "git://git.linphone.org/flexisip.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=50dcff91f43ed602118e107ad4dccb65"
