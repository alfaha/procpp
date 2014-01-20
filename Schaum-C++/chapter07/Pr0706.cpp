//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.6 on page 163
//  A multiplication operator

Ratio operator*(const Ratio& x, const Ratio& y)
{ int num = x._num*y._num;
  int den = x._den*y._den;
  Ratio z(num, den);
  return z;
}
