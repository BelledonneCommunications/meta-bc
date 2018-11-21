require bcg729-common.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '9ada79d7ff53815e85432e7442810a2fd49dbd0e')
}

# For visualisation
python () {
    print("")
    print("bcg729")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "https://gitlab.linphone.org/BC/public/bcg729.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
