require sofia-sip.inc

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '8c66a5b237c163b8c36f0648591ddf7e855178a4')
}

# For visualisation
python () {
    print("")
    print("sofia-sip")
    print(d.getVar('SRCREV', True))
}

SRC_URI = "git://gitlab.linphone.org/BC/public/external/sofia-sip.git;protocol=https;branch=bc"

PV = "git_${SRCREV}"

LIC_FILES_CHKSUM= "file://COPYING;md5=03068f550c635f6520e0f0252da412fc"
SRC_URI[md5sum] = "04605594292d2999cac10c1f261e7766"
SRC_URI[sha256sum] = "eb3cc3759499a4ceb2bee6557b4d032a5dcd49fb55ef804fce90c0f72565363e"
