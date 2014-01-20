//  Problem 9.27, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void halve(List& x, List& y)
{ y.clear();
  int n = x.size();
  n -= n/2;
  char c;
  for (int i=0; i<n; i++)  // locate the middle of x:
  { c = x.back();
    x.pop_back();
    y.push_front(c);
  }
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List y;
  halve(x, y);
  print(x);
  print(y);
  halve(y, x);
  print(x);
  print(y);
}
