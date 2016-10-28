#include <stdio.h>
#include <iostream>

void bubble_sort(int a[], int n) {
  int temp;
  for (int i = 0; i < n -1; ++i) {
    for (int j = 0; j < n - i - i; ++j) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main() {
  int a[5] = {5, 3, 5, 2, 8};
  bubble_sort(a, 5);
  for (int i = 0; i < 5; ++i) {
    std::cout << a[i] << " ";
  }

  getchar();
  return 0;
}

