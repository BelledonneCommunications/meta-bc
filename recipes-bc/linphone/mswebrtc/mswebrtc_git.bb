PR = "r3"
SRC_URI = "gitsm://git.linphone.org/mswebrtc.git;protocol=git"
SRCREV = "${AUTOREV}"
S = "${WORKDIR}/git"

require mswebrtc-common.inc
