
/* $Id: hash.hpp 249 2012-01-10 01:42:35Z sausage $
 * EOSERV is released under the zlib license.
 * See LICENSE.txt for more info.
 */

#ifndef HASH_HPP_INCLUDED
#define HASH_HPP_INCLUDED

#include <string>

/**
 * Convert a string to the hex representation of it's sha256 hash
 */
std::string sha256(const std::string&);

#endif // HASH_HPP_INCLUDED
