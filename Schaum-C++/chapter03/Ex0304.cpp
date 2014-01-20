//  Example 3.4, page 44
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int x = 33;             // x is a global variable

int main()
{ int x = 66;
  cout << x << endl;    // prints 66
  cout << ::x << endl;  // prints 33
}