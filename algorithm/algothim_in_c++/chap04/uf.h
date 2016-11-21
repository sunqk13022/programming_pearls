#ifndef CHAP04_UF_H_
#define CHAP04_UF_H_

#include <iostream>

class UF {
 public:
  UF(int N) {
    id = new int[N];
    sz = new int[N];
    for (int i = 0; i < N; ++i) {
      id[i] = i;
      sz[i] = 1;
    }

    NN = N;
  }

  int find(int p, int q) {
    return find(p) == find(q);
  }

  void output() {
    for (int i = 0; i < NN; ++i) {
      std::cout << "id=" << i << ", parentid= " << id[i]
        << ",size=" << sz[i] << std::endl;
    }
  }

  void unite(int p, int q) {
    int i = find(p);
    int j = find(q);
    if (i ==j) return;
    if (sz[i] < sz[j]) {
      id[i] = j;
      sz[j] += sz[i];
    } else {
      id[j] = i;
      sz[i] += sz[j];
    }
  }

 private:
  int find(int x) {
    while(x != id[x]) {
      x = id[x];
    }
    return x;
  }
 private:
  int *id;
  int *sz;
  int NN;
};


#endif // CHAP04_UF_H_
