CXX := g++
CXXFLAGS := -g3 -O2 -fstrict-aliasing -Wall -fPIC -std=c++0x
LDFLAGS := -pthread


TARGET := merge_array

all:
	$(MAKE) $(TARGET)

merge_array: merge_array.cc
	$(CXX) $^  -o $@  $(LDFLAGS)

clean:
	-rm -f merge_array *.o
