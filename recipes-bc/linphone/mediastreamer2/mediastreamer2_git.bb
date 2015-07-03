require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "76a4f8135e4144ea579a65ad48fc5e76730701ae"
SRC_URI = "git://git.linphone.org/mediastreamer2.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
