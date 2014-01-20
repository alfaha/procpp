//  Problem 4.31, page 80
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

double power(double x, int n);
//  Returns x^n; i.e., x raised to the nth power.
//  PRECONDITION: x > 0
//  EXAMPLE: power(2.01, 3) return 8.120601

int main()
{ cout << "power(2, 10) = " << power(2, 10) << endl;
  cout << "power(2, 1) =  " << power(2, 1) << endl;
  cout << "power(2, 0) =  " << power(2, 0) << endl;
  cout << "power(2, -4) = " << power(2, -4) << endl;
}

double power(double x, int n)
{ assert(x > 0);
  double y = 1.0;
  if (n < 0)
  { x = 1.0/x;
    n = -n;
  }
  while (n > 0)
    if (n%2 == 0)  // i is even
    { x *= x;      // square z
      n /= 2;      // halve n
    }
    else           // i is odd
    { y *= x;
      --n;
    }
  return y;
}
