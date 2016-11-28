#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void count_sort(int* a, int* b, int k, int len) {
  int* c = new int[k+1];
  for (int i = 0; i <= k; ++i) {
    c[i] = 0;
  }
  for (int j = 0; j <len; ++j) {
    c[a[j]] += 1;
  }

  for (int i = 1; i <=k; ++i) {
    c[i] = c[i-1] + c[i];
  }

  for (int j = len -1; j >=0; --j) {
    b[c[a[j]]] = a[j];
    c[a[j]] -= 1;
  }

  delete [] c;
}

int main() {
  int datas[10] = {78,13,9,23,45,14,35,65,56,79};
  int b[10] = {0};
  count_sort(datas, b, 100, 10);
  for(int i=0;i<10;++i)
    printf("%d ",b[i]);

  getchar();
  return 0;
}
