require linphone_3.11.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "83b94af9a4fa3a78292511976edd0c2c19a41149"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"


