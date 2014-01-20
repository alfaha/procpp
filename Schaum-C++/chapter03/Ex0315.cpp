//  Example 3.15, page 48
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ double a, b, c, d, y = 1.0;
  cin >> a >> b >> c;
  d = b*b - 4*a*c;
  if (d >= 0 && sqrt(d) < y) cout << (-b + sqrt(d))/(2*a);
  else d = 0.0;
  cout << "\nd = " << d << endl;
}
