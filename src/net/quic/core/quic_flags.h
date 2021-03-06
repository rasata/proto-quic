// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_QUIC_QUIC_FLAGS_H_
#define NET_QUIC_QUIC_FLAGS_H_

#include <stdint.h>

#include "net/base/net_export.h"

NET_EXPORT_PRIVATE extern bool FLAGS_use_early_return_when_verifying_chlo;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_allow_bbr;
NET_EXPORT_PRIVATE extern int64_t FLAGS_quic_time_wait_list_seconds;
NET_EXPORT_PRIVATE extern int64_t FLAGS_quic_time_wait_list_max_connections;
NET_EXPORT_PRIVATE extern bool FLAGS_enable_quic_stateless_reject_support;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_always_log_bugs_for_tests;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_enable_multipath;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_require_handshake_confirmation;
NET_EXPORT_PRIVATE extern bool FLAGS_shift_quic_cubic_epoch_when_app_limited;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_measure_headers_hol_blocking_time;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_disable_pacing_for_perf_tests;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_never_write_unencrypted_data;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_no_lower_bw_resumption_limit;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_loss_recovery_use_largest_acked;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_only_one_sending_alarm;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_use_old_public_reset_packets;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_use_cheap_stateless_rejects;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_respect_http2_settings_frame;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_enable_version_35;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_enable_version_36;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_enable_version_36_v2;
NET_EXPORT_PRIVATE extern bool FLAGS_enable_async_get_proof;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_neuter_unencrypted_when_sending;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_change_alarms_efficiently;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_require_handshake_confirmation_pre33;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_sequencer_buffer_retire_block_in_time;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_remove_obsolete_forward_secure;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_close_connection_on_packet_too_large;
NET_EXPORT_PRIVATE extern bool
    FLAGS_quic_close_stream_after_writing_queued_data;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_limit_frame_gaps_in_buffer;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_remove_v33_hacks;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_use_chlo_packet_size;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_buffer_packet_till_chlo;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_enable_app_limited_check;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_simple_packet_number_length_2;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_disable_pre_32;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_enforce_mtu_limit;
NET_EXPORT_PRIVATE extern bool FLAGS_graceful_emsgsize_on_mtu_probe;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_do_not_send_ack_on_emsgsize;
NET_EXPORT_PRIVATE extern bool FLAGS_quic_postpone_multipath_flag_validation;

#endif  // NET_QUIC_QUIC_FLAGS_H_
