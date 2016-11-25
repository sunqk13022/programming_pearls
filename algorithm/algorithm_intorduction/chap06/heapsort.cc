#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define PARENT(i) (i/2)
#define LEFT(i) (i*2)
#define RIGHT(i) (i*2 + 1)

void max_heapify(int* datas, int len, int i) {
  int left = LEFT(i);
  int right = RIGHT(i);
  int largest;

  if (left <= len && datas[left] > datas[i]) {
    largest = left;
  } else {
    largest = i;
  }

  if (right <= len && datas[right] > datas[largest]) {
    largest = right;
  }

  if (largest != i) {
    int temp = datas[i];
    datas[i] = datas[largest];
    datas[largest] = temp;
    max_heapify(datas, len, largest);
  }
}

void build_max_heap(int* datas, int len) {
  for (int i = len/2; i > 0; --i) {
    max_heapify(datas, len, i);
  }
}

void heap_sort(int* datas, int len) {
  build_max_heap(datas, len);
  for (int i = len; i > 1; --i) {
    int temp = datas[1];
    datas[1] = datas[i];
    datas[i] = temp;
    max_heapify(datas, i-1, 1);
  }
}

int main() {
  int datas[11] = {INT_MIN, 5, 3, 17, 10, 84, 19, 6, 22, 9, 35};
  heap_sort(datas, 10);
  for (int i = 1; i < 11; ++i) {
    printf("%d ", datas[i]);
  }
  printf("\n");
  return 0;
}
