PR = "r3"
SRC_URI = "https://gitlab.linphone.org/BC/public/mswebrtc.git;protocol=git"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '19814348807cdab7f13637993a05a696f47685eb')
}

# For visualisation
python () {
    print("")
    print("mswebrtc")
    print(d.getVar('SRCREV', True))
}

S = "${WORKDIR}/git"

require mswebrtc-common.inc
