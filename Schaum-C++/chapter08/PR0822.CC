//  Test driver for Date class
//  Problem 8.22, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"
#include "Purse.h"

int f(Purse* p, Purse* q);
// Returns 1 if p and q point to the same purse. Returns 0 if p
// q point to different purses which have the same contents.
// Returns -1 if the two purses have different contents.

void print(Purse const x)
{ cout << "\t  pennies = " << x.pennies() << endl;
  cout << "\t  nickels = " << x.nickels() << endl;
  cout << "\t    dimes = " << x.dimes() << endl;
  cout << "\t quarters = " << x.quarters() << endl;
  cout << "\t    value = " << x.value() << endl << endl;
}

int main()
{ Purse x(1,2,3,4);
  cout << "Purse x contains:\n";
  print(x);
  Purse y(6,5,4,3);
  cout << "Purse y contains:\n";
  print(y);
  cout << "f(&x, &y) = " << f(&x, &y) << endl;
  Purse z(6,5,4,3);
  cout << "Purse z contains:\n";
  print(z);
  cout << "f(&y, &z) = " << f(&y, &z) << endl;
  Purse& rz = z;
  cout << "f(&z, &rz) = " << f(&z, &rz) << endl;
}

int f(Purse* p, Purse* q)
{ if (p == q) return 1;
  if (p->pennies() != q->pennies()) return -1;
  if (p->nickels() != q->nickels()) return -1;
  if (p->dimes() != q->dimes()) return -1;
  if (p->quarters() != q->quarters()) return -1;
  return 0;
}
