require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "34372c9527c45e8722381d3447f225fcb3a8138b"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"