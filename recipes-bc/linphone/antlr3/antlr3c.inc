DESCRIPTION = "Linphone version of antlr3"
LICENSE = "BSD"
HOMEPAGE = "http://www.antlr3.org/"
SECTION = "libs"

INC_PR = "r0"

S = "${WORKDIR}/git/runtime/C"
ALLOW_EMPTY_${PN} = "1"

inherit autotools pkgconfig lib_package

do_fetch_append() {
    import os
    os.system("autogen.sh")
}

do_install_append() {
    mkdir -p ${STAGING_DIR_HOST}/usr/share/java
    cp ${S}/../../antlr-3.4-complete.jar ${STAGING_DIR_HOST}/usr/share/java/antlr.jar
}