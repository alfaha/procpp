//  Example 3.11, page 46
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n;
  cin >> n;
  if (n > 8)      cout << "8 < n"      << endl;
  else if (n > 5) cout << "5 < n <= 8" << endl;
  else if (n > 2) cout << "2 < n <= 5" << endl;
  else            cout <<     "n <= 2" << endl;
}
