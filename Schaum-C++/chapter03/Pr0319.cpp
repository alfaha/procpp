//  Problem 3.19, page 63
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n, sum=0;
  cout << "Enter n: ";
  cin >> n;
  for (int i=1; i <= n; i++)
    sum += i;
  cout << "1 + 2 + 3 + ... + n = " << sum << endl;
  cout << "n*(n+1)/2           = " << n*(n+1)/2 << endl;
}