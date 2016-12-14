CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=binary_tree

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


binary_tree: binary_tree.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
