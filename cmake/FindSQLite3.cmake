# $Id: FindSQLite3.cmake 521 2016-04-07 00:20:10Z sausage $
# Copyright (c) Julian Smythe, All rights reserved.
#
# This software is provided 'as-is', without any express or implied
# warranty.  In no event will the authors be held liable for any damages
# arising from the use of this software.
#
# Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
#    claim that you wrote the original software. If you use this software
#    in a product, an acknowledgment in the product documentation would be
#    appreciated but is not required.
#
# 2. Altered source versions must be plainly marked as such, and must not be
#    misrepresented as being the original software.
#
# 3. This notice may not be removed or altered from any source distribution.
#

find_path(SQLITE3_INCLUDE_DIR
	NAMES sqlite3.h
)

find_library(SQLITE3_LIBRARY
	NAMES sqlite3
)

include(FindPackageHandleStandardArgs)

find_package_handle_standard_args(
	SQLite3 DEFAULT_MSG
	SQLITE3_LIBRARY SQLITE3_INCLUDE_DIR
)

mark_as_advanced(
	SQLITE3_INCLUE_DIR
	SQLITE3_LIBRARY
)

