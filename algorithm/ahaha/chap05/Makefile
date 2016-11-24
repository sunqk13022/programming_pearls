CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=graph1 \
				 graph2 \
				 map1

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

graph1: graph1.o
graph2: graph2.o
map1: map1.o

clean:
	rm -rf $(OBJ) $(BINARIES)
