VERSION_DEPENDENT_DEPENDS="python-native python-pystache-native python-six-native"
VERSION_DEPENDENT_INHERIT="pythonnative"

require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"
PV = "latest"
PKGV = "${GITPKGVTAG}"