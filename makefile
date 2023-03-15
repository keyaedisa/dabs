Name = New beginnings

SRC = $(shell pwd)
CC = gcc
pkg = dab
OBJS = *.o
REBUILDABLES = $(OBJS) $(pkg)
CFLAGS += -g -Wall
CFLAGS += -I$(SRC)/include/ -I$(SRC)/src

export SRC pkg OBJS CFLAGS REBUILDABLES

all : 
	$(MAKE) -C src

clean :
	$(MAKE) -C src clean
	
sweep :
	$(MAKE) -C src sweep