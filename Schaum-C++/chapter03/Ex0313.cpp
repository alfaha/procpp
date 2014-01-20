//  Example 3.13, page 47
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int x;
  cin >> x;
  cout << "You " << (x >= 60 ? "passed" : "failed") << " the test.\n";
}
