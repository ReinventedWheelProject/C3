###Makefile
###-lstdc++#lib std c++
CC=g++
STD=_GNU_SOURCE
####OBJS=class.o 
OBJS=launcher.o
OUTF=aiterm
.c.o:
	$(CC) -c -Wall -lstdc++ $(CFLAGS) -D$(STD)$<
all: build run
build: $(OBJS)
	$(CC) $(OBJS) -o $(OUTF)
run:
	./$(OUTF) 25566
clean:
	rm -f *.o
clober: clean 
	rm -f $(OUTF)	
###End Makefile
