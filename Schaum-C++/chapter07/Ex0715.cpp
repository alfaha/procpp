//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.15 on page 152
//  An assignment operator

Ratio& Ratio::operator=(const Ratio& r)
{ _num = r._num;
  _den = r._den;
  return *this;
}
