CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=quick_sort

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


quick_sort: quick_sort.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
