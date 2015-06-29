require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "7f0b84802a6e1d1f99efb95de4d9b460069a3f23"
SRC_URI = "git://git.linphone.org/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
