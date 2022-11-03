# Same as the "4.5.x" recipe for the moment, this recipe must always evolve to
# work with the last stable linphone-sdk version.
VERSION_DEPENDENT_DEPENDS="python3-native python3-pystache-native python3-six-native"
VERSION_DEPENDENT_INHERIT="python3native"

# The default commit sha used if LINPHONE_SDK_REV is not set and LATEST_REVISIONS disabled
# 5.0.0-alpha
DEFAULT_COMMIT="7320211a738ff5004fbe21e5bf37fb72181cc1f9"

require linphone-sdk.inc

# License variables to use pre Linphone-SDK 5.2
# GPLv2 or later
# LICENSE = "GPLv2+"
# LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=ff3103b5db8ba4e2c66c511b7a73e407"

# Licences variables to use for Linphone-SDK>=5.2
# AGPLv3 or later
LICENSE = "AGPLv3+"
# LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=eb1e647870add0502f8f010b19de32af"

inherit gitpkgv

PR = "${INC_PR}.0"
PV = "latest"
PKGV = "${GITPKGVTAG}"
