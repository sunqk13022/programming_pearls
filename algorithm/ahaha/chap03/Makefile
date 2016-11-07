CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=fishing

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

fishing: fishing.o

clean:
	rm -rf $(OBJ) $(BINARIES)
