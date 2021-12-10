require polarssl.inc

PR = "${INC_PR}.0"

SRCREV = "9864c92b71b81dd1dda885eae108cc3fc9a0cf4b"
SRC_URI = "git://gitlab.linphone.org/BC/public/external/polarssl.git;protocol=https;nobranch=1"

PV = "git_${SRCREV}"
DEPENDS += "openssl"

LIC_FILES_CHKSUM = "file://LICENSE;md5=751419260aa954499f7abaabaa882bbe"
