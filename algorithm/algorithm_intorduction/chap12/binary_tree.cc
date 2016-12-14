#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;

template<class T>
class Node{
 public:
  T elem;
  Node<T>* parent;
  Node<T>* left;
  Node<T>* right;
};

template<class T>
class Tree {
 public:
  Tree();

  bool empty() const;

  void Insert(const T& e);

  void Remove(const T& e);

  Node<T>* Search(const T& e) const;

  T Minmum() const;
  T Minmum(Node<T>* p) const;

  T Maxmum() const;
  T Maxmum(Node<T>* p) const;

  Node<T>* GetRoot() const { return root;}

  void InorderWalk() const;

  T Successor(const T& e) const;

  T Predecessor(const T& e) const;

 private:
  Node<T>* root;
};

template<class T>
Tree<T>::Tree() {
  root = NULL;
}

template<class T>
bool Tree<T>::empty() const {
  return root == NULL;
}

template<class T>
void Tree<T>::Insert(const T& e) {
  Node<T>* p = NULL;
  Node<T>* pnode = root;
  if (!empty()) {
    while(pnode != NULL) {
      p = pnode;
      if (pnode->elem > e) {
        pnode = pnode->left;
      } else {
        pnode = pnode->right;
      }
    }
  }
  Node<T>* pnew = new Node<T>();
  pnew->elem = e;
  pnew->left = NULL;
  pnew->right = NULL;
  pnew->parent = p;

  if (empty()) {
    root = pnew;
  } else {
    if (pnew->elem < p->elem) {
      p->left = pnew;
    } else {
      p->right = pnew;
    }
  }
}

template<class T>
void Tree<T>::Remove(const T& e) {
  Node<T>* p = Search(e);
  if (p == NULL) return;
  Node<T>* parent = p->parent;

  if (p->right == NULL || p->left == NULL) {
    if (p->right != NULL) {
      if (parent->left == p) {
        parent->left = p->right;
      }
      if (parent->right == p) {
        parent->right = p->right;
      }
    }
    return;
  }
}

template<class T>
T Tree<T>::Successor(const T& e) const {
  Node<T>* p = Search(e);

  if (p == NULL) return T();
  if (p->right) {
    return Minmum(p->right);
  }

  Node<T>* parent = p->parent;
  while(parent != NULL && p == parent->right) {
    p = parent;
    parent = parent->parent;
  }
  if (parent) {
    return parent->elem;
  }

  return T();
}

template<class T>
T Tree<T>::Predecessor(const T& e) const {
  Node<T>* p = Search(e);
  if (p == NULL) return T();
  if (p->left) {
    return Maxmum(p->left);
  }
  Node<T>* parent = p->parent;
  while(parent != NULL && p == parent->left) {
    p = parent;
    parent = parent->parent;
  }
  if (parent) {
    return parent->elem;
  }
  return T();
}

template<class T>
Node<T>* Tree<T>::Search(const T& e) const {
  Node<T>* p = root;
  while(p != NULL) {
    if (p->elem == e) break;
    else if (p->elem > e) {
      p = p->left;
    } else {
      p = p->right;
    }
  }
  return p;
}

template<class T>
T Tree<T>::Minmum() const {
  Node<T>* p = root;
  while (p->left) {
    p = p->left;
  }
  return p->elem;
}

template<class T>
T Tree<T>::Minmum(Node<T>* parent) const {
  Node<T>* p = parent;
  while (p->left) {
    p = p->left;
  }
  return p->elem;
}


template<class T>
T Tree<T>::Maxmum() const {
  Node<T>* p = root;
  while(p->right) {
    p = p->right;
  }
  return p->elem;
}

template<class T>
T Tree<T>::Maxmum(Node<T>* parent) const {
  Node<T>* p = parent;
  while(p->right) {
    p = p->right;
  }
  return p->elem;
}



template<class T>
void Tree<T>::InorderWalk() const {
  if (empty()) return;

  stack<Node<T>*> s;
  Node<T>* node = root;

  while(!s.empty() || node != NULL) {
    if (node != NULL) {
      s.push(node);
      node = node->left;
    } else {
      node = s.top();
      s.pop();
      cout << node->elem << ",";
      node = node->right;
    }
  }
}

int main() {
  Tree<int> bstree;
  bstree.Insert(32);
  bstree.Insert(21);
  bstree.Insert(46);
  bstree.Insert(54);
  bstree.Insert(16);
  bstree.Insert(38);
  bstree.Insert(70);

  bstree.InorderWalk();

  cout << "\nmax value is:" << bstree.Maxmum();
  cout << "\nmin value is:" << bstree.Minmum();
  cout << "\nsearch value 16:" << bstree.Search(16);
  cout << "\nsearch value 17:" << bstree.Search(17);
  cout << "\nsuccessor value 16:" << bstree.Successor(16);
  cout << "\nsuccessor value 32:" << bstree.Successor(32);

  cout << "\nPredecessor value 16:" << bstree.Predecessor(16);
  cout << "\nPredecessor value 32:" << bstree.Predecessor(32);
  return 0;
}
