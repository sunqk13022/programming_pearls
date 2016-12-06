CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=heap1 \
				 heap2

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

heap1: heap1.o
heap2: heap2.o

clean:
	rm -rf $(OBJ) $(BINARIES)
