//  Test driver for Date class
//  Example 8.12, page 181
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  int* p = &a[3];                              // p points to a[3]
  cout << "p = " << p << ", *p = " << *p;
  cout << "\n&a = " << &a;                   // ok: a is an lvalue
  cout << "\n&p = " << &p;                   // ok: p is an lvalue
  cout << "\n&(a[5]) = " << &(a[5]);      // ok: a[5] is an lvalue
  cout << "\n&(*(a+5)) = " << &(*(a+5));// ok: *(a+5) is an lvalue
  cout << "\n&(*(p+2)) = " << &(*(p+2));// ok: *(p+2) is an lvalue
  cout << "\n&(p+2) = " << &(p+2);  // ERROR: p+2 is not an lvalue
  cout << endl;
}
