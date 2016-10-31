CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=main \
				 insert_sort \
				 bubble_sort \
				 quick_sort \
				 merge_sort

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

main: main.o
insert_sort: insert_sort.o
merge_sort: merge_sort.o
bubble_sort: bubble_sort.o
quick_sort: quick_sort.o

clean:
	rm -rf $(OBJ) $(BINARIES)
