//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.15 on page 167
//  A size() function for the Ratio class

int Queue::size()
{ return _back - _front;
}
