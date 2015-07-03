require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "60c0801e2a3cb6d0e158c5c7b9477e4186e36e71"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


