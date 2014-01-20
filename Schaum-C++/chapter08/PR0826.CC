//  Test driver for Date class
//  Problem 8.26, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

char* strcpy(char* s1, const char* s2);
// Replaces s1 with s2, and returns s1.

int main()
{ char s1[] = "1234567";
  cout << "s1 = \"" << s1 << "\"\n";
  char s2[] = "ABCDE";
  cout << "s2 = \"" << s2 << "\"\n";
  strcpy(s1, s2);
  cout << "s1 = \"" << s1 << "\"\n";
}

char* strcpy(char* s1, const char* s2)
{ while(*s2)
    *s1++ = *s2++;
  *s1 = 0;
  return s1;
}
