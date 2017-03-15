require tunnel.inc

PR = "${INC_PR}.0"

SRCREV = "fbf1f7bc516cfbfa9b2eacb950b9d6c245c893fe"
SRC_URI="git://gitosis@git.linphone.org/tunnel.git;protocol=ssh"
PV = "git_${SRCREV}"

LIC_FILES_CHKSUM = "file://COPYING;md5=9e80ca1f0c7e7714af7d4fcd401e9c45"