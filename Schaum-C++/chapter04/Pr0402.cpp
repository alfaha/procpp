//  Example 4.2 on page 67
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip>
#include <iostream>

using namespace std;

double power(double x, int n)
{ double y = 1.0;
  for (int i=0; i<n; i++)  // if n>0, return x*x*...*x (n times)
    y *= x;
  for (int i=0; i>n; i--)     // if n<0, return 1/(x*x*...*x) (n times)
    y /= x;
  return y;
}

int main()
{ cout << power(2.0, 5) << endl;
}
