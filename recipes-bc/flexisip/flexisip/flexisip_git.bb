require flexisip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "797f412e85e53ba76def6e32e53fc133379f481b"
SRC_URI = "git://git.linphone.org/flexisip.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=50dcff91f43ed602118e107ad4dccb65"
