# Same as the "4.5.x" recipe for the moment, this recipe must always evolve to
# work with the last stable linphone-sdk version.
VERSION_DEPENDENT_DEPENDS="python3-native python3-pystache-native python3-six-native"
VERSION_DEPENDENT_INHERIT="python3native"

# The default commit sha used if LINPHONE_SDK_REV is not set and LATEST_REVISIONS disabled
# 5.0.0-alpha
DEFAULT_COMMIT="7320211a738ff5004fbe21e5bf37fb72181cc1f9"

require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"
PV = "latest"
PKGV = "${GITPKGVTAG}"