//  Problem 2.12, page 39
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ int m, n;
  cout << "Enter two integers: ";
  cin >> m >> n;
  cout << '\t' << m << " + " << n << " = " << m + n << endl;
  cout << '\t' << m << " - " << n << " = " << m - n << endl;
  cout << '\t' << m << " * " << n << " = " << m * n << endl;
  cout << '\t' << m << " / " << n << " = " << m / n << endl;
  cout << '\t' << m << " % " << n << " = " << m % n << endl;
}
