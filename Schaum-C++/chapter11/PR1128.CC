//  PROBLEM 11.7, page 258
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>
#include <math.h>

int factorial(int n)
{ if (n == 0 || n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 6;
  return n*factorial(n-1);
}

int main()
{ long fact, pre=1;
  for (int n=1; n < 100; n++)
  { fact = factorial(n);
    cout << n << "! = " << fact << endl;
    if (fact/pre != n) break;
    pre = fact;
  }
}
