#include <stdio.h>
int a[51][51];
int book[51][51], n, m, flag = 0;

struct note {
  int x;
  int y;
}s[100];
int note_top = 0;

void dfs(int x, int y, int f) {
  if (x == n && y == m + 1) {
    flag = 1;
    for (int i = 1; i <= note_top; ++i) {
      printf("(%d,%d) ", s[i].x, s[i].y);
    }
    printf("\n");
    return;
  }

  if (x < 1 || x > n || y < 1 || y > m) {
    return;
  }

  if (book[x][y] == 1) {
    return;
  }
  book[x][y] = 1;
  note_top++;
  s[note_top].x = x;
  s[note_top].y = y;

  if (a[x][y] <= 5 && a[x][y] <= 6) {
    if (f == 1) {
      dfs(x, y + 1, f);
    }
    if (f == 2) {
      dfs(x + 1, y, f);
    }
    if (f == 3) {
      dfs(x, y - 1, f);
    }
    if (f == 4) {
      dfs(x - 1, y, f);
    }
  }

  if (a[x][y] >= 1 && a[x][y] <= 4) {
    if (f == 1) {
      dfs(x + 1, y, 2);
      dfs(x - 1, y, 4);
    }
    if (f == 2) {
      dfs(x, y + 1, 1);
      dfs(x, y - 1, 3);
    }
    if (f == 3) {
      dfs(x - 1, y, 4);
      dfs(x + 1, y, 2);
    }
    if (f == 4) {
      dfs(x, y + 1, 1);
      dfs(x, y - 1, 3);
    }
  }

  book[x][y] = 0;
  --note_top;
}

int main() {
  int i, j, num = 0;
  scanf("%d %d", &n, &m);
  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= m; ++j) {
      scanf("%d", &a[i][j]);
    }
  }

  dfs(1, 1, 1);
  if (flag == 0) {
    printf("impossible\n");
  } else {
    printf("finded\n");
  }
  getchar();
  return 0;
}
