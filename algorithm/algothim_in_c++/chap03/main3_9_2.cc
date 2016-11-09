#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]) {
  int i, N = atoi(argv[1]), M = atoi(argv[2]);
  int* item = new int[N];
  int* next = new int[N];
  for (i = 1; i <=N; ++i) {
    item[i-1] = i;
    next[i-1] = i;
  }
  next[N-1] = 0;

  i = N - 1;
  while (next[i] != i) {
    for (int j = 1; j < M; ++j) {
      i = next[i];
    }
    next[i] = next[next[i]];
  }

  cout << item[i] << endl;
  return 0;
}
