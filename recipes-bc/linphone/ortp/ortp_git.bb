require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "5f8fcddce392f1510768949a4691f9e8c170badb"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
