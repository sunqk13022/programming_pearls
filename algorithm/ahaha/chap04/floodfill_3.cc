#include <stdio.h>

int a[51][51];
int book[51][51], n, m, sum;

void dfs(int x, int y, int color) {
  int next[4][2] = {{0, 1},
                    {1, 0},
                    {0, -1},
                    {-1, 0}};
  int k, tx, ty;

  a[x][y] = color;

  for (k = 0; k <= 3; ++k) {
    tx = x + next[k][0];
    ty = y + next[k][1];

    if (tx < 1 || tx > n || ty < 1 || ty > n)
      continue;
    if (a[tx][ty] > 0 && book[tx][ty] == 0) {
      ++sum;
      book[tx][ty] = 1;
      dfs(tx, ty, color);
    }
  }
}

int main() {
  int i, j, num = 0;
  scanf("%d %d %d %d", &n, &m);
  for (i = 1; i <=n; ++i) {
    for (j = 1; j <=n;++j) {
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 1; i <=n; ++i) {
    for (j = 1; j <=m; ++j) {
      --num;
      book[i][j] = 1;
      dfs(i, j, num);
    }
  }


  printf("%d\n", -num);
  getchar();
  return 0;
}
