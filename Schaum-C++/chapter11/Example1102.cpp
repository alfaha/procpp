//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.2 on page 255

long factorial(int n)
{ long f=1;
  for (int i=2; i <= n; i++)
    f *= i;
  return f;
}
