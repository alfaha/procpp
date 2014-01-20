//  Problem 3.31, page 66
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

int main()
{ float a;  // original amount of loan
  float r;  // interest rate; e.g., r = 0.06 for 6%
  float p;  // monthly payment
  int m=0;  // month number
  float x;  // remaining balance after m months
  cout << "Enter amount of loan (e.g., 10000.00): ";
  cin >> a;
  cout << "Enter annual interest rate (e.g., 0.06): ";
  cin >> r;
  r /= 12;  // convert r to a monthly rate
  cout << "Enter monthly payment (e.g., 350.00): ";
  cin >> p;
  x = a;
  while (x > 0.0)
  { cout << m << ".\t" << x << endl;
    x += r*x;  // add interest to remaining balance
    x -= p;    // subtract monthly payment
    ++m;
  }
}
