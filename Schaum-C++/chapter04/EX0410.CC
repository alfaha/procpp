//  Example 4.10, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

bool is_prime(int n)
// Returns true iff n has no divisors except 1 and itself
{ assert(n > 0);
  if (n == 1) return false;
  if (n == 2) return true;         // 2 is the first prime
  if (n % 2 == 0) return false;    // 2 is the only even prime
  for (int d=3; d<n; d += 2)       // look for an odd divisor
    if (n % d == 0) return false;
  return true;                     // no odd divisors were found
}

int main()
{ int n = 2;
  while (n != 1)
  { cin >> n;
    if (is_prime(n)) cout << n << " is prime\n";
    else cout << n << " is not prime\n";
  }
  return 0;
}
