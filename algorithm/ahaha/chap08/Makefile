CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=mintree1

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mintree1: mintree1.o

clean:
	rm -rf $(OBJ) $(BINARIES)
