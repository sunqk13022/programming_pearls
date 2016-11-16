#include <stdio.h>
#include <string.h>

int a[10], book[10], n;

void dfs(int step) {
  if (step == n + 1) {
    for (int i = 1; i <=n; ++i) {
      printf("%d", a[i]);
    }
    printf("\n");
    return;
  }

  for (int i = 1; i <= n; ++i) {
    if (book[i] == 0) {
      a[step] = i;
      book[i] = 1;
      dfs(step + 1);
      book[i] = 0;
    }
  }
}

int main() {
  scanf("%d", &n);
  dfs(1);
  getchar();
}