require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
# 3 possible revisions:
# - if env[LATEST_REVISIONS] is set, use yocto autorev mecanism
# - if env[LINPHONE_SDK_REV] is defined, use the value as the revision (useful for continous integration)
# - Otherwise, use fixed stable revision

    if os.getenv('LATEST_REVISIONS', '') == "1":
        d.setVar('SRCREV', "${AUTOREV}")
    else:
        d.setVar('SRCREV', os.getenv('LINPHONE_SDK_REV', '9663ba5f620955a54e4b3d42fce27bb387f26f90'))
}

# TODO set SRCREV to a fixed stable version after merge of yocto-sumo branch

# For visualisation
python () {
    print("")
    print("linphone-sdk")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "gitsm://gitlab.linphone.org/BC/public/linphone-sdk.git;protocol=https;"

PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"
