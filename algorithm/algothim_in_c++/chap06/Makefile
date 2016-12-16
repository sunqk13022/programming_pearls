CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=sort1 \

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


sort1: sort1.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
