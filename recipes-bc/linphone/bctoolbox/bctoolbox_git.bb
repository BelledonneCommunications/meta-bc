require bctoolbox.inc

inherit gitpkgv

PR = "${INC_PR}.0"
SRCREV = "38850d8bedbfc106f72536063ff786371eb3a672"
SRC_URI = "git://git.linphone.org/bctoolbox.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
