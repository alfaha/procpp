//  Example 3.21, page 51
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int sum = 0;
  for (int n=0; n <= 100; n++)
    sum += n*n;
  cout << sum << endl;  // prints 338350
}
