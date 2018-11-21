require ortp.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '4cea5e6e7b6da329030b4f34b66a6168b864bb1d')
}

# For visualisation
python () {
    print("")
    print("ortp")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "5f8fcddce392f1510768949a4691f9e8c170badb"
SRC_URI = "https://gitlab.linphone.org/BC/public/ortp.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
