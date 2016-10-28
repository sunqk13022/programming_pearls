CXXFLAGS=-g -Wall -O0
LDFLAGS =
BINARIES=main1_1 \
				 main2   \
				 main4   \
				 main3

CC=g++

all: $(BINARIES)

SRC := $(wildcard *.cc)
OBJ:=$(SRC:%.cc=%.o)

$(BINARIES):
	$(CC) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

main1_1: main1_1.o
main2: main2.o
main3: main3.o
main4: main4.o

clean:
	rm -rf $(OBJ) $(BINARIES)
