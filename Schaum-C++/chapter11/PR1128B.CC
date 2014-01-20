//  Problem 11.28, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iomanip.h>
#include <iostream.h>

int factorial(int n)
{ assert(n >= 0 && n <= 12);
  // 12! =         479,001,600
  // 13! =       6,227,020,800
  // LONG_MAX == 2,147,483,647
  if (n == 0 || n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 6;
  return n*factorial(n-1);
}

int main()
{ long fact, pre=1;
  for (int n=0; n < 13; n++)
    cout << setw(4) << setiosflags(ios::right) << n << "! = "
         << setw(12) << factorial(n) << endl;
}
