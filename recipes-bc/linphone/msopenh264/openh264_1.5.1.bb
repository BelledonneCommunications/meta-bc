require openh264_1.5.1.inc

PR = "r0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '2610ab183249aee91862d2ad065f61db89107b34')
}

# For visualisation
python () {
    print("")
    print("openh264_1.5.1")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "2610ab183249aee91862d2ad065f61db89107b34"

SRC_URI = "git://github.com/cisco/openh264.git;protocol=https;branch=openh264v1.5.1"



S = "${WORKDIR}/git"
