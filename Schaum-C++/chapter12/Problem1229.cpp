//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 12.29 on page 300

Iterator parent()
{ CBTI it(*_p);
  it._k = _k/2;
  return it;
}
