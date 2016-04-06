require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "9e1c7bf89fea4f318c03fdac763f2cfca30d9fc8"
SRC_URI = "git://git.linphone.org/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
