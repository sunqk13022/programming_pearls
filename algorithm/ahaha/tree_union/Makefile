CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=main

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

main: main.o

clean:
	rm -rf $(OBJ) $(BINARIES)
