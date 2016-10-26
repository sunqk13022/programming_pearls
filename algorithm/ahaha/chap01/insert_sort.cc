#include <stdio.h>
#include <iostream>

void insert_sort(int array[], int first, int last);

int main() {
  int a[5] = {5, 3, 5, 2, 8};
  insert_sort(a, 0, 5);
  for (int i = 0; i < 5; ++i) {
    std::cout << a[i] << " ";
  }

  getchar();
  getchar();
  return 0;
}

void insert_sort(int array[], int first, int last) {
  int temp;
  for (int i = first + 1; i < last; ++i) {
    temp = array[i];
    int j = i - 1;
    while(j >= 0 && array[j] > temp) {
      array[j+1] = array[j];
      --j;
    }

    if (j != i - 1) {
      array[j+1] = temp;
    }
  }
}
