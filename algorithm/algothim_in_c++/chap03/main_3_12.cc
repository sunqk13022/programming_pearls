#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "my_list.h"

using namespace std;

int main(int argc, char* argv[]) {
  int i, N = atoi(argv[1]), M = atoi(argv[2]);
  node* t;
  node* x;
  list_construct(N);
  for (i = 2, x = newNode(1); i <= N; ++i) {
    t = newNode(i);
    list_insert(x, t);
    x = t;
  }
  while (x != list_next(x)) {
    for (i = 1; i < M; ++i) x = list_next(x);
    deleteNode(list_remove(x));
  }
  cout << item(x) << endl;
  return 0;
}
