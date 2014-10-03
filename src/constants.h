#ifndef __BENARYOS_CONSTANTS__
#define __BENARYOS_CONSTANTS__

/*
 * Copyright 2014 benaryorg (benaryorg@benaryos.org)
 *
 * This file is part of benaryOS.
 *
 * benaryOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * benaryOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with benaryOS.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
	typedefs
*/
typedef unsigned int size_t;

typedef signed char int8_t;
typedef signed short int int16_t;
typedef signed long int int32_t;
typedef signed long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long int uint64_t;

/*
	va_args
*/
typedef __builtin_va_list       va_list;
#define va_start(ap, X)         __builtin_va_start(ap, X)
#define va_arg(ap, type)        __builtin_va_arg(ap, type)
#define va_end(ap)              __builtin_va_end(ap)

/*
	buffers (text and later video buffer)
*/
#define TEXT_BUFFER ((char *)0xb8000)
#define TEXT_WIDTH 80
#define TEXT_HEIGHT 25

/*
	syscalls
*/
#define SYSCALL_PUTCHAR			0x0001

#endif /** __BENARYOS_CONSTANTS__ **/
