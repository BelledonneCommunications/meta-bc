require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "306da462a5c69712e154c661473262e44e504604"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
