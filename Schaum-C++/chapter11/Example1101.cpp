//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.1 on page 255

long factorial(int n)
{ if (n == 0) return 1;
  else return n*factorial(n-1);
}
