//  Problem 4.20 on page 79
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <cassert>
#include <iostream>
using namespace std;

int binary(int n);
//  Returns the binary numeral that represents n.
//  PRECONDITION: n >= 0
//  POSTCONDITION: each digit of the integer returned is a bit
//  EXAMPLE: binary(139) returns 10001011

int main()
{ cout << "binary(139) = " << binary(139) << endl;
}

int binary(int d)
{ int d0 = d%2;  assert(d0 >= 0 && d0 <= 9);  d /= 2;
  int d1 = d%2;  assert(d1 >= 0 && d1 <= 9);  d /= 2;
  int d2 = d%2;  assert(d2 >= 0 && d2 <= 9);  d /= 2;
  int d3 = d%2;  assert(d3 >= 0 && d3 <= 9);  d /= 2;
  int d4 = d%2;  assert(d4 >= 0 && d4 <= 9);  d /= 2;
  int d5 = d%2;  assert(d5 >= 0 && d5 <= 9);  d /= 2;
  int d6 = d%2;  assert(d6 >= 0 && d6 <= 9);  d /= 2;
  int d7 = d%2;  assert(d7 >= 0 && d7 <= 9);  d /= 2;
  int d8 = d%2;  assert(d8 >= 0 && d8 <= 9);  d /= 2;
  int d9 = d%2;  assert(d9 >= 0 && d9 <= 9);  d /= 2;
  return ((((((((d9*10 + d8)*10 + d7)*10 + d6)*10 + d5)*10
                       + d4)*10 + d3)*10 + d2)*10 + d1)*10 + d0;
}
