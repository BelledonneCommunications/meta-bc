require belle-sip.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', 'd8c5e9e08b3bd6640898e46850333f1ad900c8d2')
}

# For visualisation
python () {
    print("")
    print("belle-sip")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "c840e2192b2d0151cc895b844e44bfe0d2103fcf"
SRC_URI = "https://gitlab.linphone.org/BC/public/belle-sip.git;commit=${SRCREV}"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9f9938e31db89d55a796e86808c96848;rev={SRCREV}"


