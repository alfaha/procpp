//  Test driver for Date class
//  Problem 9.15, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::erase(Iterator& pos1, Iterator& pos2)
{ if (!pos1 || !pos2) return;
  Node* p_next = pos1._p->_next;
  for (Node* p = pos1._p; p != pos2._p; p = p_next, p_next = p->_next)
  { p->_prev->_next = p->_next;
    p->_next->_prev = p->_prev;
    delete p;
    --_size;
  }
}

int main()
{ List x;
  x.push_back('A');
  x.push_back('B');
  x.push_back('C');
  x.push_back('D');
  x.push_back('E');
  x.push_back('F');
  print(x);
  List::Iterator it = x.begin();
  ++it;
  ++it;
  cout << "*it = " << *it << endl;
  List::Iterator jt = x.end();
  --jt;
  --jt;
  cout << "*jt = " << *jt << endl;
  x.erase(it, jt);
  print(x);
}
