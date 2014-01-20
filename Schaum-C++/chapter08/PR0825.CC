//  Test driver for Date class
//  Problem 8.25, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

char* strcat(char* s1, const char* s2);
// Appends the C-string s2 to the C-string s1, and returns s1.

int main()
{ char s1[] = "1234567";
  cout << "s1 = \"" << s1 << "\"\n";
  char s2[] = "ABCDE";
  cout << "s2 = \"" << s2 << "\"\n";
  strcat(s1, s2);
  cout << "s1 = \"" << s1 << "\"\n";
}

char* strcat(char* s1, const char* s2)
{ char* p;
  for (p=s1; *p; p++)
    ;
  for (; *s2; p++, s2++)
    *p = *s2;
  *p = *s2;
  return s1;
}
