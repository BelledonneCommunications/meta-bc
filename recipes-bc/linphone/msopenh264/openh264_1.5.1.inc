DESCRIPTION = "Cisco Open Source H.264 Codec library which supports H.264 encoding and decoding. "
SECTION = "libs"
PRIORITY = "optional"
LICENSE = "BSD"

PROVIDES = "libopenh264"

LIC_FILES_CHKSUM = "file://LICENSE;md5=bb6d3771da6a07d33fd50d4d9aa73bcf"

SRC_URI[md5sum] = "3a082059356cdde0a6a7274c3eb1f2ce"




PACKAGES = "${PN}-dbg ${PN}-staticdev ${PN}-dev ${PN}-doc ${PN}-locale  ${PN}"



FILES_${PN} += "${bindir}/* ${sbindir}/* ${libexecdir}/* ${libdir}/lib*${SOLIBS} \
                 ${sysconfdir} ${sharedstatedir} ${localstatedir} \
                 ${base_bindir}/* ${base_sbindir}/* \
                 ${base_libdir}/*${SOLIBS} \
                 ${base_prefix}/lib/udev/rules.d ${prefix}/lib/udev/rules.d \
                 ${datadir}/${BPN} ${libdir}/${BPN}/* "

FILES_SOLIBSDEV ?= "${base_libdir}/lib*${SOLIBSDEV} ${libdir}/lib*${SOLIBSDEV}"
FILES_${PN}-dev = "${includedir} ${FILES_SOLIBSDEV} ${libdir}/*.la \
                     ${libdir}/*.o ${libdir}/pkgconfig ${datadir}/pkgconfig \
                     ${datadir}/aclocal ${base_libdir}/*.o \
                     ${libdir}/${BPN}/*.la ${base_libdir}/*.la"

ALLOW_EMPTY_${PN}-dev = "1"
RDEPENDS_${PN}-dev = "${PN} (= ${EXTENDPKGV})"

FILES_${PN}-staticdev = "${libdir}/*.a ${base_libdir}/*.a ${libdir}/${BPN}/*.a"
SECTION_${PN}-staticdev = "devel"

CFLAGS += "-Wall -fno-strict-aliasing -fPIC -MMD -MP"
LDFLAGS += "-lpthread"


do_compile(){
	make -e ARCH=${TARGET_ARCH} PREFIX="/usr/" ;

}

do_install(){
	oe_runmake install ARCH=${TARGET_ARCH} PREFIX="/usr/"  DESTDIR=${D} SBINDIR=${sbindir} MANDIR=${mandir} INCLUDEDIR=${includedir}


}



inherit pkgconfig

