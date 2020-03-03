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
    
    d.setVar('LINPHONE_SDK_BRANCH', os.getenv('LINPHONE_SDK_BRANCH', 'master'))
}

# TODO set SRCREV to a fixed stable version after merge of yocto-sumo branch

# For visualisation
python () {
    print("")
    print("linphone-sdk")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "gitsm://gitlab.linphone.org/BC/public/linphone-sdk.git;protocol=https;branch=${LINPHONE_SDK_BRANCH};"

PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=ff3103b5db8ba4e2c66c511b7a73e407"
