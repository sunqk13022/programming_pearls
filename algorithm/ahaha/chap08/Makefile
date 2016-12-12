CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=mintree1   \
				 mintree2  \
				 mintree3

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mintree1: mintree1.o
mintree2: mintree2.o
mintree3: mintree3.o

clean:
	rm -rf $(OBJ) $(BINARIES)
