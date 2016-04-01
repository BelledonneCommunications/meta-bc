DESCRIPTION = "Audio codec speex "
LICENSE = "BSD"
SECTION = "libs"

INC_PR = "r0"


PROVIDES = "speex"
S = "${WORKDIR}/git"


INSANE_SKIP_${PN} += "dev-deps "

inherit cmake  

EXTRA_OECMAKE += "-DENABLE_FIXED_POINT=ON -DENABLE_FLOAT_API=OFF"



