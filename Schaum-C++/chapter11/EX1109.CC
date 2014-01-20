//  Example 11.22, page 255
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>
#include <math.h>

const double EPSILON=0.5e-2;

double c(double x);

double s(double x)
{ if (x < EPSILON && -x < EPSILON) return x*(1 - x*x/6);
  return 2*s(x/2)*c(x/2);
}

double c(double x)
{ if (x < EPSILON && -x < EPSILON) return 1 - x*x/2;
  return 1 - 2*s(x/2)*s(x/2);
}

int main()
{ double x;
  cout << setprecision(10);
  do
  { cin >> x;
    cout << "\ts =      " << s(x)   << ", c =      " << c(x) << endl;
    cout << "\tsin(x) = " << sin(x) << ", cos(x) = " << cos(x) <<endl;
  } while (x != 0.0);
  return 0;
}
