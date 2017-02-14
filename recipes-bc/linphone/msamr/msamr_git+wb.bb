PR = "r2"
SRC_URI = "git://git.linphone.org/msamr.git;protocol=git" 
SRCREV = "${AUTOREV}"
S = "${WORKDIR}/git"

OVERRIDES_append = ":wideband"

require msamr-common.inc
