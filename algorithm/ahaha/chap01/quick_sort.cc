#include <stdio.h>
#include <iostream>

int a[101], n;

void quick_sort(int left, int right) {
  int i, j, t, temp;
  if (left > right) {
    return;
  }

  temp = a[left];
  i = left;
  j = right;
  while (i != j) {
    while (a[j] >= temp && i < j) {
      --j;
    }
    while (a[i] <= temp && i < j) {
      ++i;
    }

    if (i < j) {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }

  a[left] = a[i];
  a[i] = temp;

  quick_sort(left, i - 1);
  quick_sort(i + 1, right);
}

int main() {
  int i, j, t;
  scanf("%d", &n);
  for (i = 1; i <= n; ++i) {
    scanf("%d", &a[i]);
  }
  quick_sort(1, n);
  for (i = 1; i <= n; ++i) {
    printf("%d ", a[i]);
  }
  getchar();
  return 0;
}

