//  Example 3.18, page 50
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char c = ' ';
  while (c != '\n')
  { cin.get(c);
    if (c >= 'a' && c <= 'z') c = char(c - 'a' + 'A');
    cout.put(c);
  }
  cout << endl;
}
