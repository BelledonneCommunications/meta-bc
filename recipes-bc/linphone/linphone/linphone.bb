require linphone.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', 'a858005cab82ff270eeb4104637abc52d10c1441')
}

# For visualisation
python () {
    print("")
    print("linphone")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "7e2a6a56fa6a70a6ec3875cea26f1f1e17910917"
SRC_URI = "https://gitlab.linphone.org/BC/public/linphone.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"
