require bctoolbox.inc

inherit gitpkgv

PR = "${INC_PR}.0"
SRCREV = "da0aef212b8752a1cdae2d55b4783229a55be75f"
#SRCREV = "2a4cf67dc6e7284a2fe10cca177de286116c5da8"
SRC_URI = "git://git.linphone.org/bctoolbox.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
