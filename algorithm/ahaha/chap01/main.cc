#include <stdio.h>
#include <iostream>

int main() {
  int a[11], i, j, t;
  for (i = 0; i <= 10; ++i) {
    a[i] = 0;
  }

  for (i = 1; i <= 5; ++i) {
    scanf("%d", &t);
    a[t]++;
  }
  for (i = 0; i <= 10; ++i) {
    for (j = 1; j <= a[i]; ++j) {
      std::cout << i << " ";
    }
  }
  getchar();
  getchar();
  return 0;
}
