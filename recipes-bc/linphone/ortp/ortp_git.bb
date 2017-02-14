require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "${AUTOREV}"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
