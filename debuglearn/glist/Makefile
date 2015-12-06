P=glist
OBJECTS=glist.o
LDLIBS=-lglib-2.0
CFLAGS= -g -Wall -O0 $(shell pkg-config --cflags glib-2.0)
CC=c99

$(P): $(OBJECTS)

clean:
	rm -f glist glist.o
