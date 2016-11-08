CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=main3_8

CC=g++

all: $(BINARIES)

#SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

main3_8: main3_8.cc Point.cc

clean:
	rm -rf $(OBJ) $(BINARIES)
