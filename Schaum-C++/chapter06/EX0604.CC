//  Example 6.4, page 115
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char s1[] = "Beethoven";
  char s2[] = "Bartok";
  cout << "s1 = [" << s1 << "] , strlen(s1) = " << strlen(s1) << endl;
  cout << "s2 = [" << s2 << "] , strlen(s2) = " << strlen(s2) << endl;
  strcpy(s1, s2);
  cout << "s1 = [" << s1 << "] , strlen(s1) = " << strlen(s1) << endl;
  cout << "s2 = [" << s2 << "] , strlen(s2) = " << strlen(s2) << endl;
}
