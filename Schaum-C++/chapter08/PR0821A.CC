//  Test driver for Date class
//  Problem 8.21a, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"

int main()
{ short k;
  cout << "&k = " << &k << endl;
  int n;
  cout << "&n = " << &n << endl;
  float x;
  cout << "&x = " << &x << endl;
  double z;
  cout << "&z = " << &z << endl;
  string s(5, ' ');
  cout << "&s = " << &s << endl;
  bool b[5];
  cout << "&b[0] = " << &b[0] << endl;
  float y[5];
  cout << "&y[0] = " << &y[0] << endl;
}
