OBJS		= atmos.o 

all:	atmos

atmos:	$(OBJS)
		$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

clean:
		rm -f *~ *.o core atmos

test:	atmos

.PHONY: all clean test

atmos.o: atmos.c

