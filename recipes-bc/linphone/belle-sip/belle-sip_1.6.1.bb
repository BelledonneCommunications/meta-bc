require belle-sip_1.6.1.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "1ff6f71692ad204180f380158e8036b86e13190d"
SRC_URI = "git://git.linphone.org/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
