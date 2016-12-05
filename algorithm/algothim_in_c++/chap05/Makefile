CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=gcd \
				 eval \
				 divide1

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


gcd: gcd.o
eval: eval.o
divide1: divide1.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
