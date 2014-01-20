//  Example 3.17, page 49
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ float x;
  float sum = 0.0;
  while (cin >> x)
    sum += x;
  cout << "The sum is " << sum << endl;
}
