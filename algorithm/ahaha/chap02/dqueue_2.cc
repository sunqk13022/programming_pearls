#include <stdio.h>

struct queue {
  int data[100];
  int head;
  int tail;
};

int main() {
  struct queue q;
  q.head = 1;
  q.tail = 10;
  q.data = {0, 6, 3, 1, 7, 5, 8, 9, 2, 4};

  while (q.head < q.tail) {
    printf("%d ", q.data[q.head]);
    q.head ++;

    q.data[q.tail] = q.data[q.head];
    q.tail++;
    q.head++;
  }

  getchar();
}
