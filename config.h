/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define this to enable debug messages and assert warnings. */
/* #undef DEBUG */

/* Define this to disable the built-in file browser. */
#define DISABLE_BROWSER 1

/* Define this to disable the help text display. */
#define DISABLE_HELP 1

/* Define this to disable the justify routines. */
#define DISABLE_JUSTIFY 1

/* Define this to disable the mouse support. */
#define DISABLE_MOUSE 1

/* Define this to disable the setting of the operating directory (chroot of
   sorts). */
#define DISABLE_OPERATINGDIR 1

/* Define this to disable text wrapping as root by default. */
#define DISABLE_ROOTWRAPPING 1

/* Define this to disable the spell checker functions. */
#define DISABLE_SPELLER 1

/* Define to disable the tab completion functions for files and search
   strings. */
#define DISABLE_TABCOMP 1

/* Define this to disable all text wrapping. */
/* #undef DISABLE_WRAPPING */

/* Define this to have syntax highlighting, requires regex.h and ENABLE_NANORC
   too! */
#define ENABLE_COLOR 1

/* Define this to enable multiple file buffers. */
/* #undef ENABLE_MULTIBUFFER */

/* Define this to use .nanorc files. */
#define ENABLE_NANORC 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define this if your system has sufficient UTF-8 support (a wide curses
   library, iswalnum(), iswpunct(), iswblank() or iswspace(), nl_langinfo,
   mblen(), mbstowcs(), mbtowc(), wctomb(), and wcwidth()). */
/* #undef ENABLE_UTF8 */

/* Define if the system supports GNU-style word boundaries in regexes. */
#define GNU_WORDBOUNDS 1

/* Define to 1 if you have the <curses.h> header file. */
#define HAVE_CURSES_H 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `getdelim' function. */
/* #undef HAVE_GETDELIM */

/* Define to 1 if you have the `getline' function. */
/* #undef HAVE_GETLINE */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `iswalnum' function. */
/* #undef HAVE_ISWALNUM */

/* Define to 1 if you have the `iswblank' function. */
/* #undef HAVE_ISWBLANK */

/* Define to 1 if you have the `iswpunct' function. */
/* #undef HAVE_ISWPUNCT */

/* Define to 1 if you have the `iswspace' function. */
/* #undef HAVE_ISWSPACE */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `mblen' function. */
/* #undef HAVE_MBLEN */

/* Define to 1 if you have the `mbstowcs' function. */
/* #undef HAVE_MBSTOWCS */

/* Define to 1 if you have the `mbtowc' function. */
/* #undef HAVE_MBTOWC */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <ncurses.h> header file. */
#define HAVE_NCURSES_H 1

/* Define to 1 if you have the `nl_langinfo' function. */
/* #undef HAVE_NL_LANGINFO */

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define this if your curses library has the use_default_colors() command. */
#define HAVE_USE_DEFAULT_COLORS 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the `wctomb' function. */
/* #undef HAVE_WCTOMB */

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the `wcwidth' function. */
/* #undef HAVE_WCWIDTH */

/* Define this to enable extra stuff. */
/* #undef NANO_EXTRA */

/* Define this to make the nano executable as small as possible. */
#define NANO_TINY 1

/* Shut up assert warnings :-) */
#define NDEBUG 1

/* Define this if you need the _XOPEN_SOURCE_EXTENDED macro for color support
   */
/* #undef NEED_XOPEN_SOURCE_EXTENDED */

/* Name of package */
#define PACKAGE "nano"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "nano-devel@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU nano"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU nano 2.2.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "nano"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.gnu.org/software/nano/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.2.4"

/* Where data are placed to. */
#define PKGDATADIR "/usr/local/share/nano"

/* Specify alternate rcfile name (default: .nanorc) */
/* #undef RCFILE_NAME */

/* Define this if you know your curses library allows LINES and COLS to be
   redefined to deal with a resizing bug */
#define REDEFINIG_MACROS_OK 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to use the slang wrappers for curses instead of native curses. */
/* #undef USE_SLANG */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.2.4"

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
