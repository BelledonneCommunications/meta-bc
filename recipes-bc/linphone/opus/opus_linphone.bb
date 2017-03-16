require opus.inc

PR = "${INC_PR}.0"

SRCREV = "${AUTOREV}"
SRC_URI = "git://git.linphone.org/opus.git;branch=linphone"
PV = "git_${SRCREV}"

LIC_FILES_CHKSUM= "file://COPYING;md5=e304cdf74c2a1b0a33a5084c128a23a3"