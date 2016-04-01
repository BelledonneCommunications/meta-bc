require linphone_3.9.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "cb0bbf3146a5107acbadfeedc43000a4f0ee7ea3"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


