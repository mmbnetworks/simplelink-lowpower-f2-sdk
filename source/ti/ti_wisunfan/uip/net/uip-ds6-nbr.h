/**
 * \addtogroup uip6
 * @{
 */

/*
 * Copyright (c) 2013, Swedish Institute of Computer Science.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *
 */

/**
 * \file
 *         IPv6 Neighbor cache (link-layer/IPv6 address mapping)
 * \author Mathilde Durvy <mdurvy@cisco.com>
 * \author Julien Abeille <jabeille@cisco.com>
 * \author Simon Duquennoy <simonduq@sics.se>
 *
 */
/******************************************************************************
 *
 * Copyright (c) 2014 Texas Instruments Inc.  All rights reserved.
 *
 * DESCRIPTION:
 *
 * HISTORY:
 *
 *
 ******************************************************************************/

#ifndef UIP_DS6_NEIGHBOR_H_
#define UIP_DS6_NEIGHBOR_H_

#include "net/uip.h"
#include "net/nbr-table.h"
#include "sys/stimer.h"
#include "net/uip-ds6.h"
#include "net/nbr-table.h"

/*--------------------------------------------------*/
/** \brief Possible states for the nbr cache entries */
#define  NBR_INCOMPLETE 0
#define  NBR_REACHABLE 1
#define  NBR_STALE 2
#define  NBR_DELAY 3
#define  NBR_PROBE 4

NBR_TABLE_DECLARE(ds6_neighbors);

/** \brief An entry in the nbr cache */
typedef struct uip_ds6_nbr
{
    uip_ipaddr_t ipaddr;
    struct stimer reachable;
    struct stimer sendns;
    u16_t nscount;
    u16_t isrouter :8;
    u16_t state :8;
#if UIP_CONF_IPV6_QUEUE_PKT
    struct uip_packetqueue_handle packethandle;
#define UIP_DS6_NBR_PACKET_LIFETIME CLOCK_SECOND * 4
#endif                          /*UIP_CONF_QUEUE_PKT */
} uip_ds6_nbr_t;

void uip_ds6_neighbors_init(void);

/** \brief Neighbor Cache basic routines */
uip_ds6_nbr_t *uip_ds6_nbr_add(const uip_ipaddr_t *ipaddr,
                               const uip_lladdr_t *lladdr, u16_t isrouter,
                               u16_t state);
void uip_ds6_nbr_rm(uip_ds6_nbr_t *nbr);
uip_lladdr_t *uip_ds6_nbr_get_ll(uip_ds6_nbr_t *nbr);
uip_ipaddr_t *uip_ds6_nbr_get_ipaddr(uip_ds6_nbr_t *nbr);
uip_ds6_nbr_t *uip_ds6_nbr_lookup(uip_ipaddr_t *ipaddr);
uip_ds6_nbr_t *uip_ds6_nbr_ll_lookup(const uip_lladdr_t *lladdr);
uip_ipaddr_t *uip_ds6_nbr_ipaddr_from_lladdr(uip_lladdr_t *lladdr);
uip_lladdr_t *uip_ds6_nbr_lladdr_from_ipaddr(uip_ipaddr_t *ipaddr);
void uip_ds6_nbr_lock(uip_ds6_nbr_t *nbr);
void uip_ds6_nbr_unlock(uip_ds6_nbr_t *nbr);
void uip_ds6_link_neighbor_callback(int status, int numtx);
void uip_ds6_neighbor_periodic(void);
int uip_ds6_nbr_num(void);

/**
 * \brief
 *     This searches inside the neighbor table for the neighbor that is about to
 *     expire the next.
 *
 * \return
 *     A reference to the neighbor about to expire the next or NULL if
 *     table is empty.
 */
uip_ds6_nbr_t *uip_ds6_get_least_lifetime_neighbor(void);

/*
 * This list will have elements which will contain an IP address and a Neighbor.
 * Whenever a neighbor that already existed in the neighbor table is discovered to have another ip address, this address will be included in this list with a pointer to the neighbor already included in the neighbor table
 * This list has to be maintained along with the neighbor table
 */

typedef struct secondary_ipaddr_nbr
{
    struct secondary_ipaddr_nbr* next;
    uip_ipaddr_t ipaddr;
    uip_ds6_nbr_t* nbr;
} secondary_ipaddr_nbr_t;

secondary_ipaddr_nbr_t* secondary_ipaddr_nbr_head();

secondary_ipaddr_nbr_t* secondary_ipaddr_nbr_next(
        secondary_ipaddr_nbr_t* entry);

uip_ds6_nbr_t *lookup_secondary_table(uip_ipaddr_t *ipaddr);

#endif /* UIP_DS6_NEIGHBOR_H_ */
