PR = "r3"

SRC_URI = " \
	gitsm://git.linphone.org/mswebrtc.git;protocol=git \
	file://0001-aec-remove-unused-const-variable.patch \
	"

SRCREV = "0aed416cce8d30e8c2c83033f59468b4c0584d29"
S = "${WORKDIR}/git"

require mswebrtc-common.inc
