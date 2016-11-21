#include <iostream>
#include <stdlib.h>
#include "uf.h"

using namespace std;

int main() {
  int p, q, N= 10;

  UF info(N);
  while(cin >> p >> q) {
    if (!info.find(p, q)) {
      info.unite(p, q);
      cout << "  " << p << " " << q << endl;
    }
  }
  info.output();
}
