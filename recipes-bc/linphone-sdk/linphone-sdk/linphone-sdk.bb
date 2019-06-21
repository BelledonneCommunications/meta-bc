require linphone-sdk.inc

inherit gitpkgv

PR = "${INC_PR}.0"

python () {
    if d.getVar('LATEST_REVISIONS', True) == "1":
        d.setVar('SRCREV', '${AUTOREV}')
    else:
        d.setVar('SRCREV', '${AUTOREV}')
	#release/4.2 e4ad24ebd761913db97f587fe457a856a597bf92
	#TODO choose correct stable version for yocto-sumo after merge
}

# For visualisation
python () {
    print("")
    print("linphone")
    print(d.getVar('SRCREV', True))
    print(d.getVar('EXTRA_OECMAKE'))
}

SRC_URI = "gitsm://gitlab.linphone.org/BC/public/linphone-sdk.git;protocol=https;branch=yocto_sumo;nocheckout=1"

PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file:///home/nico/sdk/COPYING;md5=d421c6fe1a13d8b1dc830e02bcd20fcd"
