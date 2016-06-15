#include <iostream>
#include <bitset>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main() {
  char word[100];
  char sign[100];
  char oldsig[100];
  int i = 0;
  strcpy(oldsig, "");
  while (scanf("%s %s\n", sign, word) != EOF) {
    if (strcmp(oldsig, sign) !=0 && i != 0) {
      printf("\n");
    }
    strcpy(oldsig, sign);
    ++i;
    printf("%s ", word);
  }
 return 0;
}
