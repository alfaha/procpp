//  Problem 10.11, page 235
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/list"

template <class T>
class Deque
{ public:
    typedef List::Iterator Iterator;
    int size() const { return _list.size(); }
    bool empty() const { return bool(_list.size() == 0); }
    T& front() const { return _list.front(); }
    T& back() const { return _list.back(); }
    void push_front(const T& t) { _list.push_front(t); }
    void push_back(const T& t) { _list.push_back(t); }
    void pop_front() { _list.pop_front(); }
    void pop_back() { _list.pop_back(); }
  private:
    List _list;
};

template <class T>
void print(const Deque<T>& x)
{ if (x.empty()) cout << "The deque is empty.\n";
  else cout << "front = " << x.front() << ", back = " << x.back()
            << ", size = " << x.size() << endl;
}

int main()
{ Deque<char> x;
  print(x);
  x.push_back('A');
  print(x);
  x.push_back('B');
  print(x);
  x.push_back('C');
  print(x);
  x.push_back('D');
  print(x);
  x.push_back('E');
  print(x);
  x.pop_front();
  print(x);
  x.pop_front();
  print(x);
  x.pop_back();
  print(x);
  x.push_front('A');
  print(x);
