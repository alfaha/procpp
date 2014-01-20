//  Example 3.24, page 53
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n =4;
  while (1)
  { cout << 1.0/n << '\t';
    if (n == 9) break;
    ++n;
  }
  cout << '\n' << n << endl;
}
