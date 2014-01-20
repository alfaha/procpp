//  Problem 3.28, page 65
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int f0=0, f1=1, f2, n;
  cout << "How many Fibonacci numbers do you want? ";
  cin >> n;
  cout << "\tf1 = 1\n";
  for (int i=2; i <= n; i++)
  { f2 = f1 + f0;
    cout << "\tf" << i << " = " << f2 << endl;
    f0 = f1;
    f1 = f2;
  }
}
