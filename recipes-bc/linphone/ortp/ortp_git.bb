require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "e55122a5ffed11dbae6f8e0ca0f5c0ccb60cc7c2"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
