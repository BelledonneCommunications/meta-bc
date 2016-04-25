require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "c23f39dabee1d612af89a3f6471cffbb7acc3d62"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
