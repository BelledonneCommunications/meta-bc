require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "a8cd6e8a1f6c43f961e935e12553b52c311e190f"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


