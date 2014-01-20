//  Test driver for Date class
//  Problem 8.24, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int strlen(const char* s);
// Returns the number of non-null characters in the C-string s.

int main()
{ char s[] = "1234567";
  cout << "strlen(\"" << s << "\") = " << strlen(s) << endl;
}

int strlen(const char* s)
{ for (const char* p=s; *p; p++)
    ;
  return int(p - s);
}
