//  Test driver for Date class
//  Problem 8.3, page 183
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  int* p = &a[3];                              // p points to a[3]
  cout << "p = " << p << endl;
  cout << "*p = " << *p << endl;
  cout << "++(*p) = " << ++(*p) << endl;
  cout << "*(++p) = " << *(++p) << endl;
}
