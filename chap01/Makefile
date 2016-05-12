CXX := g++
CXXFLAGS := -g3 -O2 -fstrict-aliasing -Wall -fPIC -std=c++0x
LDFLAGS := -pthread


TARGET := merge_array \
 bitmap1

all:
	$(MAKE) $(TARGET)

merge_array: merge_array.cc
	$(CXX) $^  -o $@  $(LDFLAGS)

bitmap1: bitmap1.cc
	$(CXX) $^  -o $@  $(LDFLAGS)

clean:
	-rm -f $(TARGET) *.o
