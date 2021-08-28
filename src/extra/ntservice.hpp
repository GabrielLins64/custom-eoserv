
/* $Id: ntservice.hpp 280 2012-01-27 11:17:34Z sausage $
 * EOSERV is released under the zlib license.
 * See LICENSE.txt for more info.
 */

#ifndef EXTRA_NTSERVICE_HPP_INCLUDED
#define EXTRA_NTSERVICE_HPP_INCLUDED

#include "../platform.h"

#ifndef WIN32
#error Services are Windows only
#endif // WIN32

void service_init(const char *name);
bool service_install(const char *name);
bool service_uninstall(const char *name);

#endif // EXTRA_NTSERVICE_HPP_INCLUDED
