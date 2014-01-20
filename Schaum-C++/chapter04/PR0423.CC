//  Problem 4.23, page 79
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

double p(double x);
//  Returns 2x^5 - 7x^4 + 6x^3 + 9x^2 + 8x - 5.
//  EXAMPLE: p(4.1) returns 931.70732

int main()
{ cout << "p(0) =  " << p(0) << endl;
  cout << "p(1) =  " << p(1) << endl;
  cout << "p(2) =  " << p(2) << endl;
  cout << "p(-1) = " << p(-1) << endl;
  cout << "p(4.1) = " << p(4.1) << endl;
}

double p(double x)
{ return ((((2*x - 7)*x + 6)*x + 9)*x + 8)*x -5;
}
