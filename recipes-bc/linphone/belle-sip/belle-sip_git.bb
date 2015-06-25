require belle-sip.inc

PR = "$(INC_PR).0"

SRCREV = "dd2d1ca8b3f56044f9ff85f0647184204ae382b2"
SRC_URI = "git://git.linphone.org/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
