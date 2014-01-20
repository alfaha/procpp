//  Example 2.4, page 26
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int sum;       // ok
  int Sum;       // ok
//  int sum;       // ILLEGAL: "sum" is already declared
  int _sum;      // ok
  int r2d2;      // ok
  int C3PO;      // ok
//  int 3PO;       // ILLEGAL: names must begin with a letter
  int maxSize;   // ok
  int max_size;  // ok
//  int max size;  // ILLEGAL: names may not includes blanks
//  int class;     // ILLEGAL: reserved word
  int O00ol11l;  // ok, but not good
}
