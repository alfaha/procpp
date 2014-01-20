//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.5 on page 258

int f(int n)
{ if (n < 2) return n;
  else return f(n-1) + f(n-2);
}
