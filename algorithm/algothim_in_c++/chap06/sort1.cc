#include <iostream>
#include <stdlib.h>

using namespace std;

template <class Item>
void exch(Item& a, Item& b) {
  Item t = a;
  a = b;
  b = t;
}

template <class Item>
void compexch(Item& a, Item& b) {
  if (b < a) exch(a, b);
}

template <class Item>
void sort1(Item a[], int l, int r) {
  for (int i = l + 1; i <=r; ++i) {
    for (int j = i; j >l; --j) {
      compexch(a[j-1], a[j]);
    }
  }
}

int main() {
  int n = 10;
  int* a = new int[n];
  for (int i = 0; i < n; ++i) {
    a[i] = 1000*(1.0*rand()/RAND_MAX);
  }
  sort1(a, 0, n-1);
  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
