//  Problem 11.36, page 260
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <math.h>
#include <iomanip.h>
#include <iostream.h>

int gcd(int m, int n)
{ if (m > n) return gcd(n, m);
  if (m == 0) return n;
  return gcd(n%m, m)			;
}

int lcm(int m, int n)
// returns the least common multiple of m and n
{ return m*n/gcd(m,n);
}

int main()
{ cout << "lcm(16, 20) = " << lcm(16, 20) << endl;
  cout << "lcm(40, 45) = " << lcm(40, 45) << endl;
  cout << "lcm(528, 936) = " << lcm(528, 936) << endl;
}
