//  Example 3.12, page 47
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int x, ab;
  cin >> x;
  ab = ( x >= 0 ? x : -x);
  cout << "x = " << x << ", ab = " << ab << endl;
}
