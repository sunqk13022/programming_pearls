#include <stdio.h>
#include <iostream>

using namespace std;

int max_ele(int* a, int l, int r) {
  if (l == r) return a[l];
  int m = (l + r) / 2;
  int u =max_ele(a, l, m);
  int v = max_ele(a, m+1, r);
  return u > v? u:v;
}

int main() {
  int a[11] = {0,1,2,3,4,5,6,7,8,9,10};
  cout << "max:" << max_ele(a, -0, 10) << endl;
  return 0;
}
