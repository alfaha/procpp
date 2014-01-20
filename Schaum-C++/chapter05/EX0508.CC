//  Example 5.8, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char chars[10] = {0};
  short shorts[10] = {0};
  float floats[10] = {0.0};
  double doubles[10] = {0.0};
  cout << "sizeof(chars)   = " << sizeof(chars) << endl;
  cout << "sizeof(shorts)  = " << sizeof(shorts) << endl;
  cout << "sizeof(floats)  = " << sizeof(floats) << endl;
  cout << "sizeof(doubles) = " << sizeof(doubles) << endl;
  return 0;
}
