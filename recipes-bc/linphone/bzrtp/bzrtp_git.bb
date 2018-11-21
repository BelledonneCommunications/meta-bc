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

#SRCREV = "37adaa0536432149a51332d8eb04973a3ba6bac9"
SRC_URI = "https://gitlab.linphone.org/BC/public/bzrtp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f"
