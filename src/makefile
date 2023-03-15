Name = New beginnings

all : $(pkg)
	
dab : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(pkg)
	$(MAKE) clean 

$(OBJS) : *.c
	$(CC) $(CFLAGS) -c *.c

clean :
	rm -f $(OBJS)
	echo "Clean done"

sweep :
	rm $(REBUILDABLES)