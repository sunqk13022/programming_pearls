CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=heapsort

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


heapsort: heapsort.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
