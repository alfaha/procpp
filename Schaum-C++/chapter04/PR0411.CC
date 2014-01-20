//  Problem 4.11, page ??
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iomanip.h>
#include <iostream.h>
#include <math.h>

void shift(double& x, int n);
// multiplies x by 10^n
// e.g., if x == 0.00123456789, then shift(x,5) changes x to 123.456789

int main()
{ double x = 3.141592653589793;
  cout << setprecision(15) << x << endl;
  shift(x, 0);
  cout << x << endl;
  shift(x, 5);
  cout << x << endl;
  shift(x, -10);
  cout << x << endl;
}

void shift(double& x, int n)
// multiplies x by 10^n
{ for (int i=0; i<n; i++)
    x *= 10.0;
  for (i=0; i<-n; i++)
    x *= 0.1;
}
