PR = "r2"
SRC_URI = "git://git.linphone.org/msamr.git;protocol=git" 
SRCREV = "c0e695887a082f732d99a84463fe3233f56c92e5"
#SRCREV = "6ed342ed00526c21e85f8a06538fe3da2c7a24f4"
S = "${WORKDIR}/git"

OVERRIDES_append = ":wideband"

require msamr-common.inc
