require sofia-sip.inc

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '97c1824a4769c34add85e6ff306bf3aa34116c75')
}

# For visualisation
python () {
    print("")
    print("sofia-sip")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "97c1824a4769c34add85e6ff306bf3aa34116c75"
SRC_URI = "https://gitlab.linphone.org/BC/public/external/sofia-sip.git;branch=bc"
PV = "git_${SRCREV}"

LIC_FILES_CHKSUM= "file://COPYING;md5=03068f550c635f6520e0f0252da412fc"
