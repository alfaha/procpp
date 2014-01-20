//  Example 2.24, page 35
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ float a = 3.0;
  float b = -3.0;
  float c = -6.0;
  float d = b*b - 4.0*a*c;
  float x1 = (-b + sqrt(d))/2.0*a;
  float x2 = (-b - sqrt(d))/2.0*a;
  cout << x1 << '\t' << x2 << endl;
}
