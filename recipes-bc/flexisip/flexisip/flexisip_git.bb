require flexisip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "dbfc16402db47558ef97090b302715e3556c15b2"
SRC_URI = "git://git.linphone.org/flexisip.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=50dcff91f43ed602118e107ad4dccb65"
