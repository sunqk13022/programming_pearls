#include <iostream>

using namespace std;

template<class T>
class Deque {
 public:
  Deque(int m);
  ~Deque();
  void push_back(T t);
  void push_front(T t);
  T pop_back();
  T pop_front();

 private:
  T* arr;
  int max_count;
  int count;
  int head;
  int tail;
};

int main() {
  Deque<int> d(6);
  d.push_front(0);
  d.push_back(2);
  d.push_front(6);
  cout << d.pop_front() << endl;
  d.push_back(3);
  cout << d.pop_back() << endl;
}

template<class T>
Deque<T>::Deque(int m) {
  max_count = m;
  count = 0;
  head = 0;
  tail = m-1;
  arr = new T[m];
}

template<class T>
Deque<T>::~Deque() {
  delete [] arr;
}

template<class T>
void Deque<T>::push_front(T t) {
  if (count == max_count) {
    cout << "deque is full\n";
    return;
  }
  head = (head == 0) ? max_count - 1: head - 1;
  arr[head] = t;
  count++;
}

template<class T>
void Deque<T>::push_back(T t) {
  if (count == max_count) {
    cout << "dequeue is full\n";
    return;
  }
  tail = (tail == max_count - 1) ? 0: tail + 1;
  arr[tail] = t;
  count++;
}

template<class T>
T Deque<T>::pop_front() {
  if (count == 0) {
    cout << "deque is empty\n";
    return NULL;
  }
  int temp = head;
  head = (head == max_count) ? 0:head + 1;
  --count;
  return arr[temp];
}

template<class T>
T Deque<T>::pop_back() {
  if (count == 0) {
    cout << "deque is empty\n";
    return NULL;
  }
  int temp = tail;
  tail = (tail == 0) ? max_count - 1: tail - 1;
  --count;
  return arr[temp];
}
