require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "e715cc559f1c60710dae306426d1ade42420c517"
SRC_URI = "git://git.linphone.org/mediastreamer2.git;branch=2.15.x"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
