DESCRIPTION = "SSL/TLS library"
LICENSE = "GPLv2"
HOMEPAGE = "https://tls.mbed.org/"

inherit pkgconfig

EXTRA_OEMAKE += " SHARED=1"

PROVIDES = "polarssl polarssl-dev polarssl-utils"
S = "${WORKDIR}/git"
ALLOW_EMPTY_${PN} = "1"

PACKAGES += "${PN}-utils"

MAKE_DESTDIR = "DESTDIR=${D}/${prefix}"

FILES_${PN} += "${sharedlibdir}/*${SOLIBSDEV}"
FILES_${PN}-dev += "!${sharedlibdir}/*${SOLIBSDEV}"
FILES_${PN}-utils += "${bindir}/polarssl_*"