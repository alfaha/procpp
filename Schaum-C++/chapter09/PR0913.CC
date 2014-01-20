//  Test driver for Date class
//  Problem 9.13, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

List::List(int n, T& t) : _size(n)
{ _dum = new Node();
  for (int i=0; i<n; i++)
    _dum->_next = _dum->_next->_prev = new Node(t, _dum, _dum->_next);
}

int main()
{ List x(4, 'J');
  cout << "Testing list x:\n";
  print(x);
}
