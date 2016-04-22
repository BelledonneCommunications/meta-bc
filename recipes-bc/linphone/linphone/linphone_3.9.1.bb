require linphone_3.9.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "5f3cca3449e94796b3dc7b59a9ee9820e2022001"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d0df6696dd1de18b107a24dc34735b28"


