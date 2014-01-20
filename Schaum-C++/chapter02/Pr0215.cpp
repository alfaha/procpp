//  Problem 2.15, page 40
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ float a = 1e0;
  float b = -1e10;
  float c = 1e0;
  float d = b*b - 4*a*c;
  float x1 = (-b + sqrt(d))/(2*a);
  float x2 = (2*c)/(-b + sqrt(d));
  cout << x1 << '\t' << x2 << endl;
}
