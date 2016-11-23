#include <iostream>
#include <stdlib.h>
#include "poly.h"

using namespace std;

int main() {
  int N = 2;
  float p = 0.5;
  cout << "Binomial coefficients\n";
  POLY<int> x(1,1), one(1, 0), t = x + one, y = t;
  for (int i = 0; i < N; ++i) {
    y = y * t;
    // cout << y << endl;
  }
  cout << y.eval(p) << endl;
  return 0;
}
