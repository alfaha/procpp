//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.13 on page 167
//  A subtraction operator for the Ratio class

class Ratio
{ friend Ratio operator-(Ratio, Ratio);
  //...
};

Ratio operator-(Ratio x, Ratio y)
{ int num = x._num*y._den - x._den*y._num;
  int den = x._den*y._den;
  Ratio temp(num, den);
  return temp;
}
