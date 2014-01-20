//  Example 2.7, page 28
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n = 33;
  n += 5;      // same as n = n + 5; makes n == 33 + 5 == 38
  n %= 8;      // same as n = n%8;   makes n == 38%8 == 6
  n *= n;      // same as n = n*n;   makes n == 6*6 == 36
}
