//  Test driver for Date class
//  Problem 9.23, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void copy(List& x, List::Iterator& pos, const char* cs)
{ for (char* p=(char*)(cs); *p; p++)
  { x.insert(pos, *p);
    ++pos;
  }
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  List::Iterator it = x.begin();
  ++it;
  ++it;
  copy(x, it, "XYZ");
  print(x);
}
