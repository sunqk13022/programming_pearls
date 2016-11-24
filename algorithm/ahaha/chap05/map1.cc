#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min_val = INT_MAX, book[101], n, e[101][101];

void dfs(int cur, int dis) {
  if (dis > min_val) return;
  if (cur == n) {
    if (dis < min_val) min_val = dis;
    return;
  }

  for (int j = 1; j <= n; ++j) {
    if (e[cur][j] != INT_MAX && book[j] == 0) {
      book[j] = 1;
      dfs(j, dis + e[cur][j]);
      book[j] = 0;
    }
  }
}

int main() {
  int i, j, m, a, b, c;
  scanf("%d %d", &n, &m);
  for (i = 1; i <=n; ++i) {
    for (j = 1; j <=n; ++j) {
      if (i == j) e[i][j] = 0;
      else e[i][j] = INT_MAX;
    }
  }

  for (i = 1; i <=m; ++i) {
    scanf("%d %d %d",  &a, &b, &c);
    e[a][b] = c;
  }

  book[1] = 1;
  dfs(1, 0);
  printf("%d", min_val);
  getchar();
  return 0;
}
