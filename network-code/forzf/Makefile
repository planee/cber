//CC = arm-linux-gcc

PUBSO = alg

CC = gcc

CFLAGS = -g -Wall
INCL = -I. 
LIBS = -lpthread -lpcap

SOURCES := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))


all: $(PUBSO)
	@echo $(PUBSO) 

$(PUBSO):$(OBJS)
	$(CC)  -o $@ $(OBJS) -L../libs $(LIBS)
	
.c.o:
	$(CC) $(CFLAGS) -c $< $(INCL)
	
clean:
	rm -f *.o $(PUBSO) *.bak