require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "${AUTOREV}"
#SRCREV = "ce584992480cf7463e9d0b8be3870d62ee43baaf"
#SRCREV = "7e2a6a56fa6a70a6ec3875cea26f1f1e17910917"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"
