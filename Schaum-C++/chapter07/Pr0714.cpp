//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.14 on page 167
//  A division operator for the Ratio class

class Ratio
{ friend Ratio operator/(Ratio, Ratio);
  //...
};

Ratio operator/(const Ratio& x, const Ratio& y)
{ assert(y._num != 0);
  int num = x._num*y._den;
  int den = x._den*y._num;
  Ratio z(num, den);
  return z;
}
