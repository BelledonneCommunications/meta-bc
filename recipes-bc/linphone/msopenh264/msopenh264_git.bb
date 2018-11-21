require msopenh264.inc

PR = "r1"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '6576402007f7c941355db6d2bee039f9f93d6cd5')
}

# For visualisation
python () {
    print("")
    print("msopenh264")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "6576402007f7c941355db6d2bee039f9f93d6cd5"
SRC_URI = "https://gitlab.linphone.org/BC/public/msopenh264.git;protocol=git"

S = "${WORKDIR}/git"


