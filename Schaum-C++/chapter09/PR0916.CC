//  Test driver for Date class
//  Problem 9.16, page 206
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void List::swap(List& x)
{ Node* p = x._dum;
  x._dum = _dum;
  _dum = p;
  int temp = x._size;
  x._size = _size;
  _size = temp;
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
  List y(5, 'X');
  print(y);
  x.swap(y);
  print(x);
  print(y);
}
