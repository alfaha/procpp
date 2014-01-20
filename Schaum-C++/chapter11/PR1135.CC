//  Problem 11.35, page 260
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

int fib[100];

int f(int n)
{ if (n < 2) return fib[n] = n;
  return fib[n] = f(n-1) + f(n-2);
}

int main()
{ for (int n=0; n<20; n++)
    cout << setw(10) << "f(" << n << ") =" << "\t" << setw(6)
         << setiosflags(ios::right) << f(n) << endl;
}
