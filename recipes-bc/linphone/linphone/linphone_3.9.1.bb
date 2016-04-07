require linphone_3.9.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "9d3ddab2f1b5f7cdc1d58470295eea6929a7de0f"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


