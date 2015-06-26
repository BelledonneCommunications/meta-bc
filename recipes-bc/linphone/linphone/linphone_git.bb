require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "fa1c36dddb8925277e9832cdfacd8d4c87d2e2d1"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"