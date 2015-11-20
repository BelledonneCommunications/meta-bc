require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "e0177d0565eb550054615ea6703c82016ca7f970"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
