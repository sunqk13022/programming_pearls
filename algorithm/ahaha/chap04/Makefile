CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=permutation \
				 9_card \
				 labyrinth

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

permutation: permutation.o
9_card: 9_card.o
labyrinth: labyrinth.o

clean:
	rm -rf $(OBJ) $(BINARIES)
