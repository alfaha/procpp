//  Example 3.7, page 45
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int n;
  cin >> n;
  if (n > 20)
  { cout << "That is too big!  Enter a smaller n: ";
    cin >> n;
  }
  cout << "n = " << n << endl;
}
