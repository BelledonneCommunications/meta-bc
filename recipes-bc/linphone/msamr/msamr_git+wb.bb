PR = "r2"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', 'dd3b2d0a767421c4c7e9b8cf28fe9d2ca5c8a45b')
}

# For visualisation
python () {
    print("")
    print("msamr+wb")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "6ed342ed00526c21e85f8a06538fe3da2c7a24f4"
SRC_URI = "https://gitlab.linphone.org/BC/public/msamr.git;protocol=git"

S = "${WORKDIR}/git"

OVERRIDES:append = ":wideband"

require msamr-common.inc
