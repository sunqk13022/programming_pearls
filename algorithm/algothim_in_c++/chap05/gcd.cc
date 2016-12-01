#include <stdio.h>
#include <iostream>

int gcd(int m, int n) {
  if (n == 0) return m;
  return gcd(n, m%n);
}

int main() {
  std::cout << "gcd(314159,271828):" << gcd(314159,271828)  << std::endl;
  return 0;
}
