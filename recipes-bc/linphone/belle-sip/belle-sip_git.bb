require belle-sip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "77510489a6f72d2aa2a539d800f24b0cdf82a23c"
SRC_URI = "git://git.linphone.org/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
