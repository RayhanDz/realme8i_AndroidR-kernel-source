/*
 * net/tipc/subscr.h: Include file for TIPC network topology service
 *
 * Copyright (c) 2003-2006, Ericsson AB
 * Copyright (c) 2005-2007, 2012-2013, Wind River Systems
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the names of the copyright holders nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * Alternatively, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") version 2 as published by the Free
 * Software Foundation.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _TIPC_SUBSCR_H
#define _TIPC_SUBSCR_H

#include "server.h"

#define TIPC_MAX_SUBSCRIPTIONS	65535
#define TIPC_MAX_PUBLICATIONS	65535

struct tipc_subscription;
struct tipc_subscriber;

/**
 * struct tipc_subscription - TIPC network topology subscription object
 * @subscriber: pointer to its subscriber
 * @seq: name sequence associated with subscription
 * @net: point to network namespace
 * @timer: timer governing subscription duration (optional)
 * @nameseq_list: adjacent subscriptions in name sequence's subscription list
 * @subscrp_list: adjacent subscriptions in subscriber's subscription list
 * @swap: indicates if subscriber uses opposite endianness in its messages
 * @evt: template for events generated by subscription
 */
struct tipc_subscription {
	struct kref kref;
	struct tipc_subscriber *subscriber;
	struct net *net;
	struct timer_list timer;
	struct list_head nameseq_list;
	struct list_head subscrp_list;
	int swap;
	struct tipc_event evt;
};

int tipc_subscrp_check_overlap(struct tipc_name_seq *seq, u32 found_lower,
			       u32 found_upper);
void tipc_subscrp_report_overlap(struct tipc_subscription *sub,
				 u32 found_lower, u32 found_upper, u32 event,
				 u32 port_ref, u32 node, int must);
void tipc_subscrp_convert_seq(struct tipc_name_seq *in, int swap,
			      struct tipc_name_seq *out);
u32 tipc_subscrp_convert_seq_type(u32 type, int swap);

int __net_init tipc_topsrv_init_net(struct net *net);
void __net_exit tipc_topsrv_exit_net(struct net *net);

void tipc_subscrp_put(struct tipc_subscription *subscription);
void tipc_subscrp_get(struct tipc_subscription *subscription);

#endif
