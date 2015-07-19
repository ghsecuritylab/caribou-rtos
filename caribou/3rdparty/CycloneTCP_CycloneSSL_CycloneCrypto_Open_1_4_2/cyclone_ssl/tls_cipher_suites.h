/**
 * @file tls_cipher_suites.h
 * @brief TLS cipher suites
 *
 * @section License
 *
 * Copyright (C) 2010-2014 Oryx Embedded. All rights reserved.
 *
 * This file is part of CycloneSSL Open.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded (www.oryx-embedded.com)
 * @version 1.4.2
 **/

#ifndef _TLS_CIPHER_SUITES_H
#define _TLS_CIPHER_SUITES_H

//Dependencies
#include "crypto.h"
#include "tls.h"

//Macro for defining a cipher suite
#define TLS_CIPHER_SUITE(identifier, keyExchMethod, cipherAlgo, cipherMode, hashAlgo, prfHashAlgo, \
   macKeyLength, encKeyLength, fixedIvLength, recordIvLength, authTagLength, verifyDataLength) \
   {identifier, #identifier, keyExchMethod, cipherAlgo, cipherMode, hashAlgo, prfHashAlgo, \
   macKeyLength, encKeyLength, fixedIvLength, recordIvLength, authTagLength, verifyDataLength}


/**
 * @brief Cipher suite list
 **/

