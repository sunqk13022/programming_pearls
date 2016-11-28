#include <stdio.h>
#include <limits.h>

struct note {
  int x;
  int s;
};

int main() {
  struct note que[2501];
  int e[51][51];
  int book[51] = {0};
  int head, tail;
  int cur, i, j, n, m, a, b, start, end, flag = 0;
  scanf("%d %d %d %d", &n, &m, &start, &end);

  for (i = 1; i <=n; ++i) {
    for (j = 1; j <=n; ++j) {
      if (i == j) e[i][j] = 0;
      else e[i][j] = INT_MAX;
    }
  }

  for (i = 1; i <=m; ++i) {
    scanf("%d %d", &a, &b);
    e[a][b] = 1;
    e[b][a] = 1;
  }

  head = 1;
  tail = 1;

  que[tail].x =start;
  que[tail].s = 0;
  ++tail;
  book[start] = 1;

  while(head < tail) {
    cur = que[head].x;
    for (j = 1; j <=n; ++j) {
      if (e[j][cur] != INT_MAX && book[j] == 0) {
        book[j] = 1;
        que[tail].x = j;
        que[tail].s = que[head].s + 1;
        ++tail;
      }
      if (que[tail -1].x == end) {
        flag = 1;
        break;
      }
    }

    if (flag == 1)
      break;
    ++head;
  }

  printf("%d\n", que[tail - 1].s);
  getchar();
  return 0;
}
