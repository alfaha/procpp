//  Example 4.7, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

double power(double x, int n)
{ assert(x > 0);
  double y = 1.0;
  for (int i=0; i<n; i++)  // if n > 0, return x*x*...*x (n times)
    y *= x;
  for (i=0; i>n; i--)  // if n < 0, return 1/(x*x*...*x) (n times)
    y /= x;
  return y;
}

main()
{ double x;
  int n = 1;
  while (n != 0)
  { cin >> x >> n;
    cout << "power(" << x << "," << n << ")= " << power(x, n) << endl;
  }
  return 0;
}
