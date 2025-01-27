/*
 * Copyright (c) 2005, Swedish Institute of Computer Science
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
 * This file is part of the Contiki operating system.
 *
 * @(#)$Id: random.c,v 1.5 2010/12/13 16:52:02 dak664 Exp $
 */

/******************************************************************************
 *
 * Copyright (c) 2016 Texas Instruments Inc.  All rights reserved.
 *
 * DESCRIPTION: Modified to use the TRNG of CC26xx
 *
 * HISTORY:
 *
 *
 ******************************************************************************/
#ifdef LINUX_GATEWAY

#include <stdlib.h>
#include "lib/random.h"
#include "pltfrm_lib.h"

/*---------------------------------------------------------------------------*/
void
random_init(unsigned short seed)
{
    pltfrm_initRandom(seed);
}
/*---------------------------------------------------------------------------*/
unsigned short
random_rand(void)
{
    /* In gcc int rand() uses RAND_MAX and long random() uses RANDOM_MAX=0x7FFFFFFF */
    /* RAND_MAX varies depending on the architecture */

    return (pltfrm_getRandom() % RANDOM_RAND_MAX);
}

#else

#include "lib/random.h"
#include <ti/drivers/utils/Random.h>

/*******************************************************************************
 * GLOBAL VARIABLES
 */

/*---------------------------------------------------------------------------*/
void
random_init(unsigned short seed)
{
    //Random_init done in macTask.c
    (void) seed;
}

/*---------------------------------------------------------------------------*/
unsigned short random_rand(void)
{
    return( (unsigned short) Random_getNumber());
}
/*---------------------------------------------------------------------------*/
#endif
