require libgsm.inc

inherit gitpkgv
PR = "${INC_PR}.0"

S = "${WORKDIR}/git"


SRCREV = "0f8822b5326c76bb9dc4c6b552631f51792c3982"
SRC_URI = "https://gitlab.linphone.org/BC/public/external/gsm.git;branch=linphone"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=fc1372895b173aaf543a122db37e04f5"
