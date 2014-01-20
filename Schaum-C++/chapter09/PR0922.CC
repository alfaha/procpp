//  Test driver for Date class
//  Problem 9.22, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void append(List& x, const char* cs)
{ for (char* p=(char*)(cs); *p; p++)
    x.push_back(*p);
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
}
