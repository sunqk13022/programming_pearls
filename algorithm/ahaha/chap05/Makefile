CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=graph1 \
				 graph2

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

graph1: graph1.o
graph2: graph2.o

clean:
	rm -rf $(OBJ) $(BINARIES)
