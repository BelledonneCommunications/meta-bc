require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "8440432f9de08cc61c84a7c178e090f365c7a648"
SRC_URI = "git://git.linphone.org/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=7fbc338309ac38fefcd64b04bb903e34"
