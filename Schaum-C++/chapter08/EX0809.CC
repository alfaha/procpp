//  Test driver for Date class
//  Example 8.9, page 179
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int a[] = { 22, 33, 44, 55, 66, 77, 88, 99 };
  int* p = &a[2];                        // p points to a[2]
  cout << "p = " << p << ", *p = " << *p << endl;
  int* q = p+3;                          // q points to a[5]
  cout << "q = " << q << ", *q = " << *q << endl;
  cout << "p+4 = " << p+4 << ", *(p+4) = " << *(p+4) << endl;
  cout << "q-2 = " << q-2 << ", *(q-2) = " << *(q-2) << endl;
  cout << "q - p = " << q - p << endl;
}
