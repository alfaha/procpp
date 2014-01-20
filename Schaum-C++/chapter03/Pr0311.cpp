//  Problem 3.11, page 61
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include <math.h>

int main()
{ double a, b, c;
  cout << "Enter the coefficients a, b, and c: ";
  cin >> a >> b >> c;
  if (a == 0)
    if (b == 0)
      if (c == 0) cout << "Every real number is a solution";
      else cout << "There are no solutions";
    else cout << "The unique solution is " << -c/b;
  else
  { double d = b*b - 4*a*c;
    if (d < 0) cout << "There are no real solutions";
    else if (d == 0) cout << "The unique solution is " << -b/(2*a);
    else
    { double sqrtd = sqrt(d); 
      double x1 = (-b + sqrtd)/(2*a);
      double x2 = (-b - sqrtd)/(2*a);
      cout << "The two solutions are " << x1 << " and " << x2;
    }
  }
  cout << endl;
}
