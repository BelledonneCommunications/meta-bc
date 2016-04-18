require belle-sip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "c05ca9b4c459d9d320be8b3f6b3587dfb92a5f7d"
SRC_URI = "git://git.linphone.org/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
