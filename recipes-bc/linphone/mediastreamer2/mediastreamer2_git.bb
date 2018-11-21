require mediastreamer2.inc

inherit gitpkgv

PR = "${INC_PR}.0"

#python () {
#    if d.getVar('LATEST_REVISIONS', True) == "1":
#        d.setVar('SRCREV', '${AUTOREV}')
#    else:
#        d.setVar('SRCREV', '0a2143130e90fe6ef35129931b3fd98d40daa195')
#}

# Use at least this commit to fix compilation error
SRCREV = "eb2af04948a1a0e0f3384f0e46c3513b0aa51e95"

# For visualisation
python () {
    print("")
    print("mediastreamer2")
    print(d.getVar('SRCREV', True))
}

#SRCREV = "1afe5d921a30b8dc2dffb8838e600b4bf97e623d"
SRC_URI = "https://gitlab.linphone.org/BC/public/mediastreamer2.git"
PV = "git_${SRCREV}"
PKGV = "${GITPKGVTAG}"

LIC_FILES_CHKSUM = "file://COPYING;md5=c46082167a314d785d012a244748d803"
