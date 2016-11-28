CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=count_sort

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


count_sort: count_sort.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
