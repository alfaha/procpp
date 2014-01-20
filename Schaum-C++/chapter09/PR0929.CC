//  Problem 9.29, page 208
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void split(List& x, List& y)
{ y.clear();
  char c;
  for (List::Iterator it = x.begin(); it != x.end();)
  { ++it;
    if (it == x.end()) return;
    c = *it;
    y.push_back(c);
    x.erase(it);
  }
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List y;
  split(x, y);
  print(x);
  print(y);
  split(y, x);
  print(x);
  print(y);
}
