require openh264.inc

PR = "r0"

SRC_URI = "git://github.com/cisco/openh264.git;protocol=https;branch=openh264v1.5.1"
SRCREV = "9e75838c8638c48a32b15c73c9da7b1fe942fd5f"

#SRC_URI = "git://github.com/cisco/openh264.git;protocol=https;branch=openh264v1.4"
#SRCREV = "4adf9cd6dd1358eefe3cbb5eddbfbf4ff06cfa65"

S = "${WORKDIR}/git"
