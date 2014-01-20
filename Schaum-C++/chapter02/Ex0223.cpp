//  Example 2.23, page 35
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ double a = 1e0;     // == 1.0
  double b = -1e10;   // == -10,000,000,000.0
  double c = 1e0;     // == 1.0
  double d = b*b - 4.0*a*c;
  double x1 = (-b + sqrt(d))/(2.0*a);
  double x2 = (-b - sqrt(d))/(2.0*a);
  cout << x1 << '\t' << x2 << endl;
}
