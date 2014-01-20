//  Example 6.2, page 114
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int caps(char* s)
{ int c=0;
  while (*s++)
    if (*s >= 'A' && *s <= 'Z') ++c;
  return c;
}

int main()
{ char s[] = "404 Oak Street, SW, Tulsa, OK, USA";
  cout << "caps(" << s << ") = " << caps(s) << endl;
}
