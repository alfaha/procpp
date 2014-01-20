//  Problem 3.13, page 62
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include <math.h>

int main()
{ float x;
  cin >> x;
  double y = ( x >= 0 ? sqrt(x) : sqrt(-x) );
  cout << "sqrt = " << y << endl;
  cout << "sqrt*sqrt = " << y*y << endl;
}
