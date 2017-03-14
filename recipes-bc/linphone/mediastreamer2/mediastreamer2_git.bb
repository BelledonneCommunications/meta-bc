require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "4e5134f8578629cd55afc3d7b8b7bdb5ff41d264"
SRC_URI = "git://git.linphone.org/mediastreamer2.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
