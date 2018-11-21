require tunnel.inc

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', 'fbf1f7bc516cfbfa9b2eacb950b9d6c245c893fe')
}

# For visualisation
python () {
    print("")
    print("LATEST_REVISIONS")
    print(d.getVar('LATEST_REVISIONS', True))
    print("")
    print("tunnel")
    print(d.getVar('SRCREV', True))
}

SRC_URI="https://gitlab.linphone.org/BC/private/tunnel.git;protocol=ssh"
PV = "git_${SRCREV}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9e80ca1f0c7e7714af7d4fcd401e9c45"
