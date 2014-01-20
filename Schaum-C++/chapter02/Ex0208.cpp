//  Example 2.8, page 28
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n = 44;
  cout << n++ << endl;  // prints 44 and then increments n to 45
  cout << ++n << endl;  // increments n to 46 and then prints 46
}
