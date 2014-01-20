//  Example 6.2, page 114
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char s[20] = "ABCDEFG";  // s is a C-string
  cout << s << endl;       // C-strings can be output like simple types
  s[4] = '*';              // C-strings are arrays
  cout << s << endl;
  cin >> s;                // C-strings can be input like simple types
  cout << s << endl;
}
