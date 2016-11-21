CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=permutation \
				 bfs \
				 bom_bfs \
				 bom_dfs \
				 9_card \
				 floodfill_1 \
				 floodfill_2 \
				 floodfill_3 \
				 labyrinth

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

permutation: permutation.o
9_card: 9_card.o
bfs: bfs.o
bom_bfs: bom_bfs.o
bom_dfs: bom_dfs.o
labyrinth: labyrinth.o
floodfill_1: floodfill_1.o
floodfill_2: floodfill_2.o
floodfill_3: floodfill_3.o

clean:
	rm -rf $(OBJ) $(BINARIES)
