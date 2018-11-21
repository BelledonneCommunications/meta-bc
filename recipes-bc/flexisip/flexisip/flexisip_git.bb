require flexisip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '640cea0528fecef1c649c8b82575ed41b8976067')
}

# For visualisation
python () {
    print("")
    print("flexisip")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "https://gitlab.linphone.org/BC/public/flexisip.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=50dcff91f43ed602118e107ad4dccb65"
