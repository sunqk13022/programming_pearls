#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

using namespace std;

int cross_middle(int* a, int l, int m, int r) {
  int i, sum = 0, l_max = INT_MIN, r_max = INT_MIN;
  for (i = m; i >= l; --i) {
    sum += a[i];
    if (sum > l_max) l_max = sum;
  }
  sum = 0;
  for (i = m + 1; i <=r; ++i) {
    sum += a[i];
    if (sum > r_max) r_max = sum;
  }

  return l_max + r_max;
}

int max_subset(int* a, int l, int r) {
  if (l == r) return a[l];

  int m = l + (r-l)/2;
  int l_max = max_subset(a, l, m);
  int r_max = max_subset(a, m + 1, r);
  int c_max = cross_middle(a, l, m, r);
  if (l_max >= r_max && l_max >= c_max)
    return l_max;
  else if (r_max >= l_max && r_max >= c_max)
    return r_max;
  else
    return c_max;
}

int main(int argc, char* argv[]) {
  int a[] = {3, -1, 2, 5, -3, 4, -6, -7, 1, 8, -3, 5, 9};
  cout << "the maxsubset is:" << max_subset(a, 0, 12) << endl;
  return 0;
}
