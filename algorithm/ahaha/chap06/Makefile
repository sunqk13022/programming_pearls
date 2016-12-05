CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=map1 \
				 map2 \
				 map4 \
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
map4: map4.o

clean:
	rm -rf $(OBJ) $(BINARIES)
