//  Test driver for Date class
//  Problem 8.28, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

char* strstr(const char* s1, const char* s2);
// Searches s1 for the substring s2. If found, its address in s1
// is returned. Otherwise, 0 is returned.

int main()
{ char s1[] = "ABCDEFG";
  cout << "s1 = \"" << s1 << "\"\n";
  char s2[] = "";
  cout << "s2 = \"" << s2 << "\"\n";
  cout << "\tstrstr(s1,s2) = " << strstr(s1,s2) << endl;
  char s3[] = "ABC";
  cout << "s3 = \"" << s3 << "\"\n";
  cout << "\tstrstr(s1,s3) = " << strstr(s1,s3) << endl;
  char s4[] = "ABX";
  cout << "s4 = \"" << s4 << "\"\n";
  cout << "\tstrstr(s1,s4) = " << strstr(s1,s4) << endl;
  char s5[] = "CDE";
  cout << "s5 = \"" << s5 << "\"\n";
  cout << "\tstrstr(s1,s5) = " << strstr(s1,s5) << endl;
  char s6[] = "CDX";
  cout << "s6 = \"" << s6 << "\"\n";
  cout << "\tstrstr(s1,s6) = " << strstr(s1,s6) << endl;
  char s7[] = "EFG";
  cout << "s7 = \"" << s7 << "\"\n";
  cout << "\tstrstr(s1,s7) = " << strstr(s1,s7) << endl;
  char s8[] = "FGH";
  cout << "s8 = \"" << s8 << "\"\n";
  cout << "\tstrstr(s1,s8) = " << strstr(s1,s8) << endl;
}

char* strstr(const char* s1, const char* s2)
{ if (*s2 == 0) return (char*)(s1);
  for (; *s1; s1++)
  { char* p = (char*)(s1);
    char* q = (char*)(s2);
    while (*p == *q && *p)
      if (*p++ == 0) return 0;
      else if (*q++ == 0) return (char*)(s1);
    if (*q++ == 0) return (char*)(s1);
  }
  return 0;
}
