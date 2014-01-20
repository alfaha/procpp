//  Problem 3.22, page 64
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n, fact=1;
  cout << "Enter n: ";
  cin >> n;
  for (int i=2; i <= n; i++)
    fact *= i;
  cout << n << "! = 1*2*...*" << n << " = " << fact << endl;
}
  