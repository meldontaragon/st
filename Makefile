# st - simple terminal
# See LICENSE file for copyright and license details.
.POSIX:

include config.mk

SRC = st.c x.c
OBJ = $(SRC:.c=.o)

all: options st

options:
	@echo st build options:
	@echo "CFLAGS  = $(STCFLAGS)"
	@echo "LDFLAGS = $(STLDFLAGS)"
	@echo "CC      = $(CC)"

config.h: 
	cp config.def.h config.h

.c.o:
	$(CC) $(STCFLAGS) -c $<

st.o: config.h st.h win.h
x.o: arg.h config.h st.h win.h

$(OBJ): config.h config.mk

st: $(OBJ)
	$(CC) -o $@ $(OBJ) $(STLDFLAGS)

clean:
	rm -f st $(OBJ) st-$(VERSION).tar.gz

dist: clean
	mkdir -p $(PKGDIR)
	cp -R FAQ LEGACY TODO LICENSE Makefile README config.mk\
		config.def.h st.info st.1 arg.h st.h win.h $(SRC)\
		$(PKGDIR)
	tar -cf - st-$(VERSION) | gzip > $(PKGDIR).tar.gz
	rm -rf $(PKGDIR)

install: st
	install -Dm 755 st $(DESTDIR)$(PREFIX)/bin/st
	mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	sed "s/VERSION/$(VERSION)/g" < st.1 > st.1.$(VERSION)
	install -Dm644 st.1.$(VERSION) $(DESTDIR)$(MANPREFIX)/man1/st.1
	rm ./st.1.$(VERSION)
	install -Dm 644 droid-sans-mono/DroidSansMono.ttf $(DESTDIR)$(FONTPREFIX)/droid-sans-mono/DroidSansMono.ttf
	tic -sx st.info
	@echo Please see the README file regarding the terminfo entry of st.

build: clean clean-build st
	install -Dm755 st ./$(BUILDDIR)/usr/bin/st
	sed "s/VERSION/$(VERSION)/g" < st.1 > st.1.$(VERSION)
	install -Dm644 ./st.1.$(VERSION) ./$(BUILDDIR)/usr/share/man/man1/st.1
	rm ./st.1.$(VERSION)
	install -Dm644 droid-sans-mono/DroidSansMono.ttf ./$(BUILDDIR)/usr/share/fonts/truetype/droid-sans-mono/DroidSansMono.ttf
	mkdir -p ./$(BUILDDIR)/etc/terminfo/s 
	tic -o ./$(BUILDDIR)/etc/terminfo/ -sx st.info
	sed "s/VERSION/$(VERSION)/g" < control > control.$(VERSION)
	install -Dm644 ./control.$(VERSION) ./$(BUILDDIR)/DEBIAN/control
	rm ./control.$(VERSION)
	@echo pkg built in ./$(BUILDDIR)

clean-build:
	rm -rf ./$(BUILDDIR)

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/st
	rm -f $(DESTDIR)$(MANPREFIX)/man1/st.1

.PHONY: all options clean dist install uninstall
