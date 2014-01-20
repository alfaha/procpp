//  Problem 3.14, page 62
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ float x;
  cin >> x;
  int sgn;
  if (x > 0) sgn = 1;
  else if (x == 0) sgn = 0;
  else sgn = -1;
  cout << "sgn = " << sgn << endl;
}
