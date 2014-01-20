//  Test driver for Date class
//  Example 8.8, page 177
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  int* p = &a[3];                        // p points to a[3]
  cout << "p = " << p << ", *p = " << *p << endl;
  ++p;                                   // p points to a[4]
  cout << "p = " << p << ", *p = " << *p << endl;
  p += 3;                                // p points to a[7]
  cout << "p = " << p << ", *p = " << *p << endl;
  p -= 6;                                // p points to a[1]
  cout << "p = " << p << ", *p = " << *p << endl;
  --p;                                   // p points to a[0]
  cout << "p = " << p << ", *p = " << *p << endl;
}
