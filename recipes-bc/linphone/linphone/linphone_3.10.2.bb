require linphone_3.10.2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "045224cd91c51de3cf5b7ce62824acc43e7989fa"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


