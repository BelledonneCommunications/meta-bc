require belr.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "fdce52526089e88c98f19b0d36483cc3d31ef9bd"
#SRCREV = "4f32b9c29c4ab8c4ccfc1e0899019a811d495054"
SRC_URI = "git://git.linphone.org/belr.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"
