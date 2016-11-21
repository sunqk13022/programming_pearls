CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=cal1 \
				 cal2 \
				 cal3

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


cal1: cal1.o
cal2: cal2.o
cal3: cal3.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
