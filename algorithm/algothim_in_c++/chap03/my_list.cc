#include <stdlib.h>
#include "my_list.h"

node* free_list;

void list_construct(int N) {
  free_list = new node[N+1];
  for (int i = 0; i < N; ++i) {
    free_list[i].next = &free_list[i+1];
  }
  free_list[N].next = 0;
}

node* newNode(int i) {
  node* x = list_remove(free_list);
  x->item = i;
  x->next = x;
  return x;
}

void deleteNode(node* x) {
  list_insert(free_list, x);
}

void list_insert(node* x, node* t) {
  t->next = x->next;
  x->next = t;
}

node* list_remove(node* x) {
  node* t = x->next;
  x->next = t->next;
  return t;
}

node* list_next(node* x) {
  return x->next;
}

Item item(node* x) {
  return x->item;
}


