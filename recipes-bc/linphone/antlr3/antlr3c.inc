DESCRIPTION = "Linphone version of antlr3"
LICENSE = "BSD"
HOMEPAGE = "http://www.antlr3.org/"
SECTION = "libs"

INC_PR = "r0"

PN = "antlr3c-bc"
PROVIDES = "libantlr3c-bc"
S = "${WORKDIR}/git/runtime/C"
ALLOW_EMPTY_${PN}="1"

inherit cmake pkgconfig

#do_autoreconf() {
#	./autogen.sh
#}

do_package_prepend() {
	mkdir -p ${STAGING_DIR_HOST}/usr/share/java
	cp ${S}/../../antlr-3.4-complete.jar ${STAGING_DIR_HOST}/usr/share/java/antlr.jar
}