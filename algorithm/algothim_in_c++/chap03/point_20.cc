#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Point.h"

using namespace std;

struct node {
  point p;
  node* next;
  node(point pt, node* t) {
    p = pt;
    next = t;
  }
};

static node* **grid;
static int G,cnt = 0; static float d;

node*** malloc2d(int m, int n) {
  node*** t = new node**[m];
  for (int i = 0; i < m; ++i) {
    t[i] = new node*[n];
  }
  return t;
}

float randFloat() {
  return 1.0*rand()/RAND_MAX;
}

void gridinsert(float x, float y) {
  int X = x*G + 1;
  int Y = y*G + 1;
  point p;
  p.x = x;
  p.y = y;
  node* s, *t = new node(p, grid[X][Y]);

  for (int i = X - 1; i <= X + 1; ++i) {
    for (int j = Y - 1; j <= Y+ 1; ++j) {
      for (s = grid[i][j]; s != NULL; s=s->next) {
        if (distanceN(s->p, t->p) < d) ++cnt;
      }
    }
  }
  grid[X][Y] = t;
}

int main(int argc, char* argv[]) {
  int i, N = atoi(argv[1]);
  d = atof(argv[2]);
  G = 1/d;

  grid = malloc2d(G+2, G+2);

  for (i = 0; i < G+2; ++i) {
    for (int j = 0; j < G+2;++j) {
      grid[i][j] = 0;
    }
  }

  for (i = 0; i < N; ++i) {
    gridinsert(randFloat(), randFloat());
  }

  cout << cnt << " pairs with "  << d << endl;

  return 0;
}
