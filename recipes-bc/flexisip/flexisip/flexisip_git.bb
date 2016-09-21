require flexisip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "1d4f50ebf166dff565735bf28d037697f8adb7e0"
SRC_URI = "git://git.linphone.org/flexisip.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=50dcff91f43ed602118e107ad4dccb65"
