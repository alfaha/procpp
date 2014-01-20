//  Example 2.6, page 27
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int m = 33;
  int n = 7;
  int q = m/n;  // the quotient of m by n
  int r = m%n;  // the remainder of m by n
  cout << m << "/" << n << " = " << q << endl;
  cout << m << "%" << n << " = " << r << endl;
  cout << q << "*" << n << " + " << r << " = " << q*n + r << endl;
}
