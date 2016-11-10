#include <stdio.h>
#include <string.h>

int main() {
  char a[20][21];
  int i, j, sum, ma = 0, p, q, x, y, n, m;
  scanf("%d %d", &n, &m);

  for (i = 0; i <= n-1; ++i) {
    scanf("%s", a[i]);
  }

  for (i = 0; i <= n - 1; ++i) {
    for (j = 0; j <= m - 1; ++j) {
      if (a[i][j] == '.') {
        sum = 0;
        // up
        x = i; y = j;
        while(a[x][y] != '#') {
          if (a[x][y] == 'G') ++sum;
          --x;
        }
        // down
        x = i; y = j;
        while(a[x][y] != '#') {
          if (a[x][y] == 'G') ++sum;
          ++x;
        }
        // left
        x = i; y = j;
        while(a[x][y] != '#') {
          if (a[x][y] == 'G') ++sum;
          --y;
        }
        // right
        x = i; y = j;
        while(a[x][y] != '#') {
          if (a[x][y] == 'G') ++sum;
          ++y;
        }

        if (sum > ma) {
          ma = sum;
          p = i;
          q = j;
        }
      }
    }
  }
  printf("put bom at (%d, %d),max = %d", p, q, ma);
  getchar();
}
