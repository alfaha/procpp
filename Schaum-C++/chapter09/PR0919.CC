//  Test driver for Date class
//  Problem 9.19, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::sort()
// implements the Bubble Sort
{ if (_size < 2) return;
  T temp;
  for (Node* end=_dum; end->_prev != _dum->_next; end = end->_prev)
  { Node* q = _dum->_next->_next;
    for (Node* p=_dum->_next; q != end; p = q, q = q->_next)
    { if (p->_data > q->_data)
      { temp = p->_data;
        p->_data = q->_data;
        q->_data = temp;
      }
    }
  }
}

int main()
{ List x;
  x.push_back('D');
  x.push_back('F');
  x.push_back('A');
  x.push_back('E');
  x.push_back('C');
  x.push_back('B');
  print(x);
  x.sort();
  print(x);
}
