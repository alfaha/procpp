//  Example 3.27, page 54
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ double x = 2.01;
  int n = 4;
  double y = 1.0, z = x;
  int i = n;
  while (i > 0)
    // INVARIANT: y*pow(z,i) == pow(x,n)
    if (i%2 == 0)
    { z *= z;
      i /= 2;
    }
    else
    { y *= z;
      --i;
    }
  cout << x << "^" << n << " = " << y << endl;
}
