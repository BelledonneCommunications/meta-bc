# Used on the release 4.5 branch, for a stable version please use the "latest" recipe
VERSION_DEPENDENT_DEPENDS="python3-native python3-pystache-native python3-six-native"
VERSION_DEPENDENT_INHERIT="python3native"

require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"
PV = "4.5.x"
PKGV = "${GITPKGVTAG}"

