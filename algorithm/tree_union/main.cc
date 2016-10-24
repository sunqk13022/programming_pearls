#include <stdio.h>
#include <iostream>

int f[1000] = {0}, n, m, k, sum = 0;

void init() {
  for (int i = 1; i <= n; ++i) {
    f[i] = i;
  }
}

int getf(int v) {
  if (f[v] == v) {
    return v;
  } else {
    f[v] = getf(f[v]);
    return f[v];
  }
}

void merge(int v, int u) {
  int t1, t2;
  t1 = getf(v);
  t2 = getf(u);
  // std::cout << "t1=" << t1 << ",t2=" << t2 << std::endl;
  if (t1 != t2) {
    f[t2] = t1;
  }
}

int main() {
  int i, x, y;
  scanf("%d %d", &n, &m);
  std::cout << "n=" << n << ",m=" << m << std::endl;

  init();
  for (i = 1; i <= m; ++i) {
    scanf("%d %d", &x, &y);
    merge(x, y);
  }

  for (i = 1; i <=n; ++i) {
    if (f[i] == i) {
      ++sum;
    }
  }

  getchar();
  getchar();
  printf("%d\n", sum);
  return 0;
}
