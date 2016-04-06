require belle-sip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "f0deca3caf3ba2034c0839e49f9c51705eba69c4"
SRC_URI = "git://git.linphone.org/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
