PACKAGECONFIG ??= "bzip2 theora"

EXTRA_OECONF = " \
    --enable-shared \
    --enable-pthreads \
    ${@bb.utils.contains('USE_NONFREE', 'yes', '--enable-nonfree', '', d)} \
    --enable-avfilter \
    \
    --cross-prefix=${TARGET_PREFIX} \
    --prefix=${prefix} \
    \
    --enable-avserver \
    --enable-avplay \
    --ld="${CCLD}" \
    --arch=${TARGET_ARCH} \
    --target-os="linux" \
    --enable-cross-compile \
    --extra-cflags="${TARGET_CFLAGS} ${HOST_CC_ARCH}${TOOLCHAIN_OPTIONS}" \
    --extra-ldflags="${TARGET_LDFLAGS}" \
    --sysroot="${STAGING_DIR_TARGET}" \
    --enable-hardcoded-tables \
    ${EXTRA_FFCONF} \
    --disable-x11grab \
    --libdir=${libdir} \
    --shlibdir=${libdir} \
"
