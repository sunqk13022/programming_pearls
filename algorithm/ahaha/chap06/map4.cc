#include <stdio.h>
#include <limits.h>
#include <iostream>

using namespace std;

int main() {
  int n, m, i, j, k;
  int u[8], v[8], w[8];
  int first[6], next[8];
  int dis[6] = {0}, book[6] = {0};
  int que[101]={0}, head = 1, tail = 1;
  scanf("%d %d", &n, &m);

  for (i = 1; i <= n; ++i) {
    dis[i] = INT_MAX;
  }
  dis[1] = 0;

  for (i = 1; i <= n; ++i) book[i] = 0;
  for(i = 1; i <=n; ++i) first[i] = -1;

  for(i = 1; i <=m; ++i) {
    scanf("%d %d %d", &u[i], &v[i], &w[i]);
    next[i] = first[u[i]];
    first[u[i]] = i;
  }

  que[tail] = 1;
  ++tail;
  book[1] = 1;

  while (head < tail) {
    k = first[que[head]];
    while (k != -1) {
      if (dis[u[k]] < INT_MAX && dis[v[k]] > dis[u[k]] + w[k]) {
        dis[v[k]] = dis[u[k]] + w[k];
        if (book[v[k]] == 0) {
          book[v[k]] = 1;
          que[tail++] = v[k];
        }
      }
      k = next[k];
    }
    book[que[head]] = 0;
    ++head;
  }

  for (i = 1; i <=n; ++i) {
    printf("%d ", dis[i]);
  }
  cout << endl;
  return 0;
}
