DESCRIPTION = "Opus is a totally open, royalty-free, highly versatile audio codec"
LICENSE = ""
HOMEPAGE = "http://www.opus-codec.org/"
SECTION = "libs"

INC_PR = "r0"

PN = "opus-bc"
S = "${WORKDIR}/git"

inherit autotools pkgconfig

do_autoreconf() {
	./autogen.sh
}