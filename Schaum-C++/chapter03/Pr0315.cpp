//  Problem 3.15, page 63
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ float x;
  int n=2;
  int lgx=0;
  cin >> x;
  while (n <= x)
  { n *= 2;
    ++lgx;
  }
  cout << "lg(" << x << ") = " << lgx << endl;
}
