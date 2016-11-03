CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=dqueue_1 \
				 dqueue_2

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

dqueue_1: dqueue_1.o
dqueue_2: dqueue_2.o

clean:
	rm -rf $(OBJ) $(BINARIES)
