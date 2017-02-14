require belle-sip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "${AUTOREV}"
SRC_URI = "git://git.linphone.org/belle-sip.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848"
