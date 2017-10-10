require bcg729-common.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "9ada79d7ff53815e85432e7442810a2fd49dbd0e"
SRC_URI = "git://git.linphone.org/bcg729.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
