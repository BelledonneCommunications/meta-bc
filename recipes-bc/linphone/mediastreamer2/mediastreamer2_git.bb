require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "eb2af04948a1a0e0f3384f0e46c3513b0aa51e95"
#SRCREV = "1afe5d921a30b8dc2dffb8838e600b4bf97e623d"
SRC_URI = "git://git.linphone.org/mediastreamer2.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
