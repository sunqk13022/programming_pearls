#include <iostream>
#include <bitset>
#include <time.h>

using namespace std;

const int max_each_scan = 5 * 1000 * 1000;

int main() {
  clock_t begin = clock();

  bitset<max_each_scan> bit_map;
  bit_map.reset();

  FILE* fp_unsort_file = fopen("data.txt", "r");
  int num;
  while(fscanf(fp_unsort_file, "%d\n", &num) != EOF) {
    if (num < max_each_scan) {
      bit_map.set(num, 1);
    }
  }

  FILE* fp_sort_file = fopen("sort.txt", "w");
  for (int i = 0; i < max_each_scan; ++i) {
    if (bit_map[i] == 1) {
      fprintf(fp_sort_file, "%d\n", i);
    }
  }

  int errnum = fseek(fp_unsort_file, 0, SEEK_SET);
  if (errnum) {
    printf("fseek error\n");
    return 1;
  }

  bit_map.reset();
  while(fscanf(fp_unsort_file, "%d\n", &num) != EOF) {
    if (num >= max_each_scan) {
      bit_map.set(num - max_each_scan, 1);
    }
  }

  for (int i = 0; i < max_each_scan; ++i) {
    if (bit_map[i] == 1) {
      fprintf(fp_sort_file, "%d\n", i + max_each_scan);
    }
  }

  clock_t end = clock();
  cout << "time cost:" << (end - begin) / CLK_TCK << "\n";
  fclose(fp_sort_file);
  fclose(fp_unsort_file);
  return 0;
}
