//  Example 4.15, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int& f(int& x)
{ cout << "x = " << x << endl;
  x *= 3;
  cout << "x = " << x << endl;
  return x;
}

int main()
{ int m = 11;
  cout << "m = " << m << endl;
  int n = f(m);
  cout << "m = " << m << endl;
  cout << "n = " << n << endl;
  f(n) = 44;
  cout << "n = " << n << endl;
}
