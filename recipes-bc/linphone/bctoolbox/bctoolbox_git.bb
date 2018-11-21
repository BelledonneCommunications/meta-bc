require bctoolbox.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '01285f4b49e4c06534058aa80dc6e9567cca9b16')
}

# For visualisation
python () {
    print("")
    print("bctoolbox")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "01285f4b49e4c06534058aa80dc6e9567cca9b16"
#SRCREV = "74918554d02e66e2fb1df0bbedcf7f19a7266584"
SRC_URI = "https://gitlab.linphone.org/BC/public/bctoolbox.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"
