Yocto BSP layer for Linphone
=============================

This layer provides support for linphone for use with :
master : 	Stable linphone version for Yocto Fido and Morty.
yocto-jethro : 	Stable linphone version for Yocto Jehtro.
dev-fido :	Follows linphone development for Yocto Fido.

This layer depends on the following layers:

	poky/meta 
	poky/meta-poky (meta-yocto for Fido)
	poky/meta-yocto-bsp
	openembedded-core/meta
	meta-openembedded/meta-oe 
	meta-openembedded/meta-multimedia 
	meta-openembedded/meta-networking 
	meta-openembedded/meta-python 


Contributing
------------

If you wish to contribute to this layer please submit the patches for review to the
mailing list linphone-developers@nongnu.org.

Mailing list:

    https://lists.nongnu.org/mailman/listinfo/linphone-developers

Source code:

    git://git.yoctoproject.org/meta-fsl-arm
    http://git.yoctoproject.org/git/meta-fsl-arm
    https://github.com/Freescale/meta-fsl-arm

When creating patches, you can use something like this:

    git format-patch -s --subject-prefix='meta-bc][PATCH' origin


How to build linphone / flexisip with Yocto
--------------------------------------------

A complete Linphone for Yocto guide is available on the following wiki:
https://wiki.linphone.org/xwiki/wiki/public/view/Linphone/Building%20Linphone%20with%20Yocto/


How to download and install linphone / flexisip using belledonne communication's ipk repository
------------------------------------------------------------------------------------------------
If you don't want to compile and download the package by yourself, you can use the ones that are already compiled
on Belledonne communication repository.
The packages are built for an arm target (Wandboard solo).

- First make sure your image is built with opkg. To do so, add the following into the local.conf file in your fsl-<version>/ build/conf directory (and also add some free space for download/install ipk purposes):
IMAGE_INSTALL_append = " opkg"
IMAGE_ROOTFS_EXTRA_SPACE="204800"
- Create the file in /etc/opkg/bc.conf on your target
- Add the following into the file:
src/gz all http://linphone.org/snapshots/ipk/all
src/gz cortexa9hf-vfp-neon http://linphone.org/snapshots/ipk/cortexa9hf-vfp-neon
src/gz cortexa9hf-vfp-neon-mx6qdl http://linphone.org/snapshots/ipk/cortexa9hf-vfp-neon-mx6qdl
src/gz wandboard_solo http://linphone.org/snapshots/ipk/wandboard_solo
- Run the following commands on the target:
$ opkg update
$ opkg install linphone
$ opkg install flexisip

