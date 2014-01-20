//  Test driver for Date class
//  Problem 9.18, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::reverse()
{ Node* p;
  Node* temp;
  for (p = _dum; p->_next != _dum; p = p->_prev)
  { temp = p->_next;
    p->_next = p->_prev;
    p->_prev = temp;
  }
  temp = p->_next;
  p->_next = p->_prev;
  p->_prev = temp;
}

int main()
{ List x;
  x.push_back('A');
  x.push_back('B');
  x.push_back('C');
  x.push_back('D');
  x.push_back('E');
  print(x);
  x.reverse();
  print(x);
}
