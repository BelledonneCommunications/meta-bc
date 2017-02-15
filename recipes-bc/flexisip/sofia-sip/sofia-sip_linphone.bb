require sofia-sip.inc

PR = "${INC_PR}.0"

SRCREV = "${AUTOREV}"
SRC_URI = "git://git.linphone.org/sofia-sip.git;branch=bc"
PV = "git_${SRCREV}"

LIC_FILES_CHKSUM= "file://COPYING;md5=03068f550c635f6520e0f0252da412fc"
