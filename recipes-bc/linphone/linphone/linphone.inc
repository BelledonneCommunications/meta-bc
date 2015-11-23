DESCRIPTION = "Audio/video SIP-based IP phone (console edition)"
LICENSE = "GPLv2"
HOMEPAGE = "http://www.linphone.org/technical-corner/linphone/overview"
SECTION = "comm"

INC_PR = "r0"

DEPENDS = "libbellesip libortp libmediastreamer2 libxml2 cunit-bc mswebrtc"
PROVIDES = "liblinphone"
S = "${WORKDIR}/git"

PACKAGECONFIG ??= "sqlite zlib video ${@bb.utils.contains('DISTRO_FEATURES', 'x11', 'x11', '', d)}"
PACKAGECONFIG[sqlite] = "--enable-msg-storage=yes, --enable-msg-storage=no, sqlite3"
PACKAGECONFIG[zlib] = ", --disable-zlib, zlib"
PACKAGECONFIG[x11] = "--enable-gtk_ui=yes, --enable-gtk_ui=no --disable-x11, gtk+"
PACKAGECONFIG[video]= ",--disable-video"

EXTRA_OECONF += " --without-readline --enable-external-mediastreamer=yes --enable-external-ortp=yes"
INSANE_SKIP_${PN} += "dev-deps"

PACKAGES += "${PN}-common ${PN}-utils {PN}-tester"

FILES_${PN} += "${bindir}/lp-autoanswer ${bindir}/linphonec ${bindir}/linphonecsh"
FILES_${PN}-common = "\
            ${bindir}/lp-gen-wrappers \
            ${datadir}/pixmaps \
            ${datadir}/applications \
            ${datadir}/gnome \
            ${datadir}/tutorials \
            ${datadir}/linphone \
            ${datadir}/sounds/linphone/hello8000.wav \
            ${datadir}/sounds/linphone/hello16000.wav \
            ${datadir}/sounds/linphone/incoming_chat.wav \
            ${datadir}/sounds/linphone/ringback.wav \
            ${datadir}/images/nowebcamCIF.jpg \
            ${datadir}/appdata/linphone.appdata.xml \
            ${datadir}/sounds/linphone/rings \
            ${datadir}/icons"
FILES_${PN}-utils = "${bindir}/test_ecc ${bindir}/test_lsd ${bindir}/xml2lpc_test ${bindir}/lpc2xml_test"
FILES_${PN}-tester ="\
		 ${bindir}/liblinphone_tester \
		 ${datadir}/liblinphone_tester/messages.db \
		 ${datadir}/liblinphone_tester/tester_hosts \
		 ${datadir}/liblinphone_tester/certificates \
		 ${datadir}/liblinphone_tester/images \
		 ${datadir}/liblinphone_tester/common \
		 ${datadir}/liblinphone_tester/rcfiles \
		 ${datadir}/liblinphone_tester/sounds \
		 ${datadir}/liblinphone_tester/sipp \
		 ${datadir}/liblinphone_tester/certificates/cn \
		 ${datadir}/liblinphone_tester/certificates/altname \
		 ${datadir}/liblinphone_tester/certificates/cn/openssl-cn.cnf \
		 ${datadir}/liblinphone_tester/certificates/cn/cafile.pem \
		 ${datadir}/liblinphone_tester/certificates/cn/agent.pem \
		 ${datadir}/liblinphone_tester/certificates/altname/cafile.pem \
		 ${datadir}/liblinphone_tester/certificates/altname/openssl-altname.cnf \
		 ${datadir}/liblinphone_tester/certificates/altname/agent.pem \
		 ${datadir}/liblinphone_tester/images/nowebcamCIF.jpg \
		 ${datadir}/liblinphone_tester/common/bc_completion \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_invalid_uri_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_alt_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_zrtp_srtpsuite_aes256_rc \
		 ${datadir}/liblinphone_tester/rcfiles/multi_account_rc \
		 ${datadir}/liblinphone_tester/rcfiles/michelle_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_rc_rtcp_xr \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_https_rc \
		 ${datadir}/liblinphone_tester/rcfiles/zero_length_params_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_404_rc \
		 ${datadir}/liblinphone_tester/rcfiles/stun_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_zrtp_srtpsuite_aes256_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_sips_rc \
		 ${datadir}/liblinphone_tester/rcfiles/upnp_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_invalid_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_zrtp_b256_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_sips_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_localfile_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_h264_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_localfile2_rc \
		 ${datadir}/liblinphone_tester/rcfiles/laure_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_localfile_win10_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_default_values_rc \
		 ${datadir}/liblinphone_tester/rcfiles/remote_zero_length_params_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_wild_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_zrtp_b256_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_transient_remote_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_early_rc \
		 ${datadir}/liblinphone_tester/rcfiles/empty_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_tcp_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_zrtp_aes256_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_remote_localfile_android_rc \
		 ${datadir}/liblinphone_tester/rcfiles/laure_call_logs_rc \
		 ${datadir}/liblinphone_tester/rcfiles/pauline_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_rc_rtcp_xr \
		 ${datadir}/liblinphone_tester/rcfiles/marie_quality_reporting_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_h264_rc \
		 ${datadir}/liblinphone_tester/rcfiles/marie_zrtp_aes256_rc \
		 ${datadir}/liblinphone_tester/sounds/ringback.wav \
		 ${datadir}/liblinphone_tester/sounds/sintel_trailer_opus_h264.mkv \
		 ${datadir}/liblinphone_tester/sounds/hello8000.wav \
		 ${datadir}/liblinphone_tester/sounds/vrroom.wav \
		 ${datadir}/liblinphone_tester/sounds/sintel_trailer_pcmu_h264.mkv \
		 ${datadir}/liblinphone_tester/sounds/hello8000.mkv \
		 ${datadir}/liblinphone_tester/sounds/oldphone.wav \
		 ${datadir}/liblinphone_tester/sounds/hello8000_mkv_ref.wav \
		 ${datadir}/liblinphone_tester/sounds/ahbahouaismaisbon.wav \
		 ${datadir}/liblinphone_tester/sounds/sintel_trailer_opus_vp8.mkv \
		 ${datadir}/liblinphone_tester/sipp/call_with_audio_mline_before_video_in_sdp.xml \
		 ${datadir}/liblinphone_tester/sipp/call_with_multiple_video_mline_in_sdp.xml \
		 ${datadir}/liblinphone_tester/sipp/call_with_video_mline_before_audio_in_sdp.xml \
		 ${datadir}/liblinphone_tester/sipp/sip_update_within_icoming_reinvite_with_no_sdp.xml \
		 ${datadir}/liblinphone_tester/sipp/call_with_multiple_audio_mline_in_sdp.xml \
		 ${datadir}/liblinphone_tester/sipp/call_invite_200ok_without_contact_header.xml"


inherit autotools pkgconfig gettext

do_configure_prepend() {
    #!/bin/sh
    echo 'Deleting mediastreamer2 and oRTP'
    rm -rf ${S}/mediastreamer2
    rm -rf ${S}/oRTP
    echo 'mediastreamer2 and oRTP have been removed'
}
