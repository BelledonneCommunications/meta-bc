require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"

SRCREV = "${oe.utils.conditional('LATEST_REVISIONS', '1', '${AUTOREV}', '19d98c41e5fcaa8d0d28e446413fd0a67f9196c3')}"

# For visualisation
python () {
    print("")
    print("linphone-sdk")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "gitsm://gitlab.linphone.org/BC/public/linphone-sdk.git;protocol=https;branch=yocto_sumo;rebaseable=1"

PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"
