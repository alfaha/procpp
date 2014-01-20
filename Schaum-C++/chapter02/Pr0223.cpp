//  Problem 2.23, page 42
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ int n, d0, d1, d2, d3, d4, d5;
  cout << "Enter a 6-digit positive integer: ";
  cin >> n;
  d0 = n%10;
  n /= 10;
  d1 = n%10;
  n /= 10;
  d2 = n%10;
  n /= 10;
  d3 = n%10;
  n /= 10;
  d4 = n%10;
  n /= 10;
  d5 = n%10;
  n = ((((d0*10 + d1)*10 + d2)*10 + d3)*10 + d4)*10 + d5;
  cout << n << endl;
}
