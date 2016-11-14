CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=max_subset1 \
				 max_subset3 \
				 max_subset2

CC=g++

all: $(BINARIES)

#SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


max_subset1: max_subset1.o
max_subset3: max_subset3.o
max_subset2: max_subset2.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
