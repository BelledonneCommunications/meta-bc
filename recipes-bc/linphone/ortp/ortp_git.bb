require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "051fb048ac124056ac3d893c132e100a0b4fc09b"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
