//  Test driver for Date class
//  Problem 8.27, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int strcmp(const char* s1, const char* s2);
// Compares s1 and s2 lexicographically. Returns a negative
// integer is s1 < s2, a positive integer if s1 > s2, and 0
// if the two strings have the same value.

int main()
{ char s1[] = "ABCDE";
  cout << "s1 = \"" << s1 << "\"\n";
  char s2[] = "ABC";
  cout << "s2 = \"" << s2 << "\"\n";
  char s3[] = "ABX";
  cout << "s3 = \"" << s3 << "\"\n";
  char s4[] = "ABCDE";
  cout << "s4 = \"" << s4 << "\"\n";
  char s5[] = "ABCDEFG";
  cout << "s5 = \"" << s5 << "\"\n";
  cout << "strcmp(s1,s2) = " << strcmp(s1,s2) << endl;
  cout << "strcmp(s1,s3) = " << strcmp(s1,s3) << endl;
  cout << "strcmp(s1,s4) = " << strcmp(s1,s4) << endl;
  cout << "strcmp(s1,s5) = " << strcmp(s1,s5) << endl;
}

int strcmp(const char* s1, const char* s2)
{ for (; *s1 || *s2; s1++, s2++)
    if (*s1 == 0) return -1;
    else if (*s2 == 0) return 1;
    else if (*s1 < *s2) return -1;
    else if (*s1 > *s2) return 1;
  return 0;
}
