
/* $Id: socket_impl.hpp 490 2015-11-18 10:46:34Z sausage $
 * EOSERV is released under the zlib license.
 * See LICENSE.txt for more info.
 */

#ifndef SOCKET_IMPL_HPP_INCLUDED
#define SOCKET_IMPL_HPP_INCLUDED

#include "platform.h"

#ifdef WIN32
#include "eoserv_windows.h"
#if defined(NTDDI_WIN2K) && !defined(__MINGW32__)
#include <Wspiapi.h>
#else // NTDDI_WIN2K
#ifdef __MINGW32__
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif //  __MINGW32__
#include <ws2tcpip.h>
#endif // NTDDI_WIN2K

/**
 * Type for storing the size of a POSIX sockaddr_in struct.
 * Defined here because it does not exist in MinGW's winsock headers.
 */
typedef int socklen_t;

#else // WIN32
// Stop doxygen generating a gigantic include graph
#ifndef DOXYGEN
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#ifdef SOCKET_POLL
#include <sys/poll.h>
#endif // SOCKET_POLL
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <netdb.h>
#include <unistd.h>
#endif // DOXYGEN

/**
 * Type for storing a socket handle.
 * Defined here because it does not exist in non-Windows headers.
 */
typedef int SOCKET;

/**
 * Socket handle representing an invalid socket.
 */
const SOCKET INVALID_SOCKET = -1;

/**
 * Return code representing a socket error.
 */
const int SOCKET_ERROR = -1;

#endif // WIN32

struct Socket
{
	SOCKET sock;
	sockaddr_in sin;

	Socket(const SOCKET &sock = INVALID_SOCKET, const sockaddr_in &sin = sockaddr_in())
		: sock(sock), sin(sin)
	{ }
};

#endif // SOCKET_IMPL_HPP_INCLUDED
