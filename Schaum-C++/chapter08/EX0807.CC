//  Test driver for Date class
//  Example 8.7, page 177
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ char s[] = "ABCDEFGHIJ";
  char* p = &s[3];                         // p points to s[3]
  char* q = &s[6];                         // q points to s[6]
  cout << "*p = " << *p << ", *q = " << *q << endl;
  --p;                                     // p points to s[2]
  ++q;                                     // q points to s[7]
  cout << "*p = " << *p << ", *q = " << *q << endl;
  cout << "q - p = " << q - p << endl;
}
