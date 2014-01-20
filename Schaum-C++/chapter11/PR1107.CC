//  Problem 11.7, page 258
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

int factorial(int n)
{ if (n == 0 || n == 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 6;
  return n*factorial(n-1);
}

int main()
{ long fact, pre=1;
  for (int n=0; n < 10; n++)
    cout << setw(4) << setiosflags(ios::right) << n << "! = "
         << setw(12) << factorial(n) << endl;
}
