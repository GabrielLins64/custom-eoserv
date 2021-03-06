# $Id: FindPThreads.cmake 521 2016-04-07 00:20:10Z sausage $
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

find_path(PTHREADS_INCLUDE_DIR
	NAMES pthread.h
)

find_library(PTHREADS_LIBRARY
	NAMES pthread pthread2 pthreadGC pthreadGC2
)

include(FindPackageHandleStandardArgs)

find_package_handle_standard_args(
	PThreads DEFAULT_MSG
	PTHREADS_LIBRARY PTHREADS_INCLUDE_DIR
)

mark_as_advanced(
	PTHREADS_INCLUE_DIR
	PTHREADS_LIBRARY
)
