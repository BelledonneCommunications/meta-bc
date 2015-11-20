require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "095dcbe53abb01be1c3e4d57c6b46f89ea9ad4b1"
SRC_URI = "git://git.linphone.org/mediastreamer2.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
