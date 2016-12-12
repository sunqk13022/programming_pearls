#include <stdio.h>
#include <limits.h>
int main() {
  int n, m, i, j, k, min_ele, t1, t2, t3;
  int e[7][7], dis[7], book[7] = {0};
  int count = 0, sum = 0;

  scanf("%d %d", &n, &m);
  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= n; ++j) {
      if (i == j) e[i][j] = 0;
      else e[i][j] = INT_MAX;
    }
  }

  for (i = 1; i <=m; ++i) {
    scanf("%d %d %d", &t1, &t2, &t3);
    e[t1][t2] = t3;
    e[t2][t1] = t3;
  }

  for (i = 1; i <=n; ++i) {
    dis[i] = e[1][i];
  }

  book[1] = 1;
  ++count;
  while (count < n) {
    min_ele = INT_MAX;
    for (i = 1; i <=n; ++i) {
      if (book[i] == 0 && dis[i] < min_ele) {
        min_ele = dis[i];
        j = i;
      }
    }

    book[j] = 1;
    ++count;
    sum += dis[j];

    for (k = 1; k <=n; ++k) {
      if (book[k] == 0&& dis[k] > e[j][k]) {
        dis[k] = e[j][k];
      }
    }
  }

  printf("%d", sum);
  getchar();
  return 0;
}
