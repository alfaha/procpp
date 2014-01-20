//  Example 4.9, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

void f2(const int x)   // x is a const value parameter
{ cout << "The value of the const parameter x is " << x << endl;
}

int main()
{ f2(44);
  int u = 55;
  f2(u);
  int v = 33;
  f2(2*u - 3*v);
  return 0;
}
