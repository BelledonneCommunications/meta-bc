DESCRIPTION = "Opus is a totally open, royalty-free, highly versatile audio codec"
LICENSE = "BSD"
HOMEPAGE = "http://www.opus-codec.org/"
SECTION = "libs"

INC_PR = "r0"

PN = "opus-bc"
S = "${WORKDIR}/git"

inherit autotools pkgconfig

PACKAGECONFIG ??= ""
PACKAGECONFIG[fixed-point] = "--enable-fixed-point,,"
PACKAGECONFIG[float-approx] = "--enable-float-approx,,"

EXTRA_OECONF = " \
    --with-NE10-includes=${STAGING_DIR_TARGET}${includedir} \
    --with-NE10-libraries=${STAGING_DIR_TARGET}${libdir} \
    --enable-asm \
    --enable-intrinsics \
    --enable-custom-modes \
"

python () {
    if d.getVar('TARGET_FPU', True) in [ 'soft' ]:
        d.appendVar('PACKAGECONFIG', ' fixed-point')

    # Ne10 is only available for armv7 and aarch64
    if any((t.startswith('armv7') or t.startswith('aarch64')) for t in d.getVar('TUNE_FEATURES', True).split()):
        d.appendVar('DEPENDS', ' ne10')
}


ARM_INSTRUCTION_SET = "arm"
