CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=select

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


select: select.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
