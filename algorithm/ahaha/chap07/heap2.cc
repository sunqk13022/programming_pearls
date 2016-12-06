#include <stdio.h>
int h[101];
int n;

void s(int x, int y) {
  int t = h[x];
  h[x] = h[y];
  h[y] = t;
}

void siftdown(int i) {
  int t, flag = 0;
  while(i*2 <=n && flag == 0) {
    if (h[i] < h[i*2])
      t = i*2;
    else
      t = i;
    if (i*2+1 <=n) {
      if (h[t] < h[i*2+1]) {
        t = i*2 + 1;
      }
    }

    if (t != i) {
      s(t,i);
      i = t;
    } else {
      flag = 1;
    }
  }
}

void create() {
  for (int i = n/2; i >=1; --i) {
    siftdown(i);
  }
}

void heapsort() {
  while(n > 1) {
    s(1,n);
    --n;
    siftdown(1);
  }
}

int main() {
  int i, num;
  scanf("%d", &num);
  for (i = 1; i <= num; ++i) {
    scanf("%d", &h[i]);
  }
  n = num;
  create();
  heapsort();

  for (i = 1; i <= num; ++i) {
    printf("%d ", h[i]);
  }
  printf("\n");
  return 0;
}
