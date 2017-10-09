require belcard.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "b9e1951be4575c62e326d761a7f7c79c5cce9cb9"
SRC_URI = "git://git.linphone.org/belcard.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"
