/*!The Tiny Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2010, ruki All rights reserved.
 *
 * \author		ruki
 * \file		conv.h
 *
 */
#ifndef TB_CONV_H
#define TB_CONV_H

/* ////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"
#include <stdlib.h>

/* ////////////////////////////////////////////////////////////////////////
 * macros
 */

// is
#define TB_CONV_ISSPACE(x) 					((x) == 0x20 || ((x) > 0x8 && (x) < 0xe))
#define TB_CONV_ISALPHA(x) 					(((x) > 0x40 && (x) < 0x5b) || ((x) > 0x60 && (x) < 0x7b))
#define TB_CONV_ISUPPER(x) 					((x) > 0x40 && (x) < 0x5b)
#define TB_CONV_ISLOWER(x) 					((x) > 0x60 && (x) < 0x7b)
#define TB_CONV_ISASCII(x) 					((x) >= 0x0 && (x) < 0x80)
#define TB_CONV_ISDIGIT(x) 					((x) > 0x2f && (x) < 0x3a)
#define TB_CONV_ISDIGIT10(x) 				(TB_CONV_ISDIGIT(x))
#define TB_CONV_ISDIGIT2(x) 				((x) == '0' || (x) == '1')
#define TB_CONV_ISDIGIT8(x) 				(((x) > 0x2f && (x) < 0x38))
#define TB_CONV_ISDIGIT16(x) 				(((x) > 0x2f && (x) < 0x3a) || ((x) > 0x40 && (x) < 0x47) || ((x) > 0x60 && (x) < 0x67))

// float to int
#define TB_CONV_FTOI32(x) 					((tb_int32_t)(tb_uint32_t)(x))
#define TB_CONV_FTOU32(x) 					((tb_uint32_t)(x))

// int to string
#define TB_CONV_ITOA(x) 					(itoa((x)))
#define TB_CONV_LTOA(x) 					(ltoa((x)))
#define TB_CONV_LLTOA(x) 					(lltoa((x)))
#define TB_CONV_UTOA(x) 					(utoa((x)))
#define TB_CONV_ULTOA(x) 					(ultoa((x)))

// string to int
//#define TB_CONV_ATOI(x) 					(atoi((x)))
//#define TB_CONV_ATOL(x) 					(atol((x)))
//#define TB_CONV_ATOUL(x) 					(strtoul((x), TB_NULL, 10))
//#define TB_CONV_ATOLB(x, b) 				(strtol((x), TB_NULL, (b)))
//#define TB_CONV_ATOULB(x, b) 				(strtoul((x), TB_NULL, (b)))
//#define TB_CONV_ATOLL(x) 					((tb_int64_t)atoll((x)))

#define TB_CONV_S2TOI32(s) 					((tb_int32_t)tb_conv_s2tou32(s))
#define TB_CONV_S2TOU32(s) 					tb_conv_s2tou32(s)
#define TB_CONV_S2TOF(s) 					tb_conv_s2tof(s)

#define TB_CONV_S8TOI32(s) 					((tb_int32_t)tb_conv_s8tou32(s))
#define TB_CONV_S8TOU32(s) 					tb_conv_s8tou32(s)
#define TB_CONV_S8TOF(s) 					tb_conv_s8tof(s)

#define TB_CONV_S10TOI32(s) 				((tb_int32_t)tb_conv_s10tou32(s))
#define TB_CONV_S10TOU32(s) 				tb_conv_s10tou32(s)
#define TB_CONV_S10TOF(s) 					tb_conv_s10tof(s)

#define TB_CONV_S16TOI32(s) 				((tb_int32_t)tb_conv_s16tou32(s))
#define TB_CONV_S16TOU32(s) 				tb_conv_s16tou32(s)
#define TB_CONV_S16TOF(s) 					tb_conv_s16tof(s)

#define TB_CONV_STOI32(s) 					((tb_int32_t)tb_conv_stou32(s))
#define TB_CONV_STOU32(s) 					tb_conv_stou32(s)
#define TB_CONV_STOF(s) 					tb_conv_stof(s)

#define TB_CONV_SBTOI32(s, b) 				((tb_int32_t)tb_conv_sbtou32(s, b))
#define TB_CONV_SBTOU32(s, b) 				tb_conv_sbtou32(s, b)
#define TB_CONV_SBTOF(s, b) 				tb_conv_sbtof(s, b)

// string to float
//#define TB_CONV_ATOF(x) 					(atof((x)))
//#define TB_CONV_ATOLF(x) 					(strtod((x), TB_NULL)) // is double?

// to lower & upper
#define TB_CONV_TOLOWER(x) 					(((x) && ((x) != 0x20))? (x) + 0x20 : (x))
#define TB_CONV_TOUPPER(x) 					(((x) && ((x) != 0x20))? (x) - 0x20 : (x))

/* ////////////////////////////////////////////////////////////////////////
 * interfaces
 */

tb_uint32_t 	tb_conv_s2tou32(tb_char_t const* s);
tb_float_t 		tb_conv_s2tof(tb_char_t const* s);

tb_uint32_t 	tb_conv_s8tou32(tb_char_t const* s);
tb_float_t 		tb_conv_s8tof(tb_char_t const* s);

tb_uint32_t 	tb_conv_s10tou32(tb_char_t const* s);
tb_float_t 		tb_conv_s10tof(tb_char_t const* s);

tb_uint32_t 	tb_conv_s16tou32(tb_char_t const* s);
tb_float_t 		tb_conv_s16tof(tb_char_t const* s);

tb_uint32_t 	tb_conv_stou32(tb_char_t const* s);
tb_float_t 		tb_conv_stof(tb_char_t const* s);

tb_uint32_t 	tb_conv_sbtou32(tb_char_t const* s, tb_int_t base);
tb_float_t 		tb_conv_sbtof(tb_char_t const* s, tb_int_t base);

#endif
