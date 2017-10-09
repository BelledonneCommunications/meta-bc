require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "37adaa0536432149a51332d8eb04973a3ba6bac9"
SRC_URI = "git://git.linphone.org/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
