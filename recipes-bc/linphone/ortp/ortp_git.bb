require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "7de595181e8e0f6cfd77db7054b0b7bf71d067d2"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
