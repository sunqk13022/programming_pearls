#include <stdio.h>
#include <iostream>

char* a;
int i;

int eval() {
  int x = 0;
  while (a[i] == ' ') ++i;
  if (a[i] == '+') {
    ++i;
    return eval() + eval();
  }
  if (a[i] == '*') {
    ++i;
    return eval() * eval();
  }
  while ((a[i] >= '0') && (a[i] <= '9')) {
    x = 10*x + a[i++] - '0';
  }
  return x;
}

int main() {
  a = "*+7**4 6 + 8 9 5";
  i = 0;
  std::cout << "*+7**4 6 + 8 9 5 + =" << eval() << std::endl;
  return 0;
}
