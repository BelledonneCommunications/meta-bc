PR = "r3"

SRC_URI = "git://git.linphone.org/msamr.git;protocol=git" 
SRCREV = "${AUTOREV}"
S = "${WORKDIR}/git"

require msamr-common.inc
