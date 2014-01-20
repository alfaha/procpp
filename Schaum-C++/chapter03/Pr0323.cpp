//  Problem 3.23, page 64
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n, k, perm=1;
  cout << "Enter n and k: ";
  cin >> n >> k;
  for (int i=1; i <= k; i++, n--)
    perm *= n;
  cout << "p(" << n+k << "," << k << ") = " << perm << endl;
}
