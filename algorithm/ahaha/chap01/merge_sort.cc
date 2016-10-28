#include <stdio.h>
#include <iostream>

void merge(int source[], int temp[], int start, int mid, int last) {
  int i = start;
  int j = mid + 1;
  int k = start;
  while (i != mid + 1 && j != last + 1) {
    if (source[i] > source[j]) {
      temp[k++] = source[j++];
    } else {
      temp[k++] = source[i++];
    }
  }

  while (i != mid + 1) {
    temp[k++] = source[i++];
  }
  while (j != last + 1) {
    temp[k++] = source[j++];
  }
  for (i = start; i <= last; ++i) {
    source[i] = temp[i];
  }
}

void merge_sort(int source[], int temp[], int start, int last) {
  if (start < last) {
    int mid = (start + last) / 2;
    merge_sort(source, temp, start, mid);
    merge_sort(source, temp, mid+1, last);
    merge(source, temp, start, mid, last);
  }
}

int main() {
  int a[5] = {5, 3, 5, 2, 8};
  int b[5];
  merge_sort(a, b, 0, 4);
  for (int i = 0; i < 5; ++i) {
    std::cout << a[i] << " ";
  }

  getchar();
  getchar();
  return 0;
}

