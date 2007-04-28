/* SLV2
 * Copyright (C) 2007 Dave Robillard <http://drobilla.net>
 *  
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __SLV2_VALUE_H__
#define __SLV2_VALUE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <slv2/types.h>

/** \addtogroup data
 * @{
 */


/** Return whether two values are equivalent.
 */
bool
slv2_value_equals(SLV2Value value, SLV2Value other);


/** Return whether the value is a URI (resource).
 *
 * Time = O(1)
 */
bool
slv2_value_is_uri(SLV2Value value);


/** Return this value as a URI string, e.g. "http://example.org/foo".
 * 
 * Valid to call only if slv2_value_is_uri(\a value) returns true.
 * Returned value is owned by \a value and must not be freed by caller.
 * 
 * Time = O(1)
 */
const char*
slv2_value_as_uri(SLV2Value value);


/** Return whether this value is a literal (i.e. not a URI).
 *
 * Returns true if \a value is a string or numeric value.
 *
 * Time = O(1)
 */
bool
slv2_value_is_literal(SLV2Value value);


/** Return whether this value is a string literal.
 *
 * Returns true if \a value is a string (but not  numeric) value.
 *
 * Time = O(1)
 */
bool
slv2_value_is_string(SLV2Value value);


/** Return whether this value is a string literal.
 *
 * Time = O(1)
 */
const char*
slv2_value_as_string(SLV2Value value);


/** Return whether this value is a decimal literal.
 *
 * Time = O(1)
 */
bool
slv2_value_is_float(SLV2Value value);


/** Return \a value as a float.
 * 
 * Valid to call only if slv2_value_is_float(\a value) or
 * slv2_value_is_int(\a value) returns true.
 *
 * Time = O(1)
 */
float
slv2_value_as_float(SLV2Value value);


/** Return whether this value is an integer literal.
 * 
 * Time = O(1)
 */
bool
slv2_value_is_int(SLV2Value value);


/** Return \a value as an integer.
 * 
 * Valid to call only if slv2_value_is_int(\a value) returns true.
 *
 * Time = O(1)
 */
int
slv2_value_as_int(SLV2Value value);


/** @} */

#ifdef __cplusplus
}
#endif

#endif /* __SLV2_VALUE_H__ */
