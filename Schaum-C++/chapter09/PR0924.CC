//  Test driver for Date class
//  Problem 9.24, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void copy(char* cs, List& x)
{ for (List::Iterator it = x.begin(); it != x.end(); ++it)
    *cs++ = *it;
  *cs = 0;  // C-strings must be terminated with the null character
}

int main()
{ List x;
  append(x, "ABCDEFG");
  print(x);
  char cs[80];
  copy(cs, x);
  cout << "cs = " << cs << endl; 
}
