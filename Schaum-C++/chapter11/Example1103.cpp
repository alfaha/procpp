//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 11.3 on page 255

float sum(float a[], int n)
{ if (n == 0) return a[0];
  else return a[n] + sum(a, n-1);
}
