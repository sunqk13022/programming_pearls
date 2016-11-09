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
  node heada(0, 0);
  node* a = &heada, *t = a;
  int N = atoi(argv[1]);
  for (int i = 0; i < N; ++i) {
    t = (t->next = new node(rand()%1000, 0));
  }

  node headb(0, 0);
  node* u, *x, *b = &headb;
  for (t = a->next; t != 0; t = u) {
    u = t->next;
    for (x = b; x->next != 0; x = x->next) {
      if (x->next->item > t->item) break;
    }
    t->next = x->next;
    x->next = t;
  }

  for (t = b->next; t != 0; t = t->next) {
    cout << t->item << " ";
  }
  cout << endl;
  getchar();
  return 0;
}
