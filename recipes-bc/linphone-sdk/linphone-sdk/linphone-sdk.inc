DESCRIPTION = "WIP LINPHONE-SDK Audio/video SIP-based IP phone (console edition)"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/linphone/overview"
SECTION = "network"
SECTION_linphonec =  "console/network"

INC_PR = "r0"

DEPENDS = "git-native doxygen-native python-pystache-native python-six-native mariadb pulseaudio alsa-dev alsa-lib virtual/gettext sqlite3 mariadb zlib"

PROVIDES = "linphone-sdk"

RPROVIDES_${PN} = "bcunit bctoolbox belle-sip belr belcard \
	    ortp mediastreamer2 bcg729 bzrtp lime \
	    mswebrtc speex speexdsp \
	    liblinphone linphonec"

S = "${WORKDIR}/git"

inherit cmakebuilder gettext pythonnative pkgconfig chrpath

PACKAGECONFIG ??= "sqlite zlib bzrtp ${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'video', '', d)}"
PACKAGECONFIG[sqlite] = "-DENABLE_SQLITE_STORAGE=yes, -DENABLE_SQLITE_STORAGE=no"
PACKAGECONFIG[zlib] = ", --disable-zlib, zlib"
PACKAGECONFIG[video]= "-DENABLE_X11=YES -DENABLE_XV=YES -DENABLE_GLX=ON -DENABLE_GL=NO,-DENABLE_VIDEO=NO,libv4l libxv virtual/libgl glew"
PACKAGECONFIG[bzrtp]= " -DENABLE_BZRTP=YES, -DENABLE_BZRTP=NO"
PACKAGECONFIG[mdns]= "-DENABLE_MDNS=YES,-DENABLE_MDNS=NO"

EXTRA_OECMAKE ??= " "
EXTRA_OECMAKE += " -DENABLE_CONSOLE_UI=NO -DENABLE_GTK_UI=NO -DENABLE_CXX_WRAPPER=YES -DENABLE_VCARD=YES -DENABLE_VPX=NO -DENABLE_XML2=NO -DENABLE_SQLITE=NO -DENABLE_ZLIB=NO -DENABLE_SOCI_MYSQL=YES"

EXTRA_OECMAKE += " -DENABLE_UNIT_TESTS=YES -DENABLE_TESTS=YES"

#Force cmake cross-compiling
EXTRA_OECMAKE += " -DCMAKE_CROSSCOMPILING=YES"
EXTRA_OECMAKE += " -DCMAKE_TOOLCHAIN_FILE=${WORKDIR}/toolchain.cmake"

BUILD_INSTALL_PREFIX = "${WORKDIR}/git/linphone-sdk/desktop"

INSTALL_PATH = "/opt/belledonne-communications"

BUILD_INSTALL_PATH = "${BUILD_INSTALL_PREFIX}${INSTALL_PATH}"

#Used by cmake.bbclass to add the temporary target directory as root for find_package, required to find correct libraries directories
OECMAKE_EXTRA_ROOT_PATH = "${BUILD_INSTALL_PATH}"

EXTRA_OECMAKE += " -DCMAKE_C_IMPLICIT_INCLUDE_DIRECTORIES=${STAGING_INCDIR}"
EXTRA_OECMAKE += " -DCMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES=${STAGING_INCDIR}"

#The actual target installation prefix when cross-compiling
EXTRA_OECMAKE += " -DCMAKE_STAGING_PREFIX=${BUILD_INSTALL_PATH}"
EXTRA_OECMAKE += " -DCMAKE_INSTALL_PREFIX=${INSTALL_PATH}"

EXTRA_OECMAKE += " -DCMAKE_SKIP_RPATH=YES"

EXTRA_OECMAKE += " -DCMAKE_EXE_LINKER_FLAGS='-Wl,-rpath-link=${BUILD_INSTALL_PATH}/lib -Wl,-rpath=${INSTALL_PATH}/lib'"
EXTRA_OECMAKE += " -DCMAKE_SHARED_LINKER_FLAGS='-Wl,-rpath=${INSTALL_PATH}/lib -Wl,-rpath-link=${BUILD_INSTALL_PATH}/lib'"
EXTRA_OECMAKE += " -DCMAKE_MODULE_LINKER_FLAGS='-Wl,-rpath=${INSTALL_PATH}/lib -Wl,-rpath-link=${BUILD_INSTALL_PATH}/lib'"

PACKAGES = "${PN} ${PN}-dev ${PN}-dbg"

FILES_${PN} += "${INSTALL_PATH}/bin/*"
FILES_${PN} += "${INSTALL_PATH}/lib/*"
FILES_${PN} += "${INSTALL_PATH}/share/*"
FILES_${PN}-dev = "${INSTALL_PATH}/include/*"

SYSROOT_DIRS += "/opt"

do_install_append () {
	#Do not include generated and installed cmake/pkgconfig files to the target package
	rm -rf "${BUILD_INSTALL_PATH}/cmake"
	rm -rf "${BUILD_INSTALL_PATH}/lib/pkgconfig"

	install -m 0755 -d ${D}${INSTALL_PATH}/bin ${D}${INSTALL_PATH}/lib ${D}${INSTALL_PATH}/include ${D}${INSTALL_PATH}/share
	cp -r ${BUILD_INSTALL_PATH}/bin/* ${D}${INSTALL_PATH}/bin
	cp -r ${BUILD_INSTALL_PATH}/lib/* ${D}${INSTALL_PATH}/lib
	cp -r ${BUILD_INSTALL_PATH}/share/* ${D}${INSTALL_PATH}/share
	cp -r ${BUILD_INSTALL_PATH}/include/* ${D}${INSTALL_PATH}/include
}

#Allow non-symlink .so files and static libraries in ${PN} package
INSANE_SKIP_${PN} += "dev-so staticdev already-stripped"
