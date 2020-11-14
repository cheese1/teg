/* Tenes Empanadas Graciela
 *
 * Copyright (C) 2000 Ricardo Quesada
 *
 * Author: Ricardo Calixto Quesada <rquesada@core-sdi.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; only version 2 of the License.
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

#ifndef TEG_TEGDEBUG_H
#define TEG_TEGDEBUG_H

#include <stdio.h>

#define TEGDEBUG

#ifdef TEGDEBUG
#	define PDEBUG(format, ...) fprintf(stderr, "%s:%d(%s)" format, \
	                               __FILE__, __LINE__, __PRETTY_FUNCTION__ \
	                               __VA_OPT__(, __VA_ARGS__))
#else
#	define PDEBUG(a)
#endif

#endif /* __TEG_TEGDEBUG_H */
