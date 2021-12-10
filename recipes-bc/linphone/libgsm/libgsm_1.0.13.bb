require libgsm.inc

inherit gitpkgv
PR = "${INC_PR}.0"

S = "${WORKDIR}/git"


SRCREV = "5b603ccf4620d76c9e642ca8c4560e3c43650017"
SRC_URI = "git://gitlab.linphone.org/BC/public/external/gsm.git;protocol=https;branch=linphone"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=fc1372895b173aaf543a122db37e04f5"
