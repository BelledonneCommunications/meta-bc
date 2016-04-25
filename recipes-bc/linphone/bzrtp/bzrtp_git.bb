require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "5a6196e3d0a5d5b2998522379c9fdc2788378570"
SRC_URI = "git://git.linphone.org/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
