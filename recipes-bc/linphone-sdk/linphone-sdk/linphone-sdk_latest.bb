# Same as the "4.5.x" recipe for the moment, this recipe must always evolve to
# work with the last stable linphone-sdk version.
VERSION_DEPENDENT_DEPENDS="python3-native python3-pystache-native python3-six-native"
VERSION_DEPENDENT_INHERIT="python3native"

require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"
PV = "latest"
PKGV = "${GITPKGVTAG}"