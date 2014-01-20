//  Problem 4.25, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include <math.h>

int solutions(float& x1, float& x2, float a, float b, float c);
//  Modifies x1 and x2 so that they are the solutions to the
//  equation a*x*x + b*x + c == 0, and then returns either 0, 1,
//  2, or 3, according to whether the number of distinct solutions
//  is 0, 1, 2, or infinite. 
//  POSTCONDITION: if 1 is returned, then x1 is the unique sol'n;
//    if 2 is returned then x1 and x2 are the distinct sol'ns
//  EXAMPLE: solutions(x1, x2, 1, 6, 9) returns 1 with x1 == -3.0

int main()
{ float x1, x2, a, b, c;
  int n;
  do
  { cin >> a >> b >> c;
    n = solutions(x1, x2, a, b, c);
    cout << "\tn = " << n << endl;
    if (n == 3) continue;
    if (n > 0) cout << "\tx1 = " << x1 << endl;
    if (n > 1) cout << "\tx2 = " << x2 << endl;
  } while (a != 0 || b != 0 || c != 0);
}

int solutions(float& x1, float& x2, float a, float b, float c)
{ if (a == 0)
  { if (b == 0)
      if (c == 0) return 3;
      else return 0;
    x1 =-c/b;
    return 1;
  }
  double d = b*b - 4*a*c;
  if (d < 0) return 0;
  if (d == 0)
  { x1 = -b/(2*a);
    return 1;
  }
  double sqrtd = sqrt(d); 
  x1 = (-b + sqrtd)/(2*a);
  x2 = (-b - sqrtd)/(2*a);
  return 2;
}
