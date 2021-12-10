require bzrtp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '1ab274fa74f889769a656a7650f7aca5ea48679c')
}

# For visualisation
python () {
    print("")
    print("bzrtp")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "8fc9c7cdc6a73e3502ce8ce663d53922dc284284"
SRC_URI = "git://gitlab.linphone.org/BC/public/bzrtp.git;protocol=https"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
