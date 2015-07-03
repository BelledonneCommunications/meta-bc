require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "f9a9718ab2c53a3cf7480d84ec3986d69f3e4e60"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


