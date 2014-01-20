//  Example 7.01c, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>
#include "sort.h"

void print(int x, int y, int z)
{ cout << a << ", " << b << ", "
       << c << endl;
}

int main()
{ int a = 77;
  int b = 33;
  int c = 99;
  sort(a, b, c);
  print(a, b, c);
  sort(a, c, b);
  print(a, b, c);
  sort(b, a, c);
  print(a, b, c);
  sort(b, c, a);
  print(a, b, c);
  sort(c, a, b);
  print(a, b, c);
  sort(c, b, a);
  print(a, b, c);
  return 0;
}
