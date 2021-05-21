# Used on the release 4.5 branch, for a stable version please use the "latest" recipe
VERSION_DEPENDENT_DEPENDS="python3-native python3-pystache-native python3-six-native"
VERSION_DEPENDENT_INHERIT="python3native"

# The default commit sha used if LINPHONE_SDK_REV is not set and LATEST_REVISIONS disabled
# 4.5.14
DEFAULT_COMMIT="0ddfcfdf6f61aec999330f3b689ffdac3677b500"

require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"
PV = "4.5.x"
PKGV = "${GITPKGVTAG}"

