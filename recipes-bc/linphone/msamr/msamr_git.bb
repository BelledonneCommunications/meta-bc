PR = "r3"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '207ab85b81fc3d4dda75ee460f4a3107da7e14bc')
}

# For visualisation
python () {
    print("")
    print("msamr")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "6ed342ed00526c21e85f8a06538fe3da2c7a24f4"
SRC_URI = "https://gitlab.linphone.org/BC/public/msamr.git;protocol=git"

S = "${WORKDIR}/git"

require msamr-common.inc
