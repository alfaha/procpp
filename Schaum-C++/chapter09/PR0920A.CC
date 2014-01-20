//  Test driver for Date class
//  Problem 9.20, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::unique()
{ if (_size < 2) return;
  T pt;
  Node* q;
  Node* q_next;
  for (Node* p=_dum->_next; p->_next != _dum; p = p->_next)
  { pt = p->_data;
    q = p->_next;
    q_next = q->_next;
    for (; q != _dum && q->_data == pt; q = q_next, q_next = q->_next)
    { q->_prev->_next = q->_next;
      q->_next->_prev = q->_prev;
      delete q;
    }
  }
}

int main()
{ List x;
  x.push_back('B');
  x.push_back('C');
  x.push_back('C');
  x.push_back('C');
  x.push_back('C');
  x.push_back('C');
  x.push_back('D');
  x.push_back('D');
  x.push_back('A');
  x.push_back('A');
  x.push_back('A');
  x.push_back('D');
  x.push_back('D');
  x.push_back('D');
  x.push_back('D');
  x.push_back('D');
  x.push_back('C');
  x.push_back('C');
  x.push_back('C');
  x.push_back('B');
  x.push_back('B');
  x.push_back('A');
  x.push_back('A');
  x.push_back('A');
  x.push_back('A');
  print(x);
  x.sort();
  x.unique();
  print(x);
}