typedef enum
{
   TLS_NULL_WITH_NULL_NULL                       = 0x0000, //RFC 2246

   TLS_RSA_EXPORT_WITH_RC4_40_MD5                = 0x0003, //RFC 2246
   TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5            = 0x0006, //RFC 2246
   TLS_RSA_EXPORT_WITH_DES40_CBC_SHA             = 0x0008, //RFC 2246
   TLS_RSA_WITH_NULL_MD5                         = 0x0001, //RFC 2246
   TLS_RSA_WITH_NULL_SHA                         = 0x0002, //RFC 2246
   TLS_RSA_WITH_NULL_SHA256                      = 0x003B, //RFC 5246
   TLS_RSA_WITH_RC4_128_MD5                      = 0x0004, //RFC 2246
   TLS_RSA_WITH_RC4_128_SHA                      = 0x0005, //RFC 2246
   TLS_RSA_WITH_IDEA_CBC_SHA                     = 0x0007, //RFC 2246
   TLS_RSA_WITH_DES_CBC_SHA                      = 0x0009, //RFC 2246
   TLS_RSA_WITH_3DES_EDE_CBC_SHA                 = 0x000A, //RFC 2246
   TLS_RSA_WITH_AES_128_CBC_SHA                  = 0x002F, //RFC 3268
   TLS_RSA_WITH_AES_256_CBC_SHA                  = 0x0035, //RFC 3268
   TLS_RSA_WITH_AES_128_CBC_SHA256               = 0x003C, //RFC 5246
   TLS_RSA_WITH_AES_256_CBC_SHA256               = 0x003D, //RFC 5246
   TLS_RSA_WITH_AES_128_CCM                      = 0xC09C, //RFC 6655
   TLS_RSA_WITH_AES_256_CCM                      = 0xC09D, //RFC 6655
   TLS_RSA_WITH_AES_128_CCM_8                    = 0xC0A0, //RFC 6655
   TLS_RSA_WITH_AES_256_CCM_8                    = 0xC0A1, //RFC 6655
   TLS_RSA_WITH_AES_128_GCM_SHA256               = 0x009C, //RFC 5288
   TLS_RSA_WITH_AES_256_GCM_SHA384               = 0x009D, //RFC 5288
   TLS_RSA_WITH_CAMELLIA_128_CBC_SHA             = 0x0041, //RFC 5932
   TLS_RSA_WITH_CAMELLIA_256_CBC_SHA             = 0x0084, //RFC 5932
   TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256          = 0x00BA, //RFC 5932
   TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256          = 0x00C0, //RFC 5932
   TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256          = 0xC07A, //RFC 6367
   TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384          = 0xC07B, //RFC 6367
   TLS_RSA_WITH_SEED_CBC_SHA                     = 0x0096, //RFC 4162
   TLS_RSA_WITH_ARIA_128_CBC_SHA256              = 0xC03C, //RFC 6209
   TLS_RSA_WITH_ARIA_256_CBC_SHA384              = 0xC03D, //RFC 6209
   TLS_RSA_WITH_ARIA_128_GCM_SHA256              = 0xC050, //RFC 6209
   TLS_RSA_WITH_ARIA_256_GCM_SHA384              = 0xC051, //RFC 6209

   TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA          = 0x000E, //RFC 2246
   TLS_DH_RSA_WITH_DES_CBC_SHA                   = 0x000F, //RFC 2246
   TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA              = 0x0010, //RFC 2246
   TLS_DH_RSA_WITH_AES_128_CBC_SHA               = 0x0031, //RFC 3268
   TLS_DH_RSA_WITH_AES_256_CBC_SHA               = 0x0037, //RFC 3268
   TLS_DH_RSA_WITH_AES_128_CBC_SHA256            = 0x003F, //RFC 5246
   TLS_DH_RSA_WITH_AES_256_CBC_SHA256            = 0x0069, //RFC 5246
   TLS_DH_RSA_WITH_AES_128_GCM_SHA256            = 0x00A0, //RFC 5288
   TLS_DH_RSA_WITH_AES_256_GCM_SHA384            = 0x00A1, //RFC 5288
   TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA          = 0x0043, //RFC 5932
   TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA          = 0x0086, //RFC 5932
   TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256       = 0x00BC, //RFC 5932
   TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256       = 0x00C2, //RFC 5932
   TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256       = 0xC07E, //RFC 6367
   TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384       = 0xC07F, //RFC 6367
   TLS_DH_RSA_WITH_SEED_CBC_SHA                  = 0x0098, //RFC 4162
   TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256           = 0xC040, //RFC 6209
   TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384           = 0xC041, //RFC 6209
   TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256           = 0xC054, //RFC 6209
   TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384           = 0xC055, //RFC 6209

   TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA         = 0x0014, //RFC 2246
   TLS_DHE_RSA_WITH_DES_CBC_SHA                  = 0x0015, //RFC 2246
   TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA             = 0x0016, //RFC 2246
   TLS_DHE_RSA_WITH_AES_128_CBC_SHA              = 0x0033, //RFC 3268
   TLS_DHE_RSA_WITH_AES_256_CBC_SHA              = 0x0039, //RFC 3268
   TLS_DHE_RSA_WITH_AES_128_CBC_SHA256           = 0x0067, //RFC 5246
   TLS_DHE_RSA_WITH_AES_256_CBC_SHA256           = 0x006B, //RFC 5246
   TLS_DHE_RSA_WITH_AES_128_CCM                  = 0xC09E, //RFC 6655
   TLS_DHE_RSA_WITH_AES_256_CCM                  = 0xC09F, //RFC 6655
   TLS_DHE_RSA_WITH_AES_128_CCM_8                = 0xC0A2, //RFC 6655
   TLS_DHE_RSA_WITH_AES_256_CCM_8                = 0xC0A3, //RFC 6655
   TLS_DHE_RSA_WITH_AES_128_GCM_SHA256           = 0x009E, //RFC 5288
   TLS_DHE_RSA_WITH_AES_256_GCM_SHA384           = 0x009F, //RFC 5288
   TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA         = 0x0045, //RFC 5932
   TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA         = 0x0088, //RFC 5932
   TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256      = 0x00BE, //RFC 5932
   TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256      = 0x00C4, //RFC 5932
   TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256      = 0xC07C, //RFC 6367
   TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384      = 0xC07D, //RFC 6367
   TLS_DHE_RSA_WITH_SEED_CBC_SHA                 = 0x009A, //RFC 4162
   TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256          = 0xC044, //RFC 6209
   TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384          = 0xC045, //RFC 6209
   TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256          = 0xC052, //RFC 6209
   TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384          = 0xC053, //RFC 6209
   TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256     = 0xCC15, //RFC draft

   TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA          = 0x000B, //RFC 2246
   TLS_DH_DSS_WITH_DES_CBC_SHA                   = 0x000C, //RFC 2246
   TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA              = 0x000D, //RFC 2246
   TLS_DH_DSS_WITH_AES_128_CBC_SHA               = 0x0030, //RFC 3268
   TLS_DH_DSS_WITH_AES_256_CBC_SHA               = 0x0036, //RFC 3268
   TLS_DH_DSS_WITH_AES_128_CBC_SHA256            = 0x003E, //RFC 5246
   TLS_DH_DSS_WITH_AES_256_CBC_SHA256            = 0x0068, //RFC 5246
   TLS_DH_DSS_WITH_AES_128_GCM_SHA256            = 0x00A4, //RFC 5288
   TLS_DH_DSS_WITH_AES_256_GCM_SHA384            = 0x00A5, //RFC 5288
   TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA          = 0x0042, //RFC 5932
   TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA          = 0x0085, //RFC 5932
   TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256       = 0x00BB, //RFC 5932
   TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256       = 0x00C1, //RFC 5932
   TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256       = 0xC082, //RFC 6367
   TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384       = 0xC083, //RFC 6367
   TLS_DH_DSS_WITH_SEED_CBC_SHA                  = 0x0097, //RFC 4162
   TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256           = 0xC03E, //RFC 6209
   TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384           = 0xC03F, //RFC 6209
   TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256           = 0xC058, //RFC 6209
   TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384           = 0xC059, //RFC 6209

   TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA         = 0x0011, //RFC 2246
   TLS_DHE_DSS_WITH_DES_CBC_SHA                  = 0x0012, //RFC 2246
   TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA             = 0x0013, //RFC 2246
   TLS_DHE_DSS_WITH_AES_128_CBC_SHA              = 0x0032, //RFC 3268
   TLS_DHE_DSS_WITH_AES_256_CBC_SHA              = 0x0038, //RFC 3268
   TLS_DHE_DSS_WITH_AES_128_CBC_SHA256           = 0x0040, //RFC 5246
   TLS_DHE_DSS_WITH_AES_256_CBC_SHA256           = 0x006A, //RFC 5246
   TLS_DHE_DSS_WITH_AES_128_GCM_SHA256           = 0x00A2, //RFC 5288
   TLS_DHE_DSS_WITH_AES_256_GCM_SHA384           = 0x00A3, //RFC 5288
   TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA         = 0x0044, //RFC 5932
   TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA         = 0x0087, //RFC 5932
   TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256      = 0x00BD, //RFC 5932
   TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256      = 0x00C3, //RFC 5932
   TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256      = 0xC080, //RFC 6367
   TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384      = 0xC081, //RFC 6367
   TLS_DHE_DSS_WITH_SEED_CBC_SHA                 = 0x0099, //RFC 4162
   TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256          = 0xC042, //RFC 6209
   TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384          = 0xC043, //RFC 6209
   TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256          = 0xC056, //RFC 6209
   TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384          = 0xC057, //RFC 6209

   TLS_DH_ANON_EXPORT_WITH_RC4_40_MD5            = 0x0017, //RFC 2246
   TLS_DH_ANON_EXPORT_WITH_DES40_CBC_SHA         = 0x0019, //RFC 2246
   TLS_DH_ANON_WITH_RC4_128_MD5                  = 0x0018, //RFC 2246
   TLS_DH_ANON_WITH_DES_CBC_SHA                  = 0x001A, //RFC 2246
   TLS_DH_ANON_WITH_3DES_EDE_CBC_SHA             = 0x001B, //RFC 2246
   TLS_DH_ANON_WITH_AES_128_CBC_SHA              = 0x0034, //RFC 3268
   TLS_DH_ANON_WITH_AES_256_CBC_SHA              = 0x003A, //RFC 3268
   TLS_DH_ANON_WITH_AES_128_CBC_SHA256           = 0x006C, //RFC 5246
   TLS_DH_ANON_WITH_AES_256_CBC_SHA256           = 0x006D, //RFC 5246
   TLS_DH_ANON_WITH_AES_128_GCM_SHA256           = 0x00A6, //RFC 5288
   TLS_DH_ANON_WITH_AES_256_GCM_SHA384           = 0x00A7, //RFC 5288
   TLS_DH_ANON_WITH_CAMELLIA_128_CBC_SHA         = 0x0046, //RFC 5932
   TLS_DH_ANON_WITH_CAMELLIA_256_CBC_SHA         = 0x0089, //RFC 5932
   TLS_DH_ANON_WITH_CAMELLIA_128_CBC_SHA256      = 0x00BF, //RFC 5932
   TLS_DH_ANON_WITH_CAMELLIA_256_CBC_SHA256      = 0x00C5, //RFC 5932
   TLS_DH_ANON_WITH_CAMELLIA_128_GCM_SHA256      = 0xC084, //RFC 6367
   TLS_DH_ANON_WITH_CAMELLIA_256_GCM_SHA384      = 0xC085, //RFC 6367
   TLS_DH_ANON_WITH_SEED_CBC_SHA                 = 0x009B, //RFC 4162
   TLS_DH_ANON_WITH_ARIA_128_CBC_SHA256          = 0xC046, //RFC 6209
   TLS_DH_ANON_WITH_ARIA_256_CBC_SHA384          = 0xC047, //RFC 6209
   TLS_DH_ANON_WITH_ARIA_128_GCM_SHA256          = 0xC05A, //RFC 6209
   TLS_DH_ANON_WITH_ARIA_256_GCM_SHA384          = 0xC05B, //RFC 6209

   TLS_ECDH_RSA_WITH_NULL_SHA                    = 0xC00B, //RFC 4492
   TLS_ECDH_RSA_WITH_RC4_128_SHA                 = 0xC00C, //RFC 4492
   TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA            = 0xC00D, //RFC 4492
   TLS_ECDH_RSA_WITH_AES_128_CBC_SHA             = 0xC00E, //RFC 4492
   TLS_ECDH_RSA_WITH_AES_256_CBC_SHA             = 0xC00F, //RFC 4492
   TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256          = 0xC029, //RFC 5289
   TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384          = 0xC02A, //RFC 5289
   TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256          = 0xC031, //RFC 5289
   TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384          = 0xC032, //RFC 5289
   TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256     = 0xC078, //RFC 6367
   TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384     = 0xC079, //RFC 6367
   TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256     = 0xC08C, //RFC 6367
   TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384     = 0xC08D, //RFC 6367
   TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256         = 0xC04E, //RFC 6209
   TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384         = 0xC04F, //RFC 6209
   TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256         = 0xC062, //RFC 6209
   TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384         = 0xC063, //RFC 6209

   TLS_ECDHE_RSA_WITH_NULL_SHA                   = 0xC010, //RFC 4492
   TLS_ECDHE_RSA_WITH_RC4_128_SHA                = 0xC011, //RFC 4492
   TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA           = 0xC012, //RFC 4492
   TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA            = 0xC013, //RFC 4492
   TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA            = 0xC014, //RFC 4492
   TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256         = 0xC027, //RFC 5289
   TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384         = 0xC028, //RFC 5289
   TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256         = 0xC02F, //RFC 5289
   TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384         = 0xC030, //RFC 5289
   TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256    = 0xC076, //RFC 6367
   TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384    = 0xC077, //RFC 6367
   TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256    = 0xC08A, //RFC 6367
   TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384    = 0xC08B, //RFC 6367
   TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256        = 0xC04C, //RFC 6209
   TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384        = 0xC04D, //RFC 6209
   TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256        = 0xC060, //RFC 6209
   TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384        = 0xC061, //RFC 6209
   TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256   = 0xCC13, //RFC draft

   TLS_ECDH_ECDSA_WITH_NULL_SHA                  = 0xC001, //RFC 4492
   TLS_ECDH_ECDSA_WITH_RC4_128_SHA               = 0xC002, //RFC 4492
   TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA          = 0xC003, //RFC 4492
   TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA           = 0xC004, //RFC 4492
   TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA           = 0xC005, //RFC 4492
   TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256        = 0xC025, //RFC 5289
   TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384        = 0xC026, //RFC 5289
   TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256        = 0xC02D, //RFC 5289
   TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384        = 0xC02E, //RFC 5289
   TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256   = 0xC074, //RFC 6367
   TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384   = 0xC075, //RFC 6367
   TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256   = 0xC088, //RFC 6367
   TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384   = 0xC089, //RFC 6367
   TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256       = 0xC04A, //RFC 6209
   TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384       = 0xC04B, //RFC 6209
   TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256       = 0xC05E, //RFC 6209
   TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384       = 0xC05F, //RFC 6209

   TLS_ECDHE_ECDSA_WITH_NULL_SHA                 = 0xC006, //RFC 4492
   TLS_ECDHE_ECDSA_WITH_RC4_128_SHA              = 0xC007, //RFC 4492
   TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA         = 0xC008, //RFC 4492
   TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA          = 0xC009, //RFC 4492
   TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA          = 0xC00A, //RFC 4492
   TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256       = 0xC023, //RFC 5289
   TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384       = 0xC024, //RFC 5289
   TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256       = 0xC02B, //RFC 5289
   TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384       = 0xC02C, //RFC 5289
   TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256  = 0xC072, //RFC 6367
   TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384  = 0xC073, //RFC 6367
   TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256  = 0xC086, //RFC 6367
   TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384  = 0xC087, //RFC 6367
   TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256      = 0xC048, //RFC 6209
   TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384      = 0xC049, //RFC 6209
   TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256      = 0xC05C, //RFC 6209
   TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384      = 0xC05D, //RFC 6209
   TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = 0xCC14, //RFC draft

   TLS_ECDH_ANON_WITH_NULL_SHA                   = 0xC015, //RFC 4492
   TLS_ECDH_ANON_WITH_RC4_128_SHA                = 0xC016, //RFC 4492
   TLS_ECDH_ANON_WITH_3DES_EDE_CBC_SHA           = 0xC017, //RFC 4492
   TLS_ECDH_ANON_WITH_AES_128_CBC_SHA            = 0xC018, //RFC 4492
   TLS_ECDH_ANON_WITH_AES_256_CBC_SHA            = 0xC019, //RFC 4492

   TLS_PSK_WITH_NULL_SHA                         = 0x002C, //RFC 4785
   TLS_PSK_WITH_NULL_SHA256                      = 0x00B0, //RFC 5487
   TLS_PSK_WITH_NULL_SHA384                      = 0x00B1, //RFC 5487
   TLS_PSK_WITH_RC4_128_SHA                      = 0x008A, //RFC 4279
   TLS_PSK_WITH_3DES_EDE_CBC_SHA                 = 0x008B, //RFC 4279
   TLS_PSK_WITH_AES_128_CBC_SHA                  = 0x008C, //RFC 4279
   TLS_PSK_WITH_AES_256_CBC_SHA                  = 0x008D, //RFC 4279
   TLS_PSK_WITH_AES_128_CBC_SHA256               = 0x00AE, //RFC 5487
   TLS_PSK_WITH_AES_256_CBC_SHA384               = 0x00AF, //RFC 5487
   TLS_PSK_WITH_AES_128_CCM                      = 0xC0A4, //RFC 6655
   TLS_PSK_WITH_AES_256_CCM                      = 0xC0A5, //RFC 6655
   TLS_PSK_WITH_AES_128_CCM_8                    = 0xC0A8, //RFC 6655
   TLS_PSK_WITH_AES_256_CCM_8                    = 0xC0A9, //RFC 6655
   TLS_PSK_WITH_AES_128_GCM_SHA256               = 0x00A8, //RFC 5487
   TLS_PSK_WITH_AES_256_GCM_SHA384               = 0x00A9, //RFC 5487
   TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256          = 0xC094, //RFC 6367
   TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384          = 0xC095, //RFC 6367
   TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256          = 0xC08E, //RFC 6367
   TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384          = 0xC08F, //RFC 6367
   TLS_PSK_WITH_ARIA_128_CBC_SHA256              = 0xC064, //RFC 6209
   TLS_PSK_WITH_ARIA_256_CBC_SHA384              = 0xC065, //RFC 6209
   TLS_PSK_WITH_ARIA_128_GCM_SHA256              = 0xC06A, //RFC 6209
   TLS_PSK_WITH_ARIA_256_GCM_SHA384              = 0xC06B, //RFC 6209

   TLS_RSA_PSK_WITH_NULL_SHA                     = 0x002E, //RFC 4785
   TLS_RSA_PSK_WITH_NULL_SHA256                  = 0x00B8, //RFC 5487
   TLS_RSA_PSK_WITH_NULL_SHA384                  = 0x00B9, //RFC 5487
   TLS_RSA_PSK_WITH_RC4_128_SHA                  = 0x0092, //RFC 4279
   TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA             = 0x0093, //RFC 4279
   TLS_RSA_PSK_WITH_AES_128_CBC_SHA              = 0x0094, //RFC 4279
   TLS_RSA_PSK_WITH_AES_256_CBC_SHA              = 0x0095, //RFC 4279
   TLS_RSA_PSK_WITH_AES_128_CBC_SHA256           = 0x00B6, //RFC 5487
   TLS_RSA_PSK_WITH_AES_256_CBC_SHA384           = 0x00B7, //RFC 5487
   TLS_RSA_PSK_WITH_AES_128_GCM_SHA256           = 0x00AC, //RFC 5487
   TLS_RSA_PSK_WITH_AES_256_GCM_SHA384           = 0x00AD, //RFC 5487
   TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256      = 0xC098, //RFC 6367
   TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384      = 0xC099, //RFC 6367
   TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256      = 0xC092, //RFC 6367
   TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384      = 0xC093, //RFC 6367
   TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256          = 0xC068, //RFC 6209
   TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384          = 0xC069, //RFC 6209
   TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256          = 0xC06E, //RFC 6209
   TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384          = 0xC06F, //RFC 6209

   TLS_DHE_PSK_WITH_NULL_SHA                     = 0x002D, //RFC 4785
   TLS_DHE_PSK_WITH_NULL_SHA256                  = 0x00B4, //RFC 5487
   TLS_DHE_PSK_WITH_NULL_SHA384                  = 0x00B5, //RFC 5487
   TLS_DHE_PSK_WITH_RC4_128_SHA                  = 0x008E, //RFC 4279
   TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA             = 0x008F, //RFC 4279
   TLS_DHE_PSK_WITH_AES_128_CBC_SHA              = 0x0090, //RFC 4279
   TLS_DHE_PSK_WITH_AES_256_CBC_SHA              = 0x0091, //RFC 4279
   TLS_DHE_PSK_WITH_AES_128_CBC_SHA256           = 0x00B2, //RFC 5487
   TLS_DHE_PSK_WITH_AES_256_CBC_SHA384           = 0x00B3, //RFC 5487
   TLS_DHE_PSK_WITH_AES_128_CCM                  = 0xC0A6, //RFC 6655
   TLS_DHE_PSK_WITH_AES_256_CCM                  = 0xC0A7, //RFC 6655
   TLS_DHE_PSK_WITH_AES_128_CCM_8                = 0xC0AA, //RFC 6655
   TLS_DHE_PSK_WITH_AES_256_CCM_8                = 0xC0AB, //RFC 6655
   TLS_DHE_PSK_WITH_AES_128_GCM_SHA256           = 0x00AA, //RFC 5487
   TLS_DHE_PSK_WITH_AES_256_GCM_SHA384           = 0x00AB, //RFC 5487
   TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256      = 0xC096, //RFC 6367
   TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384      = 0xC097, //RFC 6367
   TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256      = 0xC090, //RFC 6367
   TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384      = 0xC091, //RFC 6367
   TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256          = 0xC066, //RFC 6209
   TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384          = 0xC067, //RFC 6209
   TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256          = 0xC06C, //RFC 6209
   TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384          = 0xC06D, //RFC 6209

   TLS_ECDHE_PSK_WITH_NULL_SHA                   = 0xC039, //RFC 5489
   TLS_ECDHE_PSK_WITH_NULL_SHA256                = 0xC03A, //RFC 5489
   TLS_ECDHE_PSK_WITH_NULL_SHA384                = 0xC03B, //RFC 5489
   TLS_ECDHE_PSK_WITH_RC4_128_SHA                = 0xC033, //RFC 5489
   TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA           = 0xC034, //RFC 5489
   TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA            = 0xC035, //RFC 5489
   TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA            = 0xC036, //RFC 5489
   TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256         = 0xC037, //RFC 5489
   TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384         = 0xC038, //RFC 5489
   TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256    = 0xC09A, //RFC 6367
   TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384    = 0xC09B, //RFC 6367
   TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256        = 0xC070, //RFC 6209
   TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384        = 0xC071, //RFC 6209

   TLS_KRB5_EXPORT_WITH_RC4_40_MD5               = 0x002B, //RFC 2712
   TLS_KRB5_EXPORT_WITH_RC4_40_SHA               = 0x0028, //RFC 2712
   TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5           = 0x002A, //RFC 2712
   TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA           = 0x0027, //RFC 2712
   TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5           = 0x0029, //RFC 2712
   TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA           = 0x0026, //RFC 2712
   TLS_KRB5_WITH_RC4_128_MD5                     = 0x0024, //RFC 2712
   TLS_KRB5_WITH_RC4_128_SHA                     = 0x0020, //RFC 2712
   TLS_KRB5_WITH_IDEA_CBC_MD5                    = 0x0025, //RFC 2712
   TLS_KRB5_WITH_IDEA_CBC_SHA                    = 0x0021, //RFC 2712
   TLS_KRB5_WITH_DES_CBC_MD5                     = 0x0022, //RFC 2712
   TLS_KRB5_WITH_DES_CBC_SHA                     = 0x001E, //RFC 2712
   TLS_KRB5_WITH_3DES_EDE_CBC_MD5                = 0x0023, //RFC 2712
   TLS_KRB5_WITH_3DES_EDE_CBC_SHA                = 0x001F, //RFC 2712

   TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA             = 0xC01A, //RFC 5054
   TLS_SRP_SHA_WITH_AES_128_CBC_SHA              = 0xC01D, //RFC 5054
   TLS_SRP_SHA_WITH_AES_256_CBC_SHA              = 0xC020, //RFC 5054

   TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA         = 0xC01B, //RFC 5054
   TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA          = 0xC01E, //RFC 5054
   TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA          = 0xC021, //RFC 5054

   TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA         = 0xC01C, //RFC 5054
   TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA          = 0xC01F, //RFC 5054
   TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA          = 0xC022, //RFC 5054

   TLS_EMPTY_RENEGOTIATION_INFO_SCSV             = 0x00FF  //RFC 5746
} TlsCipherSuiteList;


//List of supported cipher suites
extern const TlsCipherSuiteInfo tlsSupportedCipherSuites[];

//TLS related functions
uint_t tlsGetNumSupportedCipherSuites(void);
const char_t *tlsGetCipherSuiteName(uint16_t identifier);
bool_t tlsIsCipherSuiteSupported(uint16_t identifier);
bool_t tlsIsEccCipherSuite(uint16_t identifier);

#endif
