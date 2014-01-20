//  Example 3.23, page 52
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n =7;
  for (int k=50; k<75; k++)
  { if (k%n == 0) break;
    cout << k << " ";
  }
  cout << endl;
}
