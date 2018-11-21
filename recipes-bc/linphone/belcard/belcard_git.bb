require belcard.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', 'b9e1951be4575c62e326d761a7f7c79c5cce9cb9')
}

# For visualisation
python () {
    print("")
    print("belcard")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "https://gitlab.linphone.org/BC/public/belcard.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"
