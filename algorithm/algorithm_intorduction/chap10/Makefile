CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=dequeue

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


dequeue: dequeue.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
