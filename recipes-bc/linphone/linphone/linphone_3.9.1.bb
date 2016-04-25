require linphone_3.9.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "c23f39dabee1d612af89a3f6471cffbb7acc3d62"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


