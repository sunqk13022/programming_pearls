#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

using namespace std;

int max_subset(int* a, int len) {
  int summax = INT_MIN;
  int temp = 0;
  for (int i = 0; i < len; ++i) {
    temp += a[i];
    if (temp > summax) summax = temp;
    if (temp < 0) temp = 0;
  }

  return summax;
}

int main(int argc, char* argv[]) {
  int a[] = {3, -1, 2, 5, -3, 4, -6, -7, 1, 8, -3, 5, 9};
  cout << "the maxsubset is:" << max_subset(a, 13) << endl;
  return 0;
}
