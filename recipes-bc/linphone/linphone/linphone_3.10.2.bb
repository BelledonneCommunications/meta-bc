require linphone_3.10.2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "f499b34e2a8b9c7d4a7651f947f7a0d45089ee91"
SRC_URI = "git://git.linphone.org/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"


