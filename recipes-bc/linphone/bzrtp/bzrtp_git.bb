require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "bbb1e6e2f467ee4bd7b9a8c800e4f07343d7d99b"
SRC_URI = "git://git.linphone.org/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
