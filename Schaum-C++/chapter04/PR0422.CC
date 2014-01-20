//  Problem 4.22, page 79
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

int binary(int n);
//  Returns the binary numeral that represents n.
//  PRECONDITION: n >= 0
//  POSTCONDITION: each digit of the integer returned is a bit
//  EXAMPLE: binary(139) returns 10001011

int main()
{ cout << "binary(0) =   " << binary(0) << endl;
  cout << "binary(1) =   " << binary(1) << endl;
  cout << "binary(2) =   " << binary(2) << endl;
  cout << "binary(3) =   " << binary(3) << endl;
  cout << "binary(4) =   " << binary(4) << endl;
  cout << "binary(5) =   " << binary(5) << endl;
  cout << "binary(6) =   " << binary(6) << endl;
  cout << "binary(7) =   " << binary(7) << endl;
  cout << "binary(139) = " << binary(139) << endl;
  cout << "binary(141) = " << binary(141) << endl;
  cout << "binary(176) = " << binary(176) << endl;
}

int binary(int d)
{ assert(n >= 0);
  int d0 = d%2;
  d /= 2;
  int d1 = d%2;
  d /= 2;
  int d2 = d%2;
  d /= 2;
  int d3 = d%2;
  d /= 2;
  int d4 = d%2;
  d /= 2;
  int d5 = d%2;
  d /= 2;
  int d6 = d%2;
  d /= 2;
  int d7 = d%2;
  d /= 2;
  int d8 = d%2;
  d /= 2;
  int d9 = d%2;
  return ((((((((d9*10 + d8)*10 + d7)*10 + d6)*10 + d5)*10 + d4)*10
                      + d3)*10 + d2)*10 + d1)*10 + d0;
}
