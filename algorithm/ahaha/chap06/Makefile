CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=map1

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

map1: map1.o

clean:
	rm -rf $(OBJ) $(BINARIES)
