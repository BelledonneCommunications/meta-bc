require flexisip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', 'e8cb0ee4e3d5cf3710c5c6cf7c2230b013a36576')
}

# For visualisation
python () {
    print("")
    print("flexisip")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "git://gitlab.linphone.org/BC/public/flexisip.git;protocol=https;branch=yocto_sumo"

PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=50dcff91f43ed602118e107ad4dccb65"

SRC_URI[md5sum] = "de74b5fcda4a50a9e1539b004fade29d"
SRC_URI[sha256sum] = "aadbcfd08c4fdcef6f68c38b3b194989ccb6f6e85088eae2b7ee07bdf9d10986"
