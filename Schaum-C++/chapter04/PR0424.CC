//  Problem 4.24, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

int mod(int n, int d);
//  Returns n%d.
//  PRECONDITION: n >= d > 0
//  POSTCONDITION: (n/d)*d + r == n, where r is the returned value
//  EXAMPLE: mod(44, 7) returns 2

int main()
{ cout << "mod(44, 7) = " << mod(44, 7) << endl;
  cout << "mod(15, 7) = " << mod(15, 7) << endl;
  cout << "mod(10, 7) = " << mod(10, 7) << endl;
  cout << "mod(7, 7) =  " << mod(7, 7) << endl;
}

int mod(int n, int d)
{ assert(n >= d && d > 0);
  while (n > d)
    n -= d;
  return n;
}
