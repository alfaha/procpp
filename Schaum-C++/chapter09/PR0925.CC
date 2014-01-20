//  Test driver for Date class
//  Problem 9.25, page 207
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include "pr09xx.List.h"

void copy(char* cs, List& x, List::Iterator& pos1,
                    List::Iterator& pos2)
{ for (List::Iterator it = pos1; it != pos2; ++it)
    *cs++ = *it;
  *cs = 0;  // C-strings must be terminated with the null character
}

int main()
{ List x;
  append(x, "ABCDEFGHIJKLMNOP");
  print(x);
  char cs[80];
  List::Iterator it = x.begin();
  ++it;
  ++it;
  List::Iterator jt = x.end();
  --jt;
  --jt;
  copy(cs, x, it, jt);
  cout << "cs = " << cs << endl; 
}
