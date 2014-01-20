//  Problem 3.10, page 61
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n;
  cout << "Enter year: ";
  cin >> n;
  if (n % 400 == 0) cout << n << " is a leap year.\n";
  else if (n % 100 == 0) cout << n << " is a not leap year.\n";
  else if (n % 4 == 0) cout << n << " is a leap year.\n";
  else cout << n << " is a not leap year.\n";
}
