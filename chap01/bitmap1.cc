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

  clock_t end = clock();
  cout << "time cost:" << (end - begin) / CLK_TCK << "\n";
  return 0;
}
