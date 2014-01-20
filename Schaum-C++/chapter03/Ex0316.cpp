//  Example 3.16, page 49
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n = 1;
  int sum = 0;
  while (n <= 100)
  { sum += n*n;
    ++n;
  }
  cout << sum << endl;
}
