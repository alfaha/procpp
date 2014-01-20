//  Example 6.5, page 116
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char c;
  while (cin.get(c))
  { if (c >= 'a' && c <= 'z') c += 'A' - 'a';
    cout.put(c);
    if (c == '\n') break;
  }
}
