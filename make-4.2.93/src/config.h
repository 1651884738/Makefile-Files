/* configh.dos -- hand-massaged config.h file for MS-DOS builds         -*-C-*-

Copyright (C) 1994-2020 Free Software Foundation, Inc.
This file is part of GNU Make.

GNU Make is free software; you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation; either version 3 of the License, or (at your option) any later
version.

GNU Make is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Include this header to make __DJGPP_MINOR__ available because DJGPP ports
   of GCC 4.3.0 and later no longer do it automatically.  */
#include <sys/version.h>

/* Many things are defined already by a system header.  */
#include <sys/config.h>

#if __DJGPP__ > 2 || __DJGPP_MINOR__ > 1

/* Define to 1 if 'sys_siglist' is declared by <signal.h> or <unistd.h>. */
# define SYS_SIGLIST_DECLARED 1

/* Define to 1 if the C library defines the variable '_sys_siglist'.  */
# define HAVE_DECL_SYS_SIGLIST 1

#else

/* Define NSIG.  */
# define NSIG SIGMAX

#endif

/* Use high resolution file timestamps if nonzero. */
#define FILE_TIMESTAMP_HI_RES 0

/* Define to 1 if you have 'alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have the fdopen function.  */
#define HAVE_FDOPEN 1

/* Define to 1 if you have the 'getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the <memory.h> header file.  */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the mkstemp function.  */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the 'mktemp' function. */
#define HAVE_MKTEMP 1

/* Define to 1 if you have the 'setlinebuf' function. */
#define HAVE_SETLINEBUF 1

/* Define to 1 if you have the 'setvbuf' function. */
#define HAVE_SETVBUF 1

#define SCCS_GET "get"

/* Define to 'unsigned long' or 'unsigned long long'
   if <inttypes.h> doesn't define.  */
#define uintmax_t unsigned long long

/* Define the type of the first arg to select().  */
#define fd_set_size_t int

/* Define to 1 if you have the select function.  */
#define HAVE_SELECT 1

/* Define to 1 if you have the stricmp function.  */
#define HAVE_STRICMP 1

/* Define to 1 if you have the 'strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Name of the package */
#define PACKAGE "make"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-make@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU make"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU make 4.2.93"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "make"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.2.93"

/* Output sync sypport */
#define NO_OUTPUT_SYNC

/* Version number of package */
#define VERSION "4.2.93"

/* Build host information. */
#define MAKE_HOST "i386-pc-msdosdjgpp"

/* Grok DOS paths (drive specs and backslash path element separators) */
#define HAVE_DOS_PATHS

/* Define to `int' if <sys/types.h> does not define. */
#define ssize_t int
