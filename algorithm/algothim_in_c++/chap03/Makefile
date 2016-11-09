CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=main3_8 \
				 main3_9_2 \
				 main3_9

CC=g++

all: $(BINARIES)

#SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

main3_8: main3_8.cc Point.cc

main3_9: main3_9.o
main3_9_2: main3_9_2.o

clean:
	rm -rf $(OBJ) $(BINARIES) *.o
