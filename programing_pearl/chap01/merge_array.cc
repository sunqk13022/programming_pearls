#include <stdio.h>
#include <stdlib.h>

void merge_array(int a[], int first, int mid, int last, int temp[]) {
  int i = first, j = mid + 1;
  int m = mid, n = last;
  int k = 0;
  while (i <= m && j <= n) {
    if (a[i] <= a[j]) {
      temp[k++] = a[i++];
    } else {
      temp[k++] = a[j++];
    }
  }

  while (i <= m) {
    temp[k++] = a[i++];
  }
  while (j <= n) {
    temp[k++] = a[j++];
  }
  for (i = 0; i < k; ++i) {
    a[first + i] = temp[i];
  }
}

void merge_sort(int a[], int first, int last, int temp[]) {
  if (first < last) {
    int mid = (first + last) / 2;
    merge_sort(a, first, mid, temp);
    merge_sort(a, mid + 1, last, temp);
    merge_array(a, first, mid, last, temp);
  }
}

bool MergeSort(int a[], int n) {
  int *p = new int[n];
  if (p == NULL) {
    return false;
  }
  merge_sort(a, 0, n - 1, p);
  delete[] p;
  return true;
}

int main() {
  printf("hello merge array\n");
  int a[5] = {9, 3, 5, 2, 1};
  MergeSort(a, 5);
  for (int i = 0; i < 5; ++i) {
    printf("%d  ", a[i]);
  }

  return 0;
}
