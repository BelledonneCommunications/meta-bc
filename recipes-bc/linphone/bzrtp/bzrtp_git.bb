require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "0d3874b526221f8994c8b3f6d92a143db889b395"
SRC_URI = "git://git.linphone.org/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
