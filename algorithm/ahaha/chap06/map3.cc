#include <stdio.h>
#include <limits.h>
#include <iostream>

using namespace std;

int main() {
  int dis[10], i, k, n, m, u[10], v[10], w[10];
  scanf("%d %d", &n, &m);

  for (i = 1; i <= m; ++i) {
    scanf("%d %d %d", &u[i], &v[i], &w[i]);
  }
  for (i = 1; i <= n; ++i) {
    dis[i] = INT_MAX;
  }
  dis[1] = 0;

  for (k = 1; k <= n -1; ++k) {
    for (i = 1; i<=m; ++i) {
      // cout << "dis i:" << dis[u[i]] << endl;
      if (dis[u[i]] < INT_MAX &&
          dis[v[i]] > dis[u[i]] + w[i]) {
        dis[v[i]] = dis[u[i]] + w[i];
      }
    }
  }

  for (i = 1; i <= n; ++i) {
    printf("%d ", dis[i]);
  }
  printf("\n");
  getchar();
  return 0;
}
