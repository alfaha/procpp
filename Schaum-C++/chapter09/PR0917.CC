//  Test driver for Date class
//  Problem 9.17, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::splice(Iterator& pos, List& x)
{ Node* p = pos._p;
  for (Iterator itx = x.begin(); !!itx; ++itx)
    p->_prev = p->_prev->_next = new Node(*itx, p->_prev, p);
}

int main()
{ List x;
  x.push_back('A');
  x.push_back('B');
  x.push_back('C');
  x.push_back('D');
  x.push_back('E');
  print(x);
  List y(4, 'X');
  print(y);
  List::Iterator it = x.begin();
  ++it;
  ++it;
  x.splice(it, y);
  print(x);
  print(y);
}
