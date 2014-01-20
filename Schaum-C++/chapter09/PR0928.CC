//  Problem 9.28, page 208
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::split(List& x)
{ x.clear();
  x._size = _size - _size/2;
  _size /= 2;
  Node* p = _dum->_next;
  Node* q = x._dum;
  for (; p != _dum && p->_next != _dum; p = p->_next, q = q->_next)
  { q->_next = p->_next;
    p->_next->_prev = q;
    p->_next = q->_next->_next;
    p->_next->_prev = p;
    q->_next->_next = x._dum;
    x._dum->_prev = q->_next;  
  }
}

int main()
{ List x;
  append(x, "ABCDEFGHIJKLMNO");
  print(x);
  List y;
  x.split(y);
  print(x);
  print(y);
  y.split(x);
  print(x);
  print(y);
}
