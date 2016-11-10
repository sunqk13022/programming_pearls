CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=fishing \
				 link_array \
				 bom

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

fishing: fishing.o
link_array: link_array.o
bom: bom.o

clean:
	rm -rf $(OBJ) $(BINARIES)
