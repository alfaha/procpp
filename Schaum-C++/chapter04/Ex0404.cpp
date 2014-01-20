//  Example 4.4 on page 68
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

double power(double x, int n);
// PRECONDITION: x > 0
// Returns the value of x raised to the power n

int main()
{ cout << power(7.4, 3) << endl;
  cout << power(7.4, -3) << endl;
}

double power(double x, int n)
{ double y = 1.0;
  for (int i=0; i<n; i++) // if n > 0, return x*x*...*x (n times)
    y *= x;
  for (int i=0; i>n; i--) // if n < 0, return 1/(x*x*...*x) (-n times)
    y /= x;
  return y;
}