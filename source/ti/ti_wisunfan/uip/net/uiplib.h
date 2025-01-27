/*
 * Copyright (c) 2002, Adam Dunkels.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * This file is part of the Contiki desktop environment for the C64.
 *
 *
 */
#ifndef UIPLIB_H_
#define UIPLIB_H_

#include "net/uip.h"

/**
 * \addtogroup uip
 * @{
 *
 * \defgroup uip-addr-lib uIP address manipulation library
 *
 * A library with various IP address manipulation functions
 * @{
 *
 * \file
 * Header file for the IP address manipulation library
 * \author
 * Adam Dunkels <adam@sics.se>
 */

/**
 * Convert a textual representation of an IP address to a numerical representation.
 *
 * This function takes a textual representation of an IP address in
 * the form a.b.c.d for IPv4 or a:b:c:d:e:f:g:h for IPv6 and converts
 * it into a numeric IP address representation that can be used by
 * other uIP functions.
 *
 * \param addrstr A pointer to a string containing the IP address in
 * textual form.
 *
 * \param addr A pointer to a uip_ip4addr_t that will be filled in with
 * the numerical representation of the address.
 *
 * \retval 0 If the IP address could not be parsed.
 * \retval Non-zero If the IP address was parsed.
 */
#define uiplib_ipaddrconv uiplib_ip6addrconv

int uiplib_ip4addrconv(const char *addrstr, uip_ip4addr_t *addr);
int uiplib_ip6addrconv(const char *addrstr, uip_ip6addr_t *addr);
/** @} */


/* The maxium length of an IPv6 string, including terminating null bytes
 * fd01:0002:0003:0004:0005:0006:0007:0008 => 39 + 1 bytes */
#define UIPLIB_IPV6_MAX_STR_LEN 40

/* The maximum length of the channel mask string, including terminating null bytes
 * FF, FF, 07, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00 => 17 + 1 bytes */
#define CHANNEL_MASK_STR_LEN 18

/**
 * Print an IP address using printf().
 *
 * \param addr A pointer to a uip_ipaddr_t that will be printed with printf().
 */
void uiplib_ipaddr_print(const uip_ipaddr_t *addr);

/**
 * Write at most size - 1 characters of the IP address to the output string.
 * The output is always null-terminated, unless size is 0.
 *
 * \param buffer A pointer to an output string with  at least size bytes.
 * \param size The max number of characters to write to the output string.
 * \param addr A pointer to a uip_ipaddr_t that will be printed with printf().
 */
int uiplib_ipaddr_snprint(char *buffer, size_t size, const uip_ipaddr_t *addr);

#endif /* UIPLIB_H_ */
/**
 * @}
 * @}
 */
