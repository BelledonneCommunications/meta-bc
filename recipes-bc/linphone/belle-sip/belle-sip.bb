require belle-sip.inc

inherit gitpkgv

PR = "${INC_PR}.0"
SRCREV = "c840e2192b2d0151cc895b844e44bfe0d2103fcf"
SRC_URI = "git://git.linphone.org/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"


