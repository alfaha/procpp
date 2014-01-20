//  Example 3.14, page 48
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int x;
  cin >> x;
  if (x > 2 && x < 6) cout << "x is between 2 and 6" << endl;
  if (x == 2 || x > 6) cout << "x is 2 or greater than 6" << endl;
  if (!(x > 6)) cout << "x is not greater than 6" << endl;
}
