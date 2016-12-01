CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=map1 \
				 map2 \
				 map3

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

map1: map1.o
map2: map2.o
map3: map3.o

clean:
	rm -rf $(OBJ) $(BINARIES)
