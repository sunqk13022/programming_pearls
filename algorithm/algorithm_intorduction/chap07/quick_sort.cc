#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void ss(int& a, int&b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition(int *d, int l, int r) {
  int x = d[r];
  int i = l - 1;
  for (int j = l; j < r; ++j) {
    if (d[j] <= x) {
      ++i;
      ss(d[i], d[j]);
    }
  }
  ss(d[i+1], d[r]);
  return i + 1;
}

void quick_sort(int* a, int l, int r) {
  if (l < r) {
    int mid = partition(a, l, r);
    quick_sort(a, l, mid - 1);
    quick_sort(a, mid + 1, r);
  }
}

int main() {
  int datas[10] = {78,13,9,23,45,14,35,65,56,79};
  quick_sort(datas, 0, 9);
  for(int i=0;i<10;++i)
    printf("%d ",datas[i]);

  getchar();
  return 0;
}
