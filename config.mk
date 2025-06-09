# st version

VERSION = 0.9.1+meldon
BUILDDIR = st_$(VERSION)
PKGDIR = st-$(VERSION)


# Customize below to fit your system

# paths
PREFIX = /usr/local
MANPREFIX = $(PREFIX)/share/man
FONTPREFIX = $(PREFIX)/share/fonts/truetype

#X11INC = /usr/X11R6/include
#X11LIB = /usr/X11R6/lib

X11INC = /usr/include/X11
X11LIB = /usr/lib/X11

PKG_CONFIG = pkg-config

# includes and libs
INCS = -I$(X11INC) \
       `$(PKG_CONFIG) --cflags fontconfig` \
       `$(PKG_CONFIG) --cflags freetype2`
LIBS = -L$(X11LIB) -lm -lrt -lX11 -lutil -lXft \
       `$(PKG_CONFIG) --libs fontconfig` \
       `$(PKG_CONFIG) --libs freetype2`

# flags

#new
STCPPFLAGS = -DVERSION=\"$(VERSION)\" -D_XOPEN_SOURCE=600 -g3 -O0
STCFLAGS = $(INCS) $(STCPPFLAGS) $(CPPFLAGS) $(CFLAGS)

STLDFLAGS = $(LIBS) $(LDFLAGS)

CC = gcc

# OpenBSD:
#CPPFLAGS = -DVERSION=\"$(VERSION)\" -D_XOPEN_SOURCE=600 -D_BSD_SOURCE
#LIBS = -L$(X11LIB) -lm -lX11 -lutil -lXft \
#       `$(PKG_CONFIG) --libs fontconfig` \
#       `$(PKG_CONFIG) --libs freetype2`
#MANPREFIX = ${PREFIX}/man

# compiler and linker
# CC = c99
