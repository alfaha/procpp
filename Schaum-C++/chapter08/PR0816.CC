//  Test driver for Date class
//  Problem 8.16, page 186
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int a[] = { 22, 33, 44, 55, 66, 77 };
  int* p = &a[3];       // assume that p gets the value 0x3fffcbc here
  int n = *p;
  cout << "a[3] = " << a[3] << ", p = " << p << ", n = " << n << endl;
  ++(*p);
  ++p;
  cout << "a[3] = " << a[3] << ", p = " << p << ", n = " << n << endl;
  int* q = &a[5];
  *(--q) = 88;
  cout << "a[4] = " << a[4] << ", q = " << q << ", n = " << n << endl;
  p -= 3;
  n = q - p;
  cout << "a[0] = " << a[0] << ", p = " << p << ", n = " << n << endl;
}
