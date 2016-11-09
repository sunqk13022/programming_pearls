#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

struct node {
  int item;
  node* next;
  node(int x, node* t) {
    item = x;
    next = t;
  }
};


int main(int argc, char* argv[]) {
  int i, N = atoi(argv[1]), M = atoi(argv[2]);
  node* t = new node(1, 0);
  t->next = t;
  node* x = t;
  for (i = 2; i <=N; ++i) {
    x = (x->next = new node(i, t));
  }

  while (x != x->next) {
    for (i = 1; i < M; ++i) {
      x = x->next;
    }
    x ->next = x->next->next;
  }

  cout << x->item << endl;
  return 0;
}
