FILESEXTRAPATHS_prepend := "${THISDIR}/files/:"

SRC_URI += " file://findmbetls.patch\
	   file://cmakelists.patch \
		file://pc.patch"
