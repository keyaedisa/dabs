Name = New beginnings

SRC = $(shell pwd)
CC = gcc
pkg = dab
OBJS = *.o
REBUILDABLES = $(OBJS) $(pkg)
CFLAGS += -g -Wall
CFLAGS += -I$(SRC)/include/ -I$(SRC) -I$(SRC)/src
#CPPFLAGS += -I src

export SRC pkg OBJS CFLAGS REBUILDABLES

all : 
	$(MAKE) -C src

#$(pkg) : $(OBJS)
#	gcc -o $(pkg) $(SRC)*.o
#	make clean 

#$(OBJS) : $(SRC)
#	gcc -c $(SRC)*.c

clean :
	$(MAKE) -C src clean
	
sweep :
	$(MAKE) -C src sweep