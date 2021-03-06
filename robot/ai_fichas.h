/*	$Id: ai_fichas.h,v 1.2 2001/09/03 00:55:40 riq Exp $	*/
/* Tenes Empanadas Graciela
 *
 * Copyright (C) 2000 Ricardo Quesada
 *
 * Author: Ricardo Calixto Quesada <riq@core-sdi.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; only version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
 */
/**
 * @file ai_fichas.h
 */

#ifndef __TEGR_AI_FICHAS_H
#define __TEGR_AI_FICHAS_H

TEG_STATUS ai_fichas( int cant );
TEG_STATUS ai_fichasc( int cant, int conts);
TEG_STATUS ai_fichas_calc_puntaje( int p );

#endif /* __TEGR_AI_FICHAS_H */
