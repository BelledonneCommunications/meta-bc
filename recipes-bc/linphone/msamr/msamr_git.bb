PR = "r3"

SRC_URI = "git://git.linphone.org/msamr.git;protocol=git" 
SRCREV = "dd3b2d0a767421c4c7e9b8cf28fe9d2ca5c8a45b"
#SRCREV = "6ed342ed00526c21e85f8a06538fe3da2c7a24f4"
S = "${WORKDIR}/git"

require msamr-common.inc
