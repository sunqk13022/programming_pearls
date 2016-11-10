#ifndef CHAP03_LIST_H_
#define CHAP03_LIST_H_

typedef int Item;
struct node {
  Item item;
  node* next;
};

void list_construct(int);
node* newNode(int);
void deleteNode(node*);
void list_insert(node*, node*);
node* list_remove(node*);
node* list_next(node*);
Item item(node*);

#endif // CHAP03_LIST_H_
