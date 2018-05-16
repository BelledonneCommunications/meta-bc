PACKAGECONFIG_remove += "gpl"
PACKAGECONFIG_remove += "x264"
PACKAGECONFIG_remove += "${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11 xv', '', d)}"
