//  Problem 3.27, page 65
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int m, n, tmp;
  cout << "Enter two positive integers: ";
  cin >> m >> n;
  cout << "The greatest common divisor of " << m << " and " << n;
  do
  { while (m <= n)
      n -= m;
    tmp = m;
    m = n;
    n = tmp;
  } while (m > 0);
  cout << " is " << n << endl; 
}
