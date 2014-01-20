//  Example 3.2, page 43
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int x = 22;
  { int x = 44;
    cout << x << endl;    // prints 44
  }
  cout << x << endl;      // prints 22
  { int x = 66;
    cout << x << endl;    // prints 66
  }
  cout << x << endl;      // prints 22
}