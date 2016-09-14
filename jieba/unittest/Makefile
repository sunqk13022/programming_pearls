CXXFLAGS=-g -Wall -O2 -I /data/sunqiankun/jieba/cppjieba-master/deps/gtest/include -I /data/sunqiankun/jieba/cppjieba-master/include -I /data/sunqiankun/jieba/cppjieba-master/deps
LDFLAGS= -lgtest -lpthread -L /data/sunqiankun/jieba/cppjieba-master/build/deps/gtest
CC=g++

BINARIES=gtest_main 

all: $(BINARIES)


$(BINARIES):
	echo $^
	$(CC) $(CXXFLAGS) -o $@  $(filter %.cpp,$^) $(LDFLAGS)

gtest_main: gtest_main.cpp jieba_test.cpp

clean:
	rm -rf $(BINARIES)
