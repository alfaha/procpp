//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.9 on page 263

#include <iomanip>   // defines the setprecision() function
#include <iostream>  // defines cin and cout objects
#include <cmath>     // defines the sin() and cos() functions
const double EPSILON=0.005;
double s(double x);  // computes the sine of x
double c(double x);  // computes the cosine of x

int main()
{ double x;
  cout << setprecision(10);
  do
  { cin >> x;
    cout << "\ts =      " << s(x)   << ", c =      " << c(x) << endl;
    cout << "\tsin(x) = " << sin(x) << ", cos(x) = " << cos(x) <<endl;
  } while (x != 0.0);
}
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
  do
  { cin >> x;
    cout << "\ts = " << s(x) << ", c = " << c(x) << endl;
  } while (x != 0.0);
}
