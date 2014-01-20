//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.6 on page 259

int gcd(int m, int n)
{ if (m > n) return gcd(n, m);
  if (m == 0) return n;
  return gcd(n%m, m);
}
