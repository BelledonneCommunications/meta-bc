require bctoolbox.inc

inherit gitpkgv

PR = "${INC_PR}.0"
SRCREV = "6fe7b438489ac84e853f42a03d6e4d505c42cab6"
SRC_URI = "git://git.linphone.org/bctoolbox.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
