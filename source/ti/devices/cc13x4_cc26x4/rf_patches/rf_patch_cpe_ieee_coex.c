/******************************************************************************
*  Filename:       rf_patch_cpe_ieee_coex.c
*
*  Description:    RF Core patch for IEEE 802.15.4-2006 with Coex in CC13x4 and CC26x4
*
*  Copyright (c) 2015-2022, Texas Instruments Incorporated
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
*  3) Neither the name of the ORGANIZATION nor the names of its contributors may
*     be used to endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/
//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <string.h>

#include "rf_patch_cpe_ieee_coex.h"

#ifndef CPE_PATCH_TYPE
#define CPE_PATCH_TYPE static const uint32_t
#endif

#ifndef SYS_PATCH_TYPE
#define SYS_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC static
#endif

#ifndef _APPLY_PATCH_TAB
#define _APPLY_PATCH_TAB
#endif


CPE_PATCH_TYPE patchImageIeeeCoex[] = {
   0x21004c03,
   0x21004c25,
   0x21004c47,
   0x21004cc7,
   0x21004d85,
   0x0000a329,
   0x0000a555,
   0x4700b570,
   0x4700b5f8,
   0xb082b5f7,
   0x47204c00,
   0x000006bd,
   0x4700b5f8,
   0x22ff0783,
   0x409a0edb,
   0x0e090789,
   0x28004099,
   0x0700da0b,
   0x38080f00,
   0x009b0883,
   0x181848ff,
   0x439369c3,
   0x61c3430b,
   0x08834770,
   0x009b48fc,
   0x68031818,
   0x430b4393,
   0x47706003,
   0x4684b5f0,
   0x7bc048f8,
   0xd07c2800,
   0x69634cf7,
   0xd0782b00,
   0x07f0781e,
   0xd0740fc0,
   0xd0722b00,
   0x25047858,
   0xd0072800,
   0x28012705,
   0x2802d006,
   0x2803d006,
   0xe006d109,
   0xe00272e5,
   0xe00372e5,
   0x72a572e7,
   0x72e7e001,
   0x08f072a7,
   0x4fe94de8,
   0xd04307c0,
   0x42014660,
   0x8858d040,
   0x0c010480,
   0x02002005,
   0xd0012a00,
   0xe0007aa2,
   0x2a057ae2,
   0x2900d021,
   0x69aad02e,
   0x181243ba,
   0x686861aa,
   0x4686696a,
   0x0200200f,
   0x32ff4382,
   0x320232ff,
   0x48d7616a,
   0x30402201,
   0x69aa6082,
   0x32ff43ba,
   0x320232ff,
   0x4ad261aa,
   0x32804471,
   0x7a606091,
   0xd0052801,
   0x69a9e00e,
   0x180843b9,
   0xe00961a8,
   0x4acd2002,
   0x03417260,
   0x4acc6011,
   0x4aca6011,
   0x60113a80,
   0x21017860,
   0x70604308,
   0x07c00870,
   0x4660d011,
   0x28002208,
   0x786049c5,
   0x0785d00c,
   0x694dd409,
   0x614d4315,
   0x43082102,
   0x79187060,
   0x43082101,
   0xbdf07118,
   0xd5fc0786,
   0x4396694e,
   0x21fd614e,
   0x79194008,
   0x00490849,
   0x69a97119,
   0x43b92201,
   0x18890292,
   0x084061a9,
   0x70600040,
   0x49afbdf0,
   0x4aaf2800,
   0x69884bac,
   0x4390d002,
   0xe0017a9a,
   0x7ada4390,
   0x43100212,
   0x47706188,
   0x49a5b530,
   0x29007bc9,
   0x49a3d04a,
   0x31404ba3,
   0x615a69ca,
   0xd0432a00,
   0x79514ca6,
   0x24011900,
   0xd0092800,
   0x1b4002a5,
   0x2801d004,
   0x2802d01b,
   0xe036d124,
   0xe0177a50,
   0x70dc7990,
   0x0fe40704,
   0x0784711c,
   0x719c0fe4,
   0x07e4088c,
   0x070cd002,
   0x719c0fe4,
   0x0fc007c0,
   0x07c873d8,
   0x0788d00e,
   0x73d80fc0,
   0x7a10e00a,
   0x070470dc,
   0x711c0fe4,
   0x0fe40784,
   0x715c07c0,
   0x73980fc0,
   0x24fd7910,
   0x78dc4020,
   0x43200064,
   0x08887110,
   0xd00207c0,
   0x0fc00708,
   0x07c87158,
   0x0788d002,
   0x73980fc0,
   0x79d0bd30,
   0x4983e7e0,
   0x42498800,
   0xd0084288,
   0x42884981,
   0x1c49d005,
   0xd0024288,
   0x42881c49,
   0xe79dd100,
   0xb5f04770,
   0x4a734694,
   0x2a007bd2,
   0x4c72d03f,
   0x2a006962,
   0x7813d03b,
   0x0fed07dd,
   0x2a00d037,
   0x089ad035,
   0x270107d2,
   0x74a02500,
   0xd0012a00,
   0xe00070a7,
   0x085a70a5,
   0xd01f07d2,
   0x74677427,
   0xd11e2800,
   0x74227962,
   0x40327ba6,
   0x29007462,
   0x79a2d104,
   0x7be67422,
   0x74624032,
   0x46664a5e,
   0x2e0079d2,
   0x7c26d004,
   0x4316408e,
   0xe00871e6,
   0x43ba408f,
   0x742571e2,
   0xe002d109,
   0x74657425,
   0x786171e5,
   0x42114662,
   0xf7ffd002,
   0xbdf0ff48,
   0x07c908d9,
   0x7465d100,
   0x7c614602,
   0xf7ff7c20,
   0xbdf0fea5,
   0xb5104b4c,
   0x4619789a,
   0x78c94614,
   0xd0024384,
   0x430b795b,
   0x2a00d011,
   0x4381d00f,
   0x2001d10d,
   0x03c0494c,
   0x484b60c8,
   0x6ac03840,
   0xd5040400,
   0xf000205b,
   0x2000fd27,
   0x2001bd10,
   0xb5f8bd10,
   0x25004c3c,
   0x7a926962,
   0x29020092,
   0x7ac1d011,
   0x7b5b4623,
   0xd00e2916,
   0xd0162915,
   0xd0012914,
   0xd1072917,
   0xd0052b00,
   0x21012200,
   0xf7ff4610,
   0x7365ff76,
   0x4938bdf8,
   0x07497809,
   0x2201d505,
   0x20004611,
   0xff6bf7ff,
   0x2b00bdf8,
   0x2101d1fc,
   0x73614b2b,
   0x601e030e,
   0x601e4b2a,
   0x37404f26,
   0x6a406039,
   0x1a8161a0,
   0x30804823,
   0x68016001,
   0x68404821,
   0xfcecf000,
   0xd0012800,
   0xe7de603d,
   0x3880481f,
   0xbdf86006,
   0xb510491b,
   0x31404823,
   0x48196048,
   0x220268c1,
   0x60c14311,
   0x03144819,
   0x21006004,
   0xf7ff200d,
   0x4912fe11,
   0x73082001,
   0x6ac1481b,
   0x431100a2,
   0x481162c1,
   0x60043880,
   0xb570bd10,
   0x480e2401,
   0x600403a4,
   0x6004480d,
   0x69414809,
   0x0212220f,
   0x61414311,
   0x21014d06,
   0x60a93540,
   0xe01d4903,
   0xe000ed00,
   0xe000e400,
   0x210000a8,
   0x21004ee8,
   0x40043000,
   0x00000700,
   0xe000e180,
   0xe000e280,
   0x40041100,
   0xffffd7ff,
   0x00002c01,
   0x40045040,
   0x21000380,
   0x00001702,
   0x40046080,
   0x22296a09,
   0x188a0112,
   0x608a49ff,
   0x68406889,
   0xfc8cf000,
   0xd0032800,
   0x60a82000,
   0x600448fb,
   0x600448fb,
   0xb570bd70,
   0x21004dfa,
   0x28007a28,
   0x4af5d103,
   0x68523a80,
   0x1c40622a,
   0x4af2b2c0,
   0x68547228,
   0x2a021e82,
   0x69ead81d,
   0x3a381aa2,
   0xd8152a10,
   0xd1162804,
   0x680048ef,
   0x42904aef,
   0x2101d100,
   0x72682001,
   0x20004602,
   0xfec5f7ff,
   0x28017a68,
   0x2003d107,
   0xf7ff7268,
   0xe002ff90,
   0x72282000,
   0xbf007268,
   0xbd7061ec,
   0x48e5b5f8,
   0x7ac04ce3,
   0x07812500,
   0x29002602,
   0x48e2da03,
   0x72a68120,
   0x07c0e006,
   0x48dfd006,
   0x81201f40,
   0x72a02000,
   0xe0092503,
   0x46204629,
   0xff0df7ff,
   0x47806860,
   0xd0f70005,
   0xd0512d01,
   0x6a784fd7,
   0xd0012800,
   0x47806a78,
   0x302048d4,
   0x5641210a,
   0xd0031c89,
   0x5641210a,
   0xd1091cc9,
   0x49d06838,
   0x42888800,
   0x6838d00a,
   0x88001c49,
   0xd0054288,
   0x1e4048c9,
   0x72a68120,
   0xe0032503,
   0xd0012d03,
   0xd12d2d02,
   0x382048c3,
   0x2d036806,
   0x2002d114,
   0xfc0af000,
   0x388048b8,
   0x69e16845,
   0xf0004628,
   0x2800fbfd,
   0x2000d001,
   0x48bee005,
   0x69e08941,
   0xf0001b40,
   0x81e0fbff,
   0x757089e0,
   0x61b06a20,
   0x6a2148b4,
   0x61813820,
   0x75b07b60,
   0x89207aa1,
   0xf0002201,
   0x6a78fbf5,
   0xd0012800,
   0x47806a78,
   0x48a9bdf8,
   0x49b06800,
   0xd10d4288,
   0x49a32001,
   0x39800300,
   0x48a66008,
   0x7b0038e0,
   0xd0052802,
   0x46112201,
   0xe6302000,
   0x470048a8,
   0xb5f84770,
   0x4c9f48a0,
   0x25007ac0,
   0x26020780,
   0xda032800,
   0x8120489d,
   0x250372a6,
   0x78c048a1,
   0xd0042800,
   0x1c40489b,
   0x72a68120,
   0xb6722503,
   0x300120ff,
   0xfbc4f000,
   0x4f8fb662,
   0x7838e00a,
   0xd0042800,
   0xf000205c,
   0x2503fb9d,
   0x6860e004,
   0x46054780,
   0xd0f22d00,
   0x20ffb672,
   0xf0003001,
   0xb662fbb5,
   0x7840488f,
   0xd00f2800,
   0x6840488e,
   0xd50b0740,
   0x6800487f,
   0xd5070700,
   0xf000202c,
   0x4884fb81,
   0x81201d00,
   0x250372a6,
   0x28007838,
   0x2000d009,
   0x200d7338,
   0xfb74f000,
   0x1d40487d,
   0x72a68120,
   0x2d03e004,
   0x2d02d002,
   0xbdf8d006,
   0xfb92f000,
   0xfb96f000,
   0xfb9af000,
   0x89207aa1,
   0xf0002201,
   0x486dfb77,
   0x29006801,
   0x6800d0ef,
   0xbdf84780,
   0x4607b5f8,
   0x48652401,
   0x38800424,
   0x4d626004,
   0x3d402600,
   0x4861612e,
   0x60043080,
   0x20104631,
   0xfc8af7ff,
   0x61282001,
   0x6107485b,
   0x485a6901,
   0x68403880,
   0xfb42f000,
   0xd0062800,
   0x2201612e,
   0x46104611,
   0xfda1f7ff,
   0x4855bdf8,
   0xbdf86004,
   0x4c5ab510,
   0x200a3420,
   0x1c805620,
   0x7ae0d113,
   0x43082120,
   0x400821bf,
   0x485472e0,
   0x29006a41,
   0x6a40d001,
   0x200a4780,
   0x1cc05620,
   0x484cd12a,
   0x38e02102,
   0x49477301,
   0x70082000,
   0x07807848,
   0x6949d418,
   0x7a89484b,
   0x4a4638a0,
   0x3a200089,
   0x6a128c00,
   0x1812460b,
   0x42833314,
   0x1a50d204,
   0xf7ff3814,
   0xe008ffa5,
   0x46112201,
   0xf7ff4610,
   0xe002fd64,
   0xf7ff2001,
   0x2118fcee,
   0x4a424b43,
   0x47982001,
   0xb510bd10,
   0x4c334941,
   0x8005f3ef,
   0xd004281e,
   0x8005f3ef,
   0xd0222820,
   0x483de036,
   0x28047d00,
   0x0300d132,
   0x492a6008,
   0x28027a48,
   0x2803d002,
   0xe029d005,
   0x72482003,
   0xfe0ff7ff,
   0x4835bd10,
   0x280e7800,
   0x2000d020,
   0x72087248,
   0x68204601,
   0x42904a21,
   0x2101d100,
   0x46102200,
   0x2001e011,
   0x60080400,
   0x20102101,
   0xfbfcf7ff,
   0x49256820,
   0xd0034288,
   0x49286820,
   0xd1054288,
   0x46112201,
   0xf7ff4610,
   0xbd10fd18,
   0x8005f3ef,
   0xf000381e,
   0x6820fae1,
   0xd0f62800,
   0x47806820,
   0xb5f8bd10,
   0x7b304e0b,
   0x4c192700,
   0xd0052800,
   0x38404805,
   0x0a006840,
   0xd0352817,
   0x7d054815,
   0x47804817,
   0xe02d2d06,
   0x40043080,
   0xe000e200,
   0xe000e100,
   0x21004ee8,
   0x210002a8,
   0x00028fe7,
   0x21000240,
   0x21000154,
   0x00002407,
   0x21000108,
   0x00002801,
   0x210000c8,
   0x21004565,
   0x00000b73,
   0x21000380,
   0x40045080,
   0x21004677,
   0x0002b4c5,
   0xe000e180,
   0x210002c0,
   0x21000018,
   0x21004799,
   0x000075a5,
   0xe033d02c,
   0x21014af9,
   0x70316051,
   0x48f77337,
   0x30402303,
   0x25616003,
   0x60c5016d,
   0x61436041,
   0x019b2359,
   0x61816203,
   0x62102007,
   0x684849f0,
   0x684a3018,
   0xd3fc4282,
   0xf0002000,
   0x48edfa81,
   0x22026941,
   0x61414391,
   0x48e8bf00,
   0x6ac13080,
   0x0c490449,
   0x031062c1,
   0xbdf86020,
   0x280078b0,
   0x7830d0fb,
   0xd1f82800,
   0xfd4af7ff,
   0xd1f42d04,
   0xfda7f7ff,
   0x780048e0,
   0xd1ee280e,
   0x60200328,
   0x210048de,
   0x4ade6800,
   0xd1004290,
   0x72772101,
   0x20002201,
   0xfc7ff7ff,
   0xbdf87237,
   0x48d3b5f8,
   0x4fd86ac0,
   0x4ed94dd8,
   0xd00107c1,
   0xe0592403,
   0x0f840700,
   0xd0042c01,
   0xd1072c02,
   0x28007fb8,
   0x2001d14c,
   0xfcb8f7ff,
   0xd0042800,
   0xd0282c01,
   0xd0232c02,
   0x4cc5e03f,
   0x60602001,
   0x48cc4601,
   0xfa34f000,
   0x210120a1,
   0xf0000100,
   0x20c3fa2f,
   0x01002101,
   0xfa30f000,
   0x62202007,
   0x20012403,
   0x20007030,
   0x48b97330,
   0x6ac13080,
   0x0c490449,
   0x200162c1,
   0x034049bf,
   0xe0236008,
   0x28007fb8,
   0x2001d11c,
   0xfa0cf000,
   0x08407ae8,
   0xd01007c0,
   0x07c07870,
   0x49aed008,
   0x22076988,
   0x43900212,
   0x02127ab2,
   0x61884310,
   0x694148aa,
   0x43112202,
   0x2c026141,
   0x2c03d002,
   0xe026d004,
   0xf0002001,
   0xe022fa01,
   0x73302000,
   0x308048a0,
   0x04496ac1,
   0x62c10c49,
   0x200d2101,
   0xfae4f7ff,
   0x2000499c,
   0x60483140,
   0x4ea32001,
   0x60300340,
   0xf0002000,
   0x2001f9e9,
   0x60300280,
   0x08407ae8,
   0xd00407c0,
   0x69414894,
   0x43912202,
   0x77bc6141,
   0xb510bdf8,
   0x47804899,
   0x6a404899,
   0xd10d2800,
   0x200a4998,
   0x28005608,
   0x1c40da09,
   0x4608d007,
   0x6a403820,
   0x42884994,
   0x4780d100,
   0xf000bd10,
   0xbd10f9c9,
   0x4889b570,
   0x7bc02500,
   0xd0372800,
   0x69484987,
   0xd0032800,
   0x07c07800,
   0xd02f0fc0,
   0x7ae04c8a,
   0x2804380e,
   0x7808d82a,
   0x28004e78,
   0x6af0d019,
   0xd01607c0,
   0xf0002501,
   0x4976f987,
   0x60882020,
   0xf0002000,
   0x4872f9ab,
   0x49776840,
   0x8cc93980,
   0x21001840,
   0xf0006160,
   0x6822f9a7,
   0x20024621,
   0x7ae04790,
   0xd1022812,
   0x07c06af0,
   0x2d00d101,
   0x2200d004,
   0x46104611,
   0xfb9df7ff,
   0xb510bd70,
   0xffbef7ff,
   0xffa3f7ff,
   0xb510bd10,
   0x6ac0485f,
   0xd02507c0,
   0x7bc14864,
   0x29002000,
   0x4a63d020,
   0x29006951,
   0x7808d003,
   0x0fc907c1,
   0x4964d018,
   0x68093920,
   0x684906c0,
   0x420817c0,
   0x4957d110,
   0x68092001,
   0x42994b61,
   0x2000d100,
   0x40812101,
   0x438879d0,
   0x220071d0,
   0x46104611,
   0xfa60f7ff,
   0x4780485b,
   0xb510bd10,
   0x485a2400,
   0xfa2ef7ff,
   0x6800484a,
   0x4288494a,
   0x2401d100,
   0x46212200,
   0xf7ff4610,
   0xbd10fb58,
   0xb510484d,
   0x6a403820,
   0x42884943,
   0x2200d004,
   0x46104611,
   0xfb4bf7ff,
   0x38a6484c,
   0xfa14f7ff,
   0xb5f7bd10,
   0x2601483e,
   0x20007bc4,
   0x40964f3d,
   0x2c004615,
   0x6979d017,
   0xd0032900,
   0x07c47808,
   0xd0100fe4,
   0x793a7839,
   0xd1024391,
   0x07c00900,
   0x79f8d109,
   0x43b02200,
   0x461171f8,
   0xf7ff4610,
   0x2000fa1b,
   0x462a7038,
   0x98009901,
   0xf9eef7ff,
   0xd0022d00,
   0x3d204d30,
   0x4d2ee000,
   0xb2816828,
   0xf0002062,
   0x2c00f913,
   0x6828d00a,
   0xd1072800,
   0x220079f8,
   0x71f843b0,
   0x46104611,
   0xf9fcf7ff,
   0xb570bdfe,
   0x24004d26,
   0xf7ff4829,
   0x3520f9d5,
   0x28007d68,
   0x491bd006,
   0x70082000,
   0x46012201,
   0xe0084610,
   0x68004813,
   0x42884913,
   0x2401d100,
   0x46212200,
   0xf7ff4610,
   0xbd70faea,
   0x49132001,
   0x60080240,
   0x22fb481b,
   0x4b1c7801,
   0x70014011,
   0x4a192113,
   0x47182001,
   0x4b182100,
   0x46084a11,
   0x00004718,
   0x40046000,
   0x40043000,
   0x40041100,
   0x21000018,
   0x210002a8,
   0x00028fe7,
   0x210002a0,
   0x210000a8,
   0x21004ee8,
   0x00001670,
   0xe000e180,
   0x000292a1,
   0x21000108,
   0x21000154,
   0x00029263,
   0x21000160,
   0x21004b9b,
   0x000040a9,
   0x00005b8b,
   0x00029de7,
   0x21000380,
   0x21004565,
   0x0002b4c5,
   0x4607b5f8,
   0xf0002045,
   0x4913f835,
   0x47884638,
   0x46064d12,
   0x4c126a6a,
   0x204a6a61,
   0xf89cf000,
   0xd1172e01,
   0xf7ff4638,
   0x6a60fa82,
   0x391a490a,
   0xd1014288,
   0xe004480b,
   0x490b6a60,
   0xd1024288,
   0x6260480a,
   0x6a68e006,
   0x39444903,
   0xd1014288,
   0x62684807,
   0xbdf84630,
   0x0000a425,
   0x21000108,
   0x21000134,
   0x21004d01,
   0x00029263,
   0x21004799,
   0x21004d1d,
   0x4801b403,
   0xbd019001,
   0x00003cdb,
   0x4801b403,
   0xbd019001,
   0x00007681,
   0x4801b403,
   0xbd019001,
   0x00000fc1,
   0x4801b403,
   0xbd019001,
   0x000093f1,
   0x4801b403,
   0xbd019001,
   0x0000069f,
   0x4801b403,
   0xbd019001,
   0x0000426d,
   0x4801b403,
   0xbd019001,
   0x0000425b,
   0x4801b403,
   0xbd019001,
   0x00007e15,
   0x4801b403,
   0xbd019001,
   0x000066dd,
   0x4801b403,
   0xbd019001,
   0x00005d87,
   0x4801b403,
   0xbd019001,
   0x00000c45,
   0x4801b403,
   0xbd019001,
   0x00008671,
   0x4801b403,
   0xbd019001,
   0x00004ec9,
   0x4801b403,
   0xbd019001,
   0x00004ea3,
   0x4801b403,
   0xbd019001,
   0x000090a1,
   0x4801b403,
   0xbd019001,
   0x0000a39d,
   0x4801b403,
   0xbd019001,
   0x000083b7,
   0x4801b403,
   0xbd019001,
   0x000076a7,
   0x4801b403,
   0xbd019001,
   0x00003cc1,
   0x4801b403,
   0xbd019001,
   0x00003c67,
   0x01000000,
   0x00000000,
   0x04050000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
   0x00000000,
};
#define _NWORD_PATCHIMAGE_IEEE_COEX 945

#define _NWORD_PATCHCPEHD_IEEE_COEX 0

#define _NWORD_PATCHSYS_IEEE_COEX 0

#define _IRQ_PATCH_0 0x2100464b
#define _IRQ_PATCH_1 0x2100481f
#define _IRQ_PATCH_2 0x210048bb
#define _IRQ_PATCH_3 0x210049d9
#define _IRQ_PATCH_4 0x21004ba7


#ifndef _IEEE_COEX_SYSRAM_START
#define _IEEE_COEX_SYSRAM_START 0x20000000
#endif

#ifndef _IEEE_COEX_CPERAM_START
#define _IEEE_COEX_CPERAM_START 0x21000000
#endif

#define _IEEE_COEX_SYS_PATCH_FIXED_ADDR 0x20000000

#define _IEEE_COEX_PATCH_VEC_ADDR_OFFSET 0x03D0
#define _IEEE_COEX_PATCH_TAB_OFFSET 0x03D4
#define _IEEE_COEX_IRQPATCH_OFFSET 0x0480
#define _IEEE_COEX_PATCH_VEC_OFFSET 0x404C

#define _IEEE_COEX_PATCH_CPEHD_OFFSET 0x04E0

#ifndef _IEEE_COEX_NO_PROG_STATE_VAR
static uint8_t bIeeeCoexPatchEntered = 0;
#endif

PATCH_FUN_SPEC void enterIeeeCoexCpePatch(void)
{
#if (_NWORD_PATCHIMAGE_IEEE_COEX > 0)
   uint32_t *pPatchVec = (uint32_t *) (_IEEE_COEX_CPERAM_START + _IEEE_COEX_PATCH_VEC_OFFSET);

   memcpy(pPatchVec, patchImageIeeeCoex, sizeof(patchImageIeeeCoex));
#endif
}

PATCH_FUN_SPEC void enterIeeeCoexCpeHdPatch(void)
{
#if (_NWORD_PATCHCPEHD_IEEE_COEX > 0)
   uint32_t *pPatchCpeHd = (uint32_t *) (_IEEE_COEX_CPERAM_START + _IEEE_COEX_PATCH_CPEHD_OFFSET);

   memcpy(pPatchCpeHd, patchCpeHd, sizeof(patchCpeHd));
#endif
}

PATCH_FUN_SPEC void enterIeeeCoexSysPatch(void)
{
}

PATCH_FUN_SPEC void configureIeeeCoexPatch(void)
{
   uint8_t *pPatchTab = (uint8_t *) (_IEEE_COEX_CPERAM_START + _IEEE_COEX_PATCH_TAB_OFFSET);
   uint32_t *pIrqPatch = (uint32_t *) (_IEEE_COEX_CPERAM_START + _IEEE_COEX_IRQPATCH_OFFSET);


   pPatchTab[80] = 0;
   pPatchTab[79] = 1;
   pPatchTab[41] = 2;
   pPatchTab[58] = 3;
   pPatchTab[163] = 4;
   pPatchTab[77] = 5;
   pPatchTab[12] = 6;

   pIrqPatch[15] = _IRQ_PATCH_0;
   pIrqPatch[19] = _IRQ_PATCH_1;
   pIrqPatch[17] = _IRQ_PATCH_2;
   pIrqPatch[21] = _IRQ_PATCH_3;
   pIrqPatch[11] = _IRQ_PATCH_4;
}

PATCH_FUN_SPEC void applyIeeeCoexPatch(void)
{
#ifdef _IEEE_COEX_NO_PROG_STATE_VAR
   enterIeeeCoexSysPatch();
   enterIeeeCoexCpePatch();
#else
   if (!bIeeeCoexPatchEntered)
   {
      enterIeeeCoexSysPatch();
      enterIeeeCoexCpePatch();
      bIeeeCoexPatchEntered = 1;
   }
#endif
   enterIeeeCoexCpeHdPatch();
   configureIeeeCoexPatch();
}

void refreshIeeeCoexPatch(void)
{
   enterIeeeCoexCpeHdPatch();
   configureIeeeCoexPatch();
}

void cleanIeeeCoexPatch(void)
{
#ifndef _IEEE_COEX_NO_PROG_STATE_VAR
   bIeeeCoexPatchEntered = 0;
#endif
}

void rf_patch_cpe_ieee_coex(void)
{
   applyIeeeCoexPatch();
}

#undef _IRQ_PATCH_0
#undef _IRQ_PATCH_1
#undef _IRQ_PATCH_2
#undef _IRQ_PATCH_3
#undef _IRQ_PATCH_4

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

