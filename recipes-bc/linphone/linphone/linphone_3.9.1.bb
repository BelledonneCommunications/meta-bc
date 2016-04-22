require linphone_3.9.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "f3e7ce47703b6be4ac73722a665926639e0366aa"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


