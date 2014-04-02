ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

aclocaldir = $(datadir)/aclocal

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA =

lib_LTLIBRARIES = libtinywm.la

include_HEADERS =				\
	libtinywm/tinywm.h			\
	libtinywm/tinywm-version.h

libtinywm_la_CFLAGS = $(FFI_CFLAGS) $(GCC_CFLAGS) -pthread
libtinywm_la_LIBADD = $(FFI_LIBS) -lrt -lm
libtinywm_la_LDFLAGS = -version-info 1:0:1
libtinywm_la_SOURCES =			\
	libtinywm/tinywm.c

pkgconfig_DATA += libtinywm/tinywm.pc

BUILT_SOURCES =					\
	$(nodist_libtinywm_la_SOURCES)	\
	$(nodist_libwayland_client_la_SOURCES)

CLEANFILES = $(BUILT_SOURCES)
DISTCLEANFILES = libtinywm/tinywm-version.h
EXTRA_DIST = libtinywm/tinywm-version.h.in
