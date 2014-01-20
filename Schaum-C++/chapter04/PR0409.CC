//  Problem 4.9, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include <math.h>

double f(double x)
{ return log(x) + 2.0*x - 6.0;
}

int main()
{ const double epsilon = 1e-8;
  double a = 2.0;
  double b = 3.0;
  double m = (a + b)/2.0;
  double y = f(m);
  while (b - a > epsilon && y != 0.0)
  { if (y < 0) a = m;
    else b = m;
    m = (a + b)/2.0;
    y = f(m);
  }
  cout << "f(" << m << ") = " << y << endl;
}
