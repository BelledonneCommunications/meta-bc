require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "c8f02b327e9c13c5f6b7aca2dc7c7d074ccddb29"

SRC_URI = " \
	git://git.linphone.org/mediastreamer2.git \
	file://0001-fixed-gcc7-format-truncation-errors.patch \
	"

PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
