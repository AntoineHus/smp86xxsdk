#ifndef _LLAD_H
#define _LLAD_H

/*
 * Copyright (c) Juergen Urban, All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *      Lesser General Public License for more details.
 * 
 *      You should have received a copy of the GNU Lesser General Public
 *      License along with this library.
 */

#include <rua_common.h>

struct LLAD;
struct GBUS;

struct LLAD *llad_open(const char *chipname);
struct GBUS *gbus_open(struct LLAD *pLlad);
void llad_close(struct LLAD *pLlad);
void gbus_close(struct GBUS *pGbus);
RMstatus gbus_lock_area(struct GBUS *pGbus, RMuint32 *index, RMuint32 address, RMuint32 size, RMuint32 *count, RMuint32 *offset);
RMstatus gbus_get_locked_area(struct GBUS *pGbus, RMuint32 address, RMuint32 size, RMuint32 *index, RMuint32 *count, RMuint32 *offset);
RMuint8 *gbus_map_region(struct GBUS *pGbus, RMuint32 index, RMuint32 count);
void gbus_unmap_region(struct GBUS *pGbus, RMuint8 *address, RMuint32 size);
RMstatus gbus_unlock_region(struct GBUS *pGbus, RMuint32 index);


#endif
