//  Example 3.26, page 53
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ double x = 2.01;
  int n = 4;
  double y = 1.0;
  for (int i=0; i<n; i++)
    // INVARIANT: y == x*x*...*x (i times)
    y *= x;
  cout << x << "^" << n << " = " << y << endl;
}
