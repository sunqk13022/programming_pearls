#include <iostream>
#include <bitset>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int charcomp(const void* x, const void* y) {
  return *(char*)x - *(char*)y;
}

int main() {
  char word[100];
  char sign[100];
  while (scanf("%s\n", word) != EOF) {
    strcpy(sign, word);
    qsort(sign, strlen(sign), sizeof(char), charcomp);
    printf("%s %s\n", sign, word);
  }
 return 0;
}
