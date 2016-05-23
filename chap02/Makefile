CXX := g++
CXXFLAGS := -g3 -O2 -fstrict-aliasing -Wall -fPIC -std=c++0x
LDFLAGS := -pthread


TARGET := sign \
squash

all:
	$(MAKE) $(TARGET)

sign: sign.cc
	$(CXX) $^  -o $@  $(LDFLAGS)

squash: squash.cc
	$(CXX) $^  -o $@  $(LDFLAGS)

create_data: create_data.cc
	$(CXX) $^  -o $@  $(LDFLAGS)

clean:
	-rm -f $(TARGET) *.o
