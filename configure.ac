AC_PREREQ([2.64])

m4_define([tinywm_major_version], [1])
m4_define([tinywm_minor_version], [0])
m4_define([tinywm_micro_version], [0])
m4_define([tinywm_version],
          [tinywm_major_version.tinywm_minor_version.tinywm_micro_version])

AC_INIT([tinywm],
        [tinywm_version],
        [https://github.com/xiangzhai/tinywm/issues],
        [tinywm],
        [http://xiangzhai.github.io/tinywm/])

AC_SUBST([TINYWM_VERSION_MAJOR], [tinywm_major_version])
AC_SUBST([TINYWM_VERSION_MINOR], [tinywm_minor_version])
AC_SUBST([TINYWM_VERSION_MICRO], [tinywm_micro_version])
AC_SUBST([TINYWM_VERSION], [tinywm_version])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.11 foreign no-dist-gzip dist-xz subdir-objects])

AM_SILENT_RULES([yes])

# Check for programs
AC_PROG_CC

# Initialize libtool
LT_PREREQ([2.2])
LT_INIT

PKG_PROG_PKG_CONFIG()
PKG_CHECK_MODULES(FFI, [libffi])

if test "x$GCC" = "xyes"; then
	GCC_CFLAGS="-Wall -Wextra -Wno-unused-parameter -g -Wstrict-prototypes -Wmissing-prototypes -fvisibility=hidden"
fi
AC_SUBST(GCC_CFLAGS)

AC_CHECK_FUNCS([accept4 mkostemp posix_fallocate])

AC_CHECK_DECL(SFD_CLOEXEC,[],
	      [AC_MSG_ERROR("SFD_CLOEXEC is needed to compile tinywm")],
	      [[#include <sys/signalfd.h>]])
AC_CHECK_DECL(TFD_CLOEXEC,[],
	      [AC_MSG_ERROR("TFD_CLOEXEC is needed to compile tinywm")],
	      [[#include <sys/timerfd.h>]])
AC_CHECK_DECL(CLOCK_MONOTONIC,[],
	      [AC_MSG_ERROR("CLOCK_MONOTONIC is needed to compile tinywm")],
	      [[#include <time.h>]])
AC_CHECK_HEADERS([execinfo.h])

AC_CONFIG_FILES([Makefile
		 libtinywm/tinywm.pc
		 libtinywm/tinywm-version.h])
AC_OUTPUT
