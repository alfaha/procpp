//  Problem 2.24, page 42
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{ double x = 3.1415926535897932;
  cout << setprecision(16) << x << endl;
  int n;
  cout << "Enter number of digits: ";
  cin >> n;
  double y = pow(10.0,n);
  x *= y;
  int rounded = int(x + 0.5);
  x = double(rounded)/y;
  cout << x << endl;
}
