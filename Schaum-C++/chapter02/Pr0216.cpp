//  Problem 2.16, page 41
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>

using namespace std;

int main()
{ float x = 1.0;
  cout << x << endl;
  x *= 1e10;
  cout << x << endl;
  x *= 1e10;
  cout << x << endl;
  x *= 1e10;
  cout << x << endl;
  x *= 1e10;
  cout << x << endl;
}

