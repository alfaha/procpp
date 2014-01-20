//  Problem 3.18, page 63
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>
#include <math.h>

int main()
{ double x = 3.141592653589793;
  cout << setprecision(16) << x << endl;
  int n;
  cout << "Enter number of digits: ";
  cin >> n;
  if (n < 9)
  { x *= pow(10,n);
    int round = int(x + 0.5);
    x = double(round)/pow(10,n);
  }
  else                                  // e.g., n == 13
  { x *= pow(10,8);                     // x == 314,159,265.3589793
    int m = int(x);                     // m == 314,159,265
    double y = (x - m)*pow(10,n-8);     // y ==             35897.93
    int round = int(y + 0.5);           // round =          35898
    y = double(m)*pow(10,n-8) + round;  // y == 31,415,926,535,898.0  
    x = y/pow(10,n);                    // x == 3.1415926535898
  }
  cout << x << endl;
}
