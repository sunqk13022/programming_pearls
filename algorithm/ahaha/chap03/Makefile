CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=fishing \
				 link_array \
				 stick \
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
stick: stick.o

clean:
	rm -rf $(OBJ) $(BINARIES)
