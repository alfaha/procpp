//  Example 6.3, page 115
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char* s1 = "pear";
  char* s2 = "peach";
  int cmp = strcmp(s1, s2);
  cout << "cmp = " << cmp << endl;
  if (cmp < 0) cout << s1 << " < " << s2 << endl;
  else if (cmp == 0) cout << s1 << " == " << s2 << endl;
  else cout << s1 << " > " << s2 << endl;
}
