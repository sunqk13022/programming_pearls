CXXFLAGS=-g -Wall -O0
LDFLAGS =

BINARIES=gcd \
				 eval

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


gcd: gcd.o
eval: eval.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
