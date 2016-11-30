#include <stdio.h>
#include <iostream>

void swap(int* a, int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

int partition(int* a, int p, int r) {
  int x = a[r];
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (a[j] <= x) {
      ++i;
      swap(a, i, j);
    }
  }
  ++i;
  swap(a, i, r);
  return i;
}

int select(int* a, int p, int r, int k) {
  if (p == r) {
    return a[p];
  }
  int mid = partition(a, p, r);
  int num = mid - p + 1;
  // std::cout << " select,mid:" << mid <<",num:" << num << std::endl;
  if (num == k) {
    return a[mid];
  } else if (num < k) {
    return select(a, mid + 1, r, k - num);
  } else {
    return select(a, p, mid - 1, k);
  }
}

int main() {
  int a[8] = {4,2,0,3,1,7,5,6};
  std::cout << "the fouth:" << select(a, 0, 7, 4);
  std::cout << std::endl;
  return 0;
}
