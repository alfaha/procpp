//  Test driver for Date class
//  Problem 9.14, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::insert(Iterator& pos, int n, T& t)  //  <----  Problem 9.14
{ Node* p = pos._p;
  for (int i=0; i<n; i++)
    p->_prev = p->_prev->_next = new Node(t, p->_prev, p);
}

int main()
{ List x(4, 'J');
  cout << "Testing list x:\n";
  print(x);
  List::Iterator it = x.begin();
  ++it;
  ++it;
  x.insert(it, 3, 'K');
  cout << "Testing list x:\n";
  print(x);
}
