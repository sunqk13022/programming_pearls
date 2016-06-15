#include <iostream>
#include <bitset>
#include <time.h>
#include <math.h>

using namespace std;

const int size = 10 * 1000 * 1000;
int num[size+1];

int main() {
  for (int i = 1; i <= size; ++i) {
    num[i] = i;
  }
  srand((unsigned)time(NULL));
  int i, j;
  printf("rand\n");
  for (int n = 0; n < size; ++n) {
    i = abs((rand() * RAND_MAX + rand())) % size;
    j = abs((rand() * RAND_MAX + rand())) % size;
    //printf("i = %d, j = %d\n", i , j);
    swap(num[i], num[j]);
  }

  printf("write\n");
  FILE* fp = fopen("data.txt", "w");
  for (int i = 1; i < size; ++i) {
    fprintf(fp, "%d\n" , num[i]);
  }
  fclose(fp);
  return 0;
}
