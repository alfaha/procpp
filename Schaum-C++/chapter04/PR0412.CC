//  Problem 4.12, page ??
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iomanip.h>
#include <iostream.h>
#include <math.h>

void round(double& x, int n);
// roundx x to n digits
// e.g., if x == 0.00123456789, then round(x,5) changes x to 0.0012346

int main()
{ double x = 3.141592653589793;
  int n;
  cout << "Enter number of digits: ";
  cin >> n;
  cout << setprecision(n+2) << x << endl;
  round(x, n);
  cout << x << endl;
  x = 0.00123456789013579;
  cout << x << endl;
  round(x, n);
  cout << x << endl;
  x = 1.23456789013579e20;
  cout << x << endl;
  round(x, n);
  cout << x << endl;
  x = 1.23456789013579e-20;
  cout << x << endl;
  round(x, n);
  cout << x << endl;
}

void shift(double& x, int n)
// multiplies x by 10^n
{ for (int i=0; i<n; i++)
    x *= 10.0;
  for (i=0; i<-n; i++)
    x *= 0.1;
}

void round(double& x, int n)
{ assert(x > 0);
  assert(n >= 0 && n <= 15);
  int log10x = int(log10(x));
  int s = int(x >= 1.0 ? log10x + 1 : log10x);
  if (n < 9)
 {  int m = n - s;
    shift(x, m);                 // now x has n digits left of point
    x = double(int(x + 0.5));
    shift(x, -m);
  }
  else
  { int m = 9 - s; 
    shift(x, m);                 // now x has 9 digits left of point
    double r = x - int(x);
    shift(r, n-9);
    r = double(int(r + 0.5));
    shift(r, 9-n);
    x = double(int(x)) + r;
    shift(x, -m);
  }
}
