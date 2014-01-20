//  Problem 9.26, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::halve(List& x)
{ x.clear();
  x._size = _size - _size/2;
  _size /= 2;
  Node* p = _dum;
  for (int i=0; i<=_size; i++)  // find middle node:
    p = p->_next;
  p->_prev->_next = _dum;
  _dum->_prev->_next = x._dum;
  x._dum->_prev = _dum->_prev;
  _dum->_prev = p->_prev;
  p->_prev = x._dum;
  x._dum->_next = p;
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List y;
  x.halve(y);
  print(x);
  print(y);
  y.halve(x);
  print(x);
  print(y);
}
