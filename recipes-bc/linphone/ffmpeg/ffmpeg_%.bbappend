PACKAGECONFIG:remove += "gpl"
PACKAGECONFIG:remove += "x264"
PACKAGECONFIG:remove += "${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11 xv', '', d)}"
