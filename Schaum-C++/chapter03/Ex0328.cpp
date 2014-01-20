//  Example 3.28, page 55
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

int main()
{ setiosflags(ios::right);
  int n;
  cout << "How many columns? (1-16): ";
  cin >> n;
  for (int x=1; x <= n; x++)
  { for (int y=1; y <= n; y++)
      cout << setw(5) << x*y;
    cout << endl;
  }
}
